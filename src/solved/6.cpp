#include<iostream>
#include<vector>
using namespace std;

void mergeArray(vector<int>& v1, vector<int>& v2, vector<int>& v)
{
	vector<int>::iterator it1 = v1.begin();
	vector<int>::iterator it2 = v2.begin();
	for (int i = 0; i < v1.size() + v2.size(); i++) {

		if (it1 != v1.end() && it2 != v2.end() && *it1 < *it2) {

			v.push_back(*it1);
			it1++;
			continue;
		}
		if (it1 != v1.end() && it2 != v2.end() && *it1 >= *it2) {

			v.push_back(*it2);
			it2++;
		}

		if (it1 != v1.end() && it2 == v2.end()) {

			v.push_back(*it1++);
		}
		if (it1 == v1.end() && it2 != v2.end()) {

			v.push_back(*it2++);
		}
	}
	return ;
}

int main()
{
	vector<int> v1, v2, v;
	for (int i = 1; i != 5; i++) {

		v1.push_back(i);
	}
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	mergeArray(v1, v2, v);
	for (int i = 0; i != v.size(); i++) {

		cout<< v[i]<<" ";
	}cout<<endl;
	return 0;
}
