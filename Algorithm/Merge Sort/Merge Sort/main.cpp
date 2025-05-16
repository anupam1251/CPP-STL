#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;

	vector<int>leftArr(n1, 0);
	vector<int>rightArr(n2, 0);

	for (int i = 0; i < n1; i++) {
		leftArr[i] = v[l + i];
	}

	for (int j = 0; j < n2; j++) {
		rightArr[j] = v[m + 1 + j];
	}

	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (leftArr[i] < rightArr[j]) {
			v[k++] = leftArr[i++];
		}
		else {
			v[k++] = rightArr[j++];
		}
	}

	while (i < n1) {
		v[k++] = leftArr[i++];
	}
	while (j < n2) {
		v[k++] = rightArr[j++];
	}
}

void mergeSort(vector<int>& v, int l, int r) {
	if (l >= r)	return;

	int m = l + (r - l) / 2;
	mergeSort(v, l, m);
	mergeSort(v, m + 1, r);

	merge(v, l, m, r);
}

int main() {
	vector<int> v{ 3,4,5,1,7,6,10,9,2,8,11 };
	mergeSort(v, 0, v.size() - 1);

	for (auto& x : v) {
		cout << x << " ";
	}

}