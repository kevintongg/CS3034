//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef FAMILYTREE
#define FAMILYTREE

#include <vector>
#include "person.h"
#include "parent.h"
#include "child.h"
#include "familytreenode.h"


class FamilyTree {

public:
  
  FamilyTree(string familyName, FamilyTreeNode firstRoot, FamilyTreeNode secondRoot);
  
  const string &getFamilyName() const;
  
  void setFamilyName(const string &familyName);
  
  const FamilyTreeNode &getFirstRoot() const;
  
  void setFirstRoot(const FamilyTreeNode &firstRoot);
  
  const FamilyTreeNode &getSecondRoot() const;
  
  void setSecondRoot(const FamilyTreeNode &secondRoot);
  
  FamilyTreeNode *setRoot(FamilyTreeNode *node);
  
  void addNode(FamilyTreeNode *Node);
  
  void getAllNodes();
  
  void getDescendants(FamilyTreeNode *node);
  
  bool isDescendantOf(FamilyTreeNode *node1, FamilyTreeNode *node2);
  
  void getAncestors(FamilyTreeNode *node);
  
  bool isAncestorOf(FamilyTreeNode *node1, FamilyTreeNode *node2);

private:
  string familyName;
  FamilyTreeNode firstRoot, secondRoot;
};


#endif // FAMILYTREE
