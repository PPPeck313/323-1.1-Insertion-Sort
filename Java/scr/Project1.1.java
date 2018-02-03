//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

import java.io.*;
import java.util.*;

public class Project1 {
	public static void main(String[] args) {
		try {
			Scanner inFile1 = new Scanner(new FileReader(args[0]));
			PrintWriter outFile1 = new PrintWriter(args[1]);
			linkedList CwordlistHead = new linkedList();
			String commonWord;
			while(inFile1.hasNext()) {
				commonWord = inFile1.next();
				listNode spot = CwordlistHead.findSpot(commonWord);
				listNode newNode = new listNode(commonWord);
				CwordlistHead.listInsert(spot, newNode);
				CwordlistHead.printList(outFile1);
			}
			inFile1.close();
			outFile1.close();
		}
		catch (Exception e) {
			System.out.println(e);
		}
	}
}