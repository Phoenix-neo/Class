#include<bits/stdc++.h>
using namespace std;

struct Vector {
	int size = 0;
	int maxsize = 1;
	int* a;
	Vector() {
	    a = (int*) malloc(1 * sizeof(int));
	}

	void expand() {
	    int* b = (int*) malloc(maxsize * 2 * sizeof(int));
	    for (int i = 0; i < size; i++)
		    b[i] = a[i];
	    free(a);
	    a = b;
	    maxsize *= 2;
	}


	void deduct() {
		int* b = (int*) malloc((maxsize / 2) * sizeof(int));
		for (int i = 0; i < size; i++)
			b[i] = a[i];
		free(a);
		maxsize /= 2;
		a = b;
	}

	int find(int x) {
		for (int i = 0; i < size; i++)
			if (a[i] == x)
				return i;
		return -1;
	}
	int get(int index) {
		if (!this->empty() && index < size)
			return a[index];
		else 
			return -1;
	}

	void push_back(int x) {
		if (size == maxsize - 1)
			expand();
		a[size] = x;
		size++;
	}

	void pop_back() {
		if (!this->empty()) {
			size--;
			if (size == (maxsize / 2) - 1) 
				deduct();
		}
	}
	bool empty() {
		if (size == 0)
			return true;
		else 
			return false;
	}
	int getsize() {
		return size;
	}
	int back() {
		if (!this->empty())
			return (a[0]);
	}
	int front() {
		if (!this->empty())
			return a[size - 1];
	}
	int * begin() {
		return a;
	}
	int * end() {
		return a + size;
	}
};

int main() {
	Vector v;
	return 0;
}
