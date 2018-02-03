# 323-1.1-Insertion-Sort
CSC 323-32: Project 1.1 (C++/Java)
Preston Peck
Due date: Sept. 6, 2016 

**** Algorithm steps for linked list insertion sort:

Step 0: prepare the skeleton of your program, including classes, etc.
Step 1:  open inFile1
Step 2: CwordlistHead <-- make a new linked list by the list constructor
Step 3:  commonWord <-- read a word from inFile1
Step 4:  spot <-- findSpot(commonWord)
Step 5:  newNode <-- make a new node for commonWord
Step 6: call listInsert (Spot, newNode)
Step 7: call printList (C CwordlistHead)
Step 8: repeat step 3 to step 7 until the inFile1 is empty


**** Algorithm steps for findSpot (listHead, data):

Step 1: spot <-- listHead
Step 2: if (spot.next != null) and spot.next.data < data
           Spot <-- Spot.next
Step 3: repeat step 2
Step 4: return spot

**** Algorithm steps for listInsert (Spot, newNode)

Step 1: newNode <-- Spot.next
Step 2: Spot.next <-- newNode 


INPUT
you
I he she
are is
was am were
of and if or
him a an one
yes no

OUTPUT
listHead --> (dummy, you) --> (you, null)
listHead --> (dummy, I) --> (I, you) --> (you, null)
listHead --> (dummy, he) --> (he, I) --> (I, you) --> (you, null)
listHead --> (dummy, he) --> (he, I) --> (I, she) --> (she, you) --> (you, null)
listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, she) --> (she, you) --> (you, null)
listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, you) --> (you, null)
listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)
listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)
listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, if) --> (if, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, a) --> (a, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)
listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)
listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, no) --> (no, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)
