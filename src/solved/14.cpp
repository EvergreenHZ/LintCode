#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& v, int start, int end, int x)  // [a, b)
{
	int mid = (start + end) / 2;
	if (v[mid] == x && (mid - 1) > 0 && v[mid - 1] == x) {
	
		return mid;  //wait, same
	} else if (v[mid] < x) {

		return binarySearch(v, start, mid, x);
	} else {

		return binarySearch(v, mid + 1, end, x);
	}

	return -1;
}

int main()
{
	return 0;
}
