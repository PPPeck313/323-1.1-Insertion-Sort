//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

public class listNode {
	String data;
	int count;
	listNode next;
	
	listNode() {
		data = null;
		count = 0;
		next = null;
		
	}
	
	listNode(String d) {
		data = d;
		count = 0;
		next = null;
	}
	
	String getData() {
		return data;
	}
	
	void setData(String d) {
		data = d;
	}
	
	int getCount() {
		return count;
	}
	
	void addCount() {
		count = count + 1;
	}
	
	listNode getNext() {
		return next;
	}
	
	void setNext(listNode ln) {
		next = ln;
	}
}