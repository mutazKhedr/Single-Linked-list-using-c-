

#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};
node* head = NULL;

// Add new node in linked list 
void insertNode(int value) {
	node* new_node , *last;
	new_node = new node;
	new_node->data = value;
	if (head == NULL) {
		head = new_node;
		new_node->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = new_node;
		new_node->next = NULL;

	}
}

//display linked list 
void diplayLinkedList() {
	node* current_node; 
	if (head == NULL) {
		cout << "Linked List Is Empty " << endl;
	}
	else {
		current_node = head;
		while (current_node != NULL) {
			cout << current_node->data ;
			cout << " ";
			current_node = current_node->next;

		}
	}
}

// delete node
void deleteNode(int value) {
	node* current, *previous;
	current = head;
	previous = head;
	if (current->data == value) {
		head = current->next;
		delete(current);
		return;
	}
	while (current->data != value) {
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	delete(current);
}
// Insert deginning 
void insertBeginning(int value) {
	node* new_node = new node;
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}
void deleteBeginning() {
	node* firstNode;
	firstNode = head;
	if (head == NULL) {
		cout << "Linked List Is Empty";
	}
	else {
		head = firstNode->next;
		delete(firstNode);
	}
}
// Delete Node at the end
void deleteEnd() {
	node* ptr;
	ptr = head;
	if (head == NULL) {
		cout << "linked list is empty" << endl;
	}
	else if (ptr->next == NULL) {
		delete(ptr);
		head = NULL;
		
		cout << "NOW IS EMPTY" << endl;
	}
	else {
		while (ptr->next->next != NULL) {
			ptr = ptr->next;
		}
		delete(ptr->next);
		ptr->next = NULL;
	}

}

int main()
{
	
	insertNode(5);

	deleteEnd();

	diplayLinkedList();
	getchar();
}
