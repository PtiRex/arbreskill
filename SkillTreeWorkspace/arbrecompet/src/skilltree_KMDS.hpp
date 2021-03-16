#ifndef skilltree_KMDS
#define skilltree_KMDS

#include <iostream>

using namespace std;

class skillTree {
	private:

		string skillName;
		int skillPoint;
		skillTree *rightChild;
		skillTree *leftChild;

	public:

		skillTree();
		~skillTree();
		void setName(string name);
		void setLeftChild(skillTree*LeftChild);
		void setRightChild(skillTree*RightChild);
		void levelUpSkill();
		void resetSkillpoint(skillTree*SkillPoint);

};
