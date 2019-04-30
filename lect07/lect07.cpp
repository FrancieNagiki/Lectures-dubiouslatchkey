#include <iostream>
using namespace std;

class linkedList{
	public:
	
	linkedList(){
		head = nullptr;
	}

	void append(int item){
		if(!head){
			head = new Node;
			head->data = item;
			head->next = nullptr;
		}
		else{
			Node* last = head;
			while(last->next){
				last = last->next;
			}
			Node* append = new Node;
			append->data = item;
			append->next = nullptr;
			last->next = append;
		}
	}

	int sum(){
		return recursiveSum(head);
	}
	int clear(){
		recursiveClear(head);
		head = nullptr;
	}
	
	private:
		struct Node{
			Node* next;
			int data;
		};
	
	int recursiveSum(Node* first){
		if(!first){
			return 0;
		}
		return first->data + recursiveSum(first->next);
	}
	void recursiveClear(Node* first){
		if(!first->next){
			delete first;
		}
		else{
			recursiveClear(first->next);
			delete first;
		}
	}

	Node* head;
};


int main(){
	linkedList l;
	l.append(3);
	l.append(1);
	l.append(4);

	cout << l.sum() << endl;
	
	l.clear();

	cout << l.sum() << endl;

	return 0;
}
