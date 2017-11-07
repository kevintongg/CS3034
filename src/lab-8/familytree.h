//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef FAMILYTREE
#define FAMILYTREE

#include <vector>
#include <set>
#include "person.h"
#include "parent.h"
#include "child.h"
#include "familytreenode.h"


class FamilyTree {

public:
  
  FamilyTree(string familyName, TreeNode firstRoot, TreeNode secondRoot);

  explicit FamilyTree(string familyName);

  const string &getFamilyName() const;
  
  void setFamilyName(const string &familyName);
  
  const TreeNode &getFirstRoot() const;
  
  void setFirstRoot(const TreeNode &firstRoot);
  
  const TreeNode &getSecondRoot() const;
  
  void setSecondRoot(const TreeNode &secondRoot);
  
  TreeNode *setRoot(TreeNode *node);
  
  void addNode(TreeNode *Node);
  
  set<TreeNode *> getAllNodes();
  
  vector<TreeNode *> getDescendants(TreeNode *node);
  
  bool isDescendant(TreeNode *node1, TreeNode *node2);
  
  vector<TreeNode *> getAncestors(TreeNode *node);
  
  bool isAncestor(TreeNode *node1, TreeNode *node2);

private:
  string familyName;
  TreeNode firstRoot, secondRoot;
};


#endif // FAMILYTREE
