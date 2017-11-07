#include <iostream>
#include <set>
#include "FamilyTree.h"

using namespace std;

void printAllNodes(FamilyTree *tree) {
  cout << "all nodes in " << tree->getFamilyName() << " tree: " << std::endl;
  set<TreeNode *> all = tree->getAllNodes();
  while (!all.empty()) {
    std::cout << ' ' << (*all.begin())->getFullName() << endl;
    all.erase(all.begin());
  }
}

int main() {
  FamilyTree *ants = new FamilyTree("Ant Family");
  TreeNode *adam = new TreeNode("Adam", "Ant", NULL, NULL, 1950, 1, 15, 'm');
  TreeNode *eve = new TreeNode("Eve", "Ant", NULL, NULL, 1950, 12, 15, 'f');

  ants->setRoot(adam);
  ants->setRoot(eve);

  TreeNode *cain = new TreeNode("Cain", "Ant", adam, eve, 1972, 7, 1, 'm');
  ants->addNode(cain);

  TreeNode *cainsWife = new TreeNode("Cain\'s", "Wife", NULL, NULL, 1973, 9, 21, 'f');
  ants->addNode(cainsWife);

  TreeNode *abel = new TreeNode("Abel", "Ant", adam, eve, 1974, 11, 17, 'm');
  ants->addNode(abel);

  TreeNode *enoch = new TreeNode("Enoch", "Ant", cain, cainsWife, 1976, 3, 5, 'm');
  ants->addNode(enoch);
  printAllNodes(ants);

  cout << endl;

  cout << adam->getFullName() << " is" << (ants->isAncestor(adam, abel) ? "" : "n\'t") << " an ancestor of "
       << abel->getFullName() << endl;
  cout << eve->getFullName() << " is" << (ants->isAncestor(eve, enoch) ? "" : "n\'t") << " an ancestor of "
       << enoch->getFullName() << endl;
  cout << adam->getFullName() << " is" << (ants->isAncestor(adam, adam) ? "" : "n\'t") << " an ancestor of "
       << adam->getFullName() << endl;
  cout << abel->getFullName() << " is" << (ants->isAncestor(abel, eve) ? "" : "n\'t") << " an ancestor of "
       << eve->getFullName() << endl;
  cout << enoch->getFullName() << " is" << (ants->isAncestor(enoch, adam) ? "" : "n\'t") << " an ancestor of "
       << adam->getFullName() << endl;


  cout << abel->getFullName() << " is" << (ants->isDescendant(abel, eve) ? "" : "n\'t") << " a descendant of "
       << eve->getFullName() << endl;
  cout << enoch->getFullName() << " is" << (ants->isDescendant(enoch, adam) ? "" : "n\'t") << " a descendant of "
       << adam->getFullName() << endl;
  cout << adam->getFullName() << " is" << (ants->isDescendant(adam, adam) ? "" : "n\'t") << " a descendant of "
       << adam->getFullName() << endl;
  cout << adam->getFullName() << " is" << (ants->isDescendant(adam, abel) ? "" : "n\'t") << " a descendant of "
       << abel->getFullName() << endl;
  cout << adam->getFullName() << " is" << (ants->isDescendant(adam, enoch) ? "" : "n\'t") << " a descendant of "
       << enoch->getFullName() << endl;

  vector<TreeNode *> adamsDescendants = ants->getDescendants(adam);
  cout << "Adam\'s descendants: " << endl;
  for (int i = 0; i < (int) adamsDescendants.size(); i++) {
    cout << ' ' << adamsDescendants[i]->getFullName() << endl;
  }

  vector<TreeNode *> enochsAncestors = ants->getAncestors(enoch);
  cout << "Enoch\'s ancestors: " << endl;
  for (int i = 0; i < (int) enochsAncestors.size(); i++) {
    cout << ' ' << enochsAncestors[i]->getFullName() << endl;
  }
  
  cout << endl;
  
  return 0;
}