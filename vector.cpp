#include<bits/stdc++.h>
using namespace std;

struct Vector {
	int size = 0;
	int* a;
	Vector() {
	    a = (int*) malloc(1*sizeof(int));
	}

	void expand() {
	    /// a ra 2 barar kon
	    /// copy
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
		this->expand();
		int * i = last + 1;
		* i = x;
	}

	void pop_back() {
	}

	int back() {
	    return -1;
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
