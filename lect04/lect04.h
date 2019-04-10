#include <vector>
#include <iostream>
using namespace std;

class doublyLinkedList{

public:
	doublyLinkedList();
	~doublyLinkedList();
	void append(int item);
	void remove(int item);
	bool search(int item);
	int min();
	int max();
	void print();
	vector<int> vectorize();
	bool operator==(doublyLinkedList& other);
private:
	struct Node{
		Node(int item):data(item), next(nullptr), prev(nullptr){}
		Node* next;
		Node* prev;
		int data;
	};
	Node* head;
	Node* tail;

};


class doublyLinkedListTest{

public:
	void runAll();
	void testDoublyLinkedListConstructor();
	void testDoublyLinkedListDestructor();
	void testAppend();
	void testRemove();
	void testSearch();
	void testMin();
	void testMax();
	void testPrint();
	void testVectorize();

private:
	void testAppend0();
	void testAppend1();
	void testAppend2();
};
