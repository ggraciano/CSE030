#ifndef Queue_h
#define Queue_h

struct Node {
	long data;
	Node* next;

	Node(long d) {
		data = d;
		next = NULL;
	}

	~Node() {

	}
};

struct Queue {
	Node* first = NULL;
	Node* last = NULL;

	void push(long b) {
		//std::cout << "push" << std::endl;
		Node* temp = new Node(b);

		if (isEmpty() == true) {
			first = temp;
			last = temp;
			//std::cout << last->data << std::endl;
		}
		else {
			//first->next = temp;
			last->next = temp;
			last = temp;
			//std::cout << last->data << std::endl;
		}

		//delete temp;
		return;
	}

	long pop() {
		//std::cout << "pop" << std::endl;
		Node* tempp = new Node(0);
		long tempv = 0;

		if (isEmpty() == false) {
			//std::cout << first->data << std::endl;
			tempv = first->data;
			tempp = first;
			first = first->next;
		}

		delete tempp;
		return tempv;
	}

	bool isEmpty() {
		if (first == NULL) {
			//std::cout << "true" << std::endl;
			return true;
		}
		else {
			//std::cout << "false" << std::endl;
			return false;
		}
	}
};

#endif
