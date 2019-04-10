#include <iostream>
#include "lect04.h"
#include <vector>
using namespace std;

doublyLinkedList::doublyLinkedList(){
	head = nullptr;
	tail = nullptr;
}

doublyLinkedList::~doublyLinkedList(){
	if(head){	
		Node* temp;
		while(head != tail){
			temp = head;
			head = head->next;
			delete temp;
		}
		delete head;
	}
}

void doublyLinkedList::append(int item){
	if(!head){
		head = new Node(item);
		tail = head;
	}
	else{
		Node* append = new Node(item);
		append->prev = tail;
		tail->next = append;
	}
}

void doublyLinkedList::remove(int item){
	Node* current = head;
	Node* temp;
	while(current){
		if(current->data == item){
			temp = current;
			current = current->next;
			if(current->prev->prev){
				current->prev = current->prev->prev;
				current->prev->next = current;
			}
			delete temp;
			
		}
		else{current = current->next;}
	}
}

bool doublyLinkedList::search(int item){
	Node* current = head;
	while(current){
		if(current->data == item){
			return true;
		}
		current = current->next;
	}
	return false;
}

int doublyLinkedList::min(){
	Node* current = head;
	int min = current->data;
	while(current){
		if(min < current->data){
			min = current->data;
		}
		current = current->next;
	}
	return min;
}

int doublyLinkedList::max(){
	Node* current = head;
	int max = current->data;
	while(current){
		if(max > current->data){
			max = current->data;
		}
		current = current->next;
	}
	return max;
}

void doublyLinkedList::print(){
	Node* current = head;
	while(current){
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}


vector<int> doublyLinkedList::vectorize(){
	vector<int> list;
	Node* current = head;
	while(current){
		list.push_back(current->data);
		current = current->next;
	}
	return list;
}

bool doublyLinkedList::operator==(doublyLinkedList& other){
	Node* current = head;
	Node* otherCurrent = other.head;

	while(head){
		if(current->data != otherCurrent->data){
			return false;
		}
		current = current->next;
		otherCurrent = otherCurrent->next;
	}
	return head == otherHead;
}

int main(){
	doublyLinkedListTest test;
	test.testAppend();
	return 0;
}
