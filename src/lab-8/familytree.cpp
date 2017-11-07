//
// Created by Kevin Tong on 1/11/2017.
//

#include <iostream>
#include <set>
#include "familytree.h"

using namespace std;

FamilyTree::FamilyTree(string familyName, TreeNode firstRoot, TreeNode secondRoot)
    : familyName(move(familyName)),
      firstRoot(move(firstRoot)),
      secondRoot(move(secondRoot)) {}

FamilyTree::FamilyTree(string familyName) :
    familyName(move(familyName)) {}

TreeNode *FamilyTree::setRoot(TreeNode *node) {
  int rootCounter = 0;
  auto *newNode = (TreeNode *) malloc(sizeof(TreeNode));
  if (rootCounter <= 2) {
    if (newNode == nullptr) {
      cout << "Error setting new root." << endl;
      return nullptr;
    }
  } else if (rootCounter > 2) {
    cout << "We already have 2 roots! Sorry!" << endl;
    return nullptr;
  }

}

void FamilyTree::addNode(TreeNode *node) {

}

set<TreeNode *> FamilyTree::getAllNodes() {

}

vector<TreeNode *> FamilyTree::getDescendants(TreeNode *node) {

}

bool FamilyTree::isDescendant(TreeNode *node1, TreeNode *node2) {
  return false;
}

vector<TreeNode *> FamilyTree::getAncestors(TreeNode *node) {

}

bool FamilyTree::isAncestor(TreeNode *node1, TreeNode *node2) {
  if (getAncestors(node2) == getAncestors(node1)) {

  }
}

const string &FamilyTree::getFamilyName() const {
  return familyName;
}

void FamilyTree::setFamilyName(const string &familyName) {
  FamilyTree::familyName = familyName;
}

const TreeNode &FamilyTree::getFirstRoot() const {
  return firstRoot;
}

void FamilyTree::setFirstRoot(const TreeNode &firstRoot) {
  FamilyTree::firstRoot = firstRoot;
}

const TreeNode &FamilyTree::getSecondRoot() const {
  return secondRoot;
}

void FamilyTree::setSecondRoot(const TreeNode &secondRoot) {
  FamilyTree::secondRoot = secondRoot;
}
