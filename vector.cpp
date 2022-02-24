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
	    /// a ra 2 barar kon
	    /// copy
	    int* b = (int*) malloc(maxsize * 2 * sizeof(int));
	    for (int i = 0; i < size; i++)
		    b[i] = a[i];
	    free(a);
	    a = b;
	    maxsize *= 2;
	}


	void deduct() {
		int* b = (int*) malloc(maxsize / 2 * sizeof(int));
		for (int i = 0; i < size; i++)
			b[i] = a[i];
		free(a);
		maxsize /= 2;
		a = b;
	}

	int find(int x) {
		int cnt = 0;
		for (int i = 0; i < size; i++) {
			if (a[i] == x)
				return cnt;
			cnt++;
		}
	}
	int get(int index) {
		return a[index];
	}

	void push_back(int x) {
		a[size] = x;
		if (size == maxsize)
			expand();
		size++;
	}

	void pop_back() {
		if (!this->empty()) {
			size--;
			if (size == maxsize / 2) 
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
	int * begin() {
		return a;
	}
	int * end() {
		return a + size - 1;
	}
};

int main() {
	Vector v;
	return 0;
}
