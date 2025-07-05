#include<iostream>
#include<forward_list>//Singly Linked list.
#include<list>//Doubly Linked List
using namespace std;

/*
	Sequence Containers: String(Special),Vectors(Dynamic Array),Linked List(Forward_List,list);

	All the sequence containers can be intialised {}.

	Rules Regarding Sequence Container:

	1. Always include its header file.
	2. Whenever you ar creating an variable of the container
		use: nameofcontainer<data_type>identifier;
	3. Every Sequence container can be viewed as a data type this means:
		it can be passed directly by value inside a function.
	4. It can also be used a Return type of a function.
	5. Every Sequence Container can be directly copied into another of the
	   same type.
	6. Every Sequence Container will have a certain similar functions like
		push_back,push_front,pop_back,pop_front etc.


	How to Iterate over sequence containers:

	Every sequence container can be iterated using 2 ways atleast:
	1. Using iterators;
	2. Using For each Loop.

	but there certain contains where apart from these 2 we can use for loop
	also like vectors.


	What Are iterators:

	YOu cannot directly access the address of any container. Why because
	a container is made from multiple data structures.

	C++ Provides you a functionality: You can fetch the address of
	containers using iterators.
	Some of the famous iterators are:
	begin,end.

	Every sequence container will have its own iterators i.e.
	if i want get the address of the first block of a container i can use
	name.begin() and to get the address of the last block+1 we can use
	name.end().

	auto is a keyword: data type khud se specify kar dega.

	you cannot use it=it+1 in case of iterators.

	:: Scope Resolution Operator Used to resolve scopes.

*/

//Here g is passed down as pass by value.
void Solve(forward_list<int>t) {

}

//Pass by Reference
void Solve1(forward_list<int>&t) {
	//t is an alias of g forward list i.e all the changes in t is same as
	//doing changes in g.
}

//Return type is a forward list i.e. a singly linked list.
forward_list<int>Solve2(forward_list<int>&m) {

}


int main() {

	//Singly Linked List
	forward_list<int>f{1, 2, 3, 4};
	list<int> l{2, 3, 4, 5};
	l.push_back(34);//Insert at Tail
	l.push_front(123);//Insert at Head.
	l.pop_back();
	l.pop_front();


	f.push_front(12);//Insert at Head.
	f.push_front(13);
	f.push_front(8);
	f.pop_front();
	// f.push_back(23);Not Allowed

	forward_list<int>g = f;//Copy Assignment.
	list<int>l2 = l;//Copy Assignment

	Solve(g);
	Solve1(g);


	// Iteration:
	// Using Iterators:

	for (forward_list<int>::iterator it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;

	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;

	//Using For Each Loop:
	/*

		For every element of this current container
		that is going to be represented as a variable
		do this task;

	*/

	for (int x : f) {
		cout << x << " ";
	}



}












