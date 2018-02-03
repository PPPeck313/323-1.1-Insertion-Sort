//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

import java.io.*;

class linkedList {
	listNode listHead;
	
	linkedList() {
		listHead = new listNode();
	}
	
	listNode findSpot(String data) {
		listNode spot = listHead;
		while (spot.getNext() != null && spot.getNext().getData().compareToIgnoreCase(data) < 0) {
			spot = spot.getNext();
		}
		return spot;
	}
	
	void listInsert(listNode Spot, listNode newNode) {
		newNode.setNext(Spot.getNext());
		Spot.setNext(newNode);
	}
	
	void printList() {
		System.out.print("listHead --> (dummy, ");
		listNode spot = listHead;
		while (spot.getNext() != null) {
			spot = spot.getNext();
			System.out.print(spot.getData() + ")");
			System.out.print(" --> (" + spot.getData() + ", ");
		}
		System.out.print("null)");
		System.out.println();	
	}
	
	void printList(PrintWriter outFile) {
		outFile.print("listHead --> (dummy, ");
		listNode spot = listHead;
		while (spot.getNext() != null) {
			spot = spot.getNext();
			outFile.print(spot.getData() + ") --> (" + spot.getData() + ", ");
		}
		outFile.print("null)");
		outFile.println();	
	}
}