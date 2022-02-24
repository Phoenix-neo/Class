#include<bits/stdc++.h>
using namespace std;

struct Vector {
	int size = 0;
	int maxsize = 1;
	int* a;
	Vector() {
	    a = (int*) malloc(1*sizeof(int));
	}

	void expand() {
	    /// a ra 2 barar kon
	    /// copy
	    int* b = (int*) malloc(maxsize * 2 * sizeof(int));
	    for (int i = 0; i < size; i++)
		    b[i] = a[i];
	    delete(a);
	    a = b;
	    maxsize *= 2;
	}


	void deduct() {
		int* b = (int*) malloc(maxsize / 2 * sizeof(int));
		for (int i = 0; i < size; i++)
			b[i] = a[i];
		delete(a);
		maxsize /= 2;
		a = b;
	}

	int find(int x, int * end) {
		int cnt = 0;
		for (auto i = this->begin(); a != this->end(); i++) {
			if (*i == x)
				return cnt;
			else
				cnt++;
		}
	}
	int get(int index) {
		return *(this->begin() + index);
	}

	void push_back(int x) {
		int * last = this->end();
		if (size == maxsize)
			this->expand();
		int * i = last + 1;
		* i = x;
	}

	void pop_back() {
		if (!this->empty()) {
			size--;
			if (size == maxsize / 2) 
				this->deduct();
		}
	}
	bool empty() {
		if (this->begin() == this->end())
			return true;
		else 
			return false;
	}
	int getsize() {
		return this->end() - this->begin() + 1;
	}
	int back() {
		if (!this->empty())
			return (a[0]);
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
}

