#include "linkedList.h"
#include <iostream>
//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
	ifstream inFile1;
	ofstream outFile1;
    inFile1.open(argv[1]);
    outFile1.open(argv[2]);
    if (!inFile1.is_open()) {
        cerr<<"File failed to open!"<<endl;
        return 0;
    }
	linkedList* CwordlistHead = new linkedList();
	string commonWord;
	while(inFile1 >> commonWord) {
        if (commonWord == "I") {
		    commonWord[0] = tolower(commonWord[0]);
	    }
		listNode* spot = CwordlistHead->findSpot(commonWord);
		listNode* newNode = new listNode(commonWord);
		CwordlistHead->listInsert(spot, newNode);    
		CwordlistHead->printList(outFile1);
	}
    inFile1.close();
    outFile1.close();
}