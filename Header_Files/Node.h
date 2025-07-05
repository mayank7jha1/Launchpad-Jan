

template<typename T>
class Node {
public:
	T data;
	Node *next;

	//Default Constructor
	Node() {

	}

	//Parameterised Constructor
	Node(T data) {
		this->data = data;
		next = NULL;
	}
};