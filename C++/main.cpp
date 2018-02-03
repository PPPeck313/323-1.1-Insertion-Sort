//Preston Peck
//CS 323-23
//September 5, 2016
//Project 1.1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class listNode {
private:
    string data;
	int count;
	listNode* next;
public:
    listNode();
    listNode(string d);
    listNode(listNode& other);
    void operator=(const listNode& other);

    string getData();
    void setData(string d);
    int getCount();
    void addCount();
    listNode* getNext();
    void setNext(listNode* ln);
};

class linkedList {
private:
    listNode* listHead;
public:
    linkedList();
    linkedList(linkedList& other);
    void operator=(const linkedList& other);
	~linkedList(); 

    listNode* findSpot(string data);
    void listInsert(listNode* Spot, listNode* newNode);
    void printList(ofstream& outFile);
};

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


listNode::listNode() {
	data = "";
	count = 0;
	next = NULL;		
}
	
listNode::listNode(string d) {
	data = d;
	count = 0;
	next = NULL;
}

listNode::listNode(listNode& other) {
    data = other.data;
	count = other.count;
	next = other.next;	
}

void listNode::operator=(const listNode& other) {
    data = other.data;
	count = other.count;
	next = other.next;	
}
	
string listNode::getData() {
	return data;
}
	
void listNode::setData(string d) {
	data = d;
}
	
int listNode::getCount() {
	return count;
}
	
void listNode::addCount() {
	count = count + 1;
}
	
listNode* listNode::getNext() {
	return next;
}
	
void listNode::setNext(listNode* ln) {
	next = ln;
}


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