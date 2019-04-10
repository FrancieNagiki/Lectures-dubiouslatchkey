#include "lect04.h"
#include <iostream>
#include <vector>
using namespace std;

void doublyLinkedListTest::testAppend(){
	cout << "Append Tests" << endl;
	testAppend0();
	testAppend1();
	testAppend2();
}

void doublyLinkedListTest::testAppend0(){
	string testName = "case 0: append to empty list\n";
	doublyLinkedList emptyList;
	emptyList.append(1);

	vector<int> testWith;
	vector<int> testAgainst;
	
	testWith = emptyList.vectorize();
	testAgainst.push_back(1);

	if(testWith == testAgainst){
		cout << "Passed " << testName;
	}
	else{
		cout << "Failed " << testName;
	}
}

void doublyLinkedListTest::testAppend1(){

}

void doublyLinkedListTest::testAppend2(){

}
