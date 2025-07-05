
template<typename T, typename T2>
class Vector {
private:
	T* a;
	T2 cs;
	int ts;
public:
	//Default
	Vector() {
		cs = 0;//This can be viewed as index.
		ts = 1;
		a = new T[ts];
	}

	//Parameterised Constructor
	Vector(int n) {
		cs = 0;//This can be viewed as index.
		ts = 1;
		a = new T[n];
	}


	//Member Functions:
	void push_back(int data) {
		if (cs == ts) {
			//You need to double the size of the
			//vector.
			T * b = a;
			a = new T[2 * ts];
			ts = ts * 2;

			//Copy data from b to a.
			for (int i = 0; i < cs; i += 1) {
				a[i] = b[i];
			}
			delete[] b;
		}
		a[cs] = data;
		cs++;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	void pop_back() {
		cs--;
	}

	T front() {
		return a[0];
	}
	T back() {
		return a[cs - 1];
	}

	T operator[](int index) {
		return a[index];
	}
};





