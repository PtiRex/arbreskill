//============================================================================
// Name        : arbrecompet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "skilltree_KMDS.hpp"

using namespace std;


inline skillTree::skillTree() {
	skillName="";
	skillPoint=0;
	leftChild=NULL;
	rightChild=NULL;

}

inline skillTree::~skillTree(){

}

inline void skillTree::setLeftChild(skillTree*LeftChild) {
	leftChild=LeftChild;
}

inline void skillTree::setRightChild(skillTree*RightChild) {
	rightChild=RightChild;
}

inline void skillTree::levelUpSkill() {
	skillPoint++ ;
}

inline void skillTree::setName(string name){
	skillName=name;
}


inline void skillTree::resetSkillpoint(skillTree*SkillPoint) {
	skillPoint=0;
}

inline int skillTree::getDepth(){
	leftChild -> getDepth();
	rightChild -> getDepth();
	depth++;/

	if(leftChild == NULL && rightChild == NULL){
		return 0;
	}

	if(leftChild == NULL){
	   return 1+rightChild->getDepth();
	}
	if(rightChild == NULL){
		return 1+leftChild->getDepth();
	}
		return 1+max(leftChild->getDepth(), rightChild->getDepth());
	}

}

inline void skillTree::display(){

}

}
