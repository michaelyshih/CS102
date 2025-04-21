#include "ItemNode.h"

/*
Given main(), define an InsertAtEnd() member function in the ItemNode class that
adds an element to the end of a linked list. DO NOT print the head node that
does not contain user-input values.

Ex. if the input is:

4
Kale
Lettuce
Carrots
Peanuts
where 4 is the number of items to be inserted; Kale, Lettuce, Carrots, Peanuts
are the names of the items to be added at the end of the list.

The output is:

Kale
Lettuce
Carrots
Peanuts
*/

#ifndef MILEAGETRACKERNODEH
#define MILEAGETRACKERNODEH

#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructor
	ItemNode();

	// Constructor
	ItemNode(string itemInit);

	// Constructor
   	ItemNode(string itemInit, ItemNode *nextLoc);

	// Insert node after this node.
   void InsertAfter(ItemNode &nodeLoc);

	// TODO: Declare the InsertAtEnd() member function that inserts a parameter ItemNode
	//       to the end of the linked list
   void InsertAtEnd(ItemNode* nodeLoc);

   // Get location pointed by nextNodeRef
	ItemNode* GetNext();

	// Print data of this node
	void PrintNodeData();

	// Get data of this node
	string GetNodeItem();
};

#endif
