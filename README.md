# 323-1.1-Insertion-Sort<br />
### CSC 323-32: Project 1.1 (C++/Java)<br />
### Preston Peck<br />
### Due date: Sept. 6, 2016<br />

#### **** Algorithm steps for linked list insertion sort:<br />

Step 0: prepare the skeleton of your program, including classes, etc.<br />

Step 1:  open inFile1<br />

Step 2: CwordlistHead <-- make a new linked list by the list constructor<br />

Step 3:  commonWord <-- read a word from inFile1<br />

Step 4:  spot <-- findSpot(commonWord)<br />

Step 5:  newNode <-- make a new node for commonWord<br />

Step 6: call listInsert (Spot, newNode)<br />

Step 7: call printList (C CwordlistHead)<br />

Step 8: repeat step 3 to step 7 until the inFile1 is empty<br />


#### **** Algorithm steps for findSpot (listHead, data):<br />

Step 1: spot <-- listHead<br />

Step 2: if (spot.next != null) and spot.next.data < data<br />
           Spot <-- Spot.next<br />
           
Step 3: repeat step 2<br />

Step 4: return spot<br />

#### **** Algorithm steps for listInsert (Spot, newNode)<br />

Step 1: newNode <-- Spot.next<br />

Step 2: Spot.next <-- newNode <br />

### INPUT<br />
you<br />
I he she<br />
are is<br />
was am were<br />
of and if or<br />
him a an one<br />
yes no<br />

### OUTPUT<br />
listHead --> (dummy, you) --> (you, null)<br />

listHead --> (dummy, I) --> (I, you) --> (you, null)<br />

listHead --> (dummy, he) --> (he, I) --> (I, you) --> (you, null)<br />

listHead --> (dummy, he) --> (he, I) --> (I, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, I) --> (I, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, if) --> (if, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, I) --> (I, if) --> (if, is) --> (is, no) --> (no, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />
