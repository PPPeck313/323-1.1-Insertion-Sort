//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#include "linkedList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

linkedList::linkedList() {
	listHead = new listNode();
}

linkedList::linkedList(linkedList& other) {
	listHead = other.listHead;
}

void linkedList::operator=(const linkedList& other) {
	listHead = other.listHead;
}

linkedList::~linkedList() {
	listNode* spot = listHead;
	while(spot->getNext() != NULL) {
    	listNode* next = spot->getNext();
    	delete spot;
    	spot = next;
	}
	delete spot;
}
	
listNode* linkedList::findSpot(string data) {
	listNode* spot = listHead;	
	while (spot->getNext() != NULL && spot->getNext()->getData().compare(data) < 0) {
		spot = spot->getNext();
	}
	return spot;
}
	
void linkedList::listInsert(listNode* Spot, listNode* newNode) {
	newNode->setNext(Spot->getNext());
	Spot->setNext(newNode);
}
	
void linkedList::printList(ofstream& outFile) {
	outFile << "listHead --> (dummy, ";
	listNode* spot = listHead;
	while (spot->getNext() != NULL) {
		spot = spot->getNext();
		if (spot->getData() == "i") {
			char letter = toupper(spot->getData()[0]);
			string upperCase = "";
			upperCase.append(1, letter);
			outFile << upperCase << ") --> (" << upperCase << ", ";
		}
		else {
			outFile << spot->getData() << ") --> (" << spot->getData() << ", ";
		}
	}
	outFile << "null)" << endl;
}

