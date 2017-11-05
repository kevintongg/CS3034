//
// Created by Kevin Tong on 1/11/2017.
//

#include <iostream>
#include "familytree.h"

using namespace std;

FamilyTree::FamilyTree(string familyName, FamilyTreeNode firstRoot, FamilyTreeNode secondRoot)
    : familyName(move(familyName)),
      firstRoot(move(firstRoot)),
      secondRoot(move(secondRoot)) {}

FamilyTreeNode *FamilyTree::setRoot(FamilyTreeNode *node) {
  int rootCounter = 0;
  auto *newNode = (FamilyTreeNode *) malloc(sizeof(FamilyTreeNode));
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

void FamilyTree::addNode(FamilyTreeNode *node) {

}

void FamilyTree::getAllNodes() {

}

void FamilyTree::getDescendants(FamilyTreeNode *node) {

}

bool FamilyTree::isDescendantOf(FamilyTreeNode *node1, FamilyTreeNode *node2) {
  return false;
}

void FamilyTree::getAncestors(FamilyTreeNode *node) {

}

bool FamilyTree::isAncestorOf(FamilyTreeNode *node1, FamilyTreeNode *node2) {
  if (getAncestors(node2) == getAncestors(node1)) {
  
  }
}

const string &FamilyTree::getFamilyName() const {
  return familyName;
}

void FamilyTree::setFamilyName(const string &familyName) {
  FamilyTree::familyName = familyName;
}

const FamilyTreeNode &FamilyTree::getFirstRoot() const {
  return firstRoot;
}

void FamilyTree::setFirstRoot(const FamilyTreeNode &firstRoot) {
  FamilyTree::firstRoot = firstRoot;
}

const FamilyTreeNode &FamilyTree::getSecondRoot() const {
  return secondRoot;
}

void FamilyTree::setSecondRoot(const FamilyTreeNode &secondRoot) {
  FamilyTree::secondRoot = secondRoot;
}
