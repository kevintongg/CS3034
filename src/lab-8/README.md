# CS 3034 Lab 8 – Family Tree

**Write a C++ Application that Manages a Family Tree**

* The FamilyTree is a structure made up of FamilyTreeNodes. Each node should have a pointer to a Person, two pointers to parents, and a vector of pointers to its children.
* Do not be misled by the word "tree." The FamilyTree should have two roots, and each node has two parents (although they may be NULL) and any number of children.
* The FamilyTree has a string for the family name and pointers to its two roots, which are FamilyTreeNodes.
* A Person has ints for month, day, and year of birth, std::strings for first name and last name, and a char for gender.
* FamilyTree needs the following functions:
  * setRoot(node) sets the node as one of the roots of the tree. If the tree already has two roots, print an error message.
  * addNode(nodeA) adds a FamilyTreeNode to the FamilyTree. It should update the parent nodes to add teh new node to their lists of children.
  * getAllNodes() returns a std::set of all nodes in the tree.
  * getDescendants(node a) uses a breadth first traversal to get a vector of all descendants of node a (its children, their children, etc.) Cycles should not occur with correct data, but one node might be descended from another in more than one way (for example, if two cousins have a child together.) In this case, a node will appear more than once in the descendants list.
  * isDescendantOf(node1, node2) returns a bool that indicates whether node1 is a descendant of node2. It should do this by running getDescendants() on node2 and searching the vector for node1.
  * getAncestors(node a) uses a recursive depth-first traversal to get a vector of all ancestors of node a (its parents, their parents, etc.) If one node is an ancestor of another in more than one way, the ancestor node will appear more than once.
  * isAncestorOf(node1, node2) returns a bool that indicates whether node1 is an ancestor of node2. It should do this by running getAncestors() on node2 and searching the vector for node1. Of course, this could be done by searching node1's descendant list instead, but do it my way.
* Person, FamilyTreeNode, and FamilyTree will need constructors, overloaded output operators (I am not showing the angle-brace syntax here because it would not display correctly in most browsers), and many other functions.
* Use dynamic memory allocation; the FamilyTree, Persons, and FamilyTreeNodes should be created with new
* Download the FamilyTreeDriver from the website and make sure all the output it produces is correct.
* The FamilyTree will similar in some ways to various data structures you have studied. I suggest you begin by thinking about linked lists and binary trees.

Write a function that detects any cycles as each node is added, preventing the new node from being added.