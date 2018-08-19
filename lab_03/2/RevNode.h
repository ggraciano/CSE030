#ifndef RevNode_h
#define RevNode_h

// Define the Node struct below
struct Node {
	int data;
	Node* prev;
	Node* next;
};



// Define the append function below
Node* append(Node* A, int i) {
	Node* temp = new Node();
	temp->data = i;
	temp->prev = NULL;
	temp->next = NULL;

	Node* curr = A;

	while (curr->next != NULL) {
		curr = curr->next;
	}

	curr->next = temp;
	temp->prev = curr;
	return temp;
}



// Do not write any code below this line
#endif
