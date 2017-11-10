//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef FAMILYTREENODE
#define FAMILYTREENODE

#include <vector>
#include "child.h"

typedef struct FamilyTreeNode {
  Person *person;
  Parent *father;
  Parent *mother;
  vector<Child *> children{};

  const string & getFullName() {
    const string &fullName = person->getFirstName() + person->getLastName();
    return fullName;
  }
} TreeNode;


#endif // FAMILYTREENODE
