#ifndef Node_h
#define Node_h

// Define the Node struct below
struct Node {
	int data;
	Node* next;
};



//Define the append function below
void append(Node* list, int i) {
	Node* temp = new Node();
	temp->data = i;
	temp->next = NULL;

	Node* curr = list;

/*	if (list == NULL) {
		list = last;
	}
	else {
*/		while (curr->next != NULL) {
			curr = curr->next;
		}
//	}

	curr->next = temp;
}



// Do not write any code below this line
#endif
