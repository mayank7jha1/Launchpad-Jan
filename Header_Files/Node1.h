

template<typename T>
class Node {
public:
	T data;
	Node *next;
	Node *prev;

	//Default Constructor
	Node() {

	}

	//Parameterised Constructor
	Node(T data) {
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

//Reference : Head/Tail