//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef FAMILYTREENODE
#define FAMILYTREENODE

#include <vector>
#include "child.h"

typedef struct FamilyTreeNode {
  Person *person{};
  Parent father;
  Parent mother;
  vector<Child *> children{};
} TreeNode;



#endif // FAMILYTREENODE
