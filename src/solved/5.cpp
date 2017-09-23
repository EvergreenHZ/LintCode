#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

inline void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
	return ;
}

int partition(vector<int>& v, int begin, int end, int k)  //inteval [begin, end)
{
	int j = begin;
	for (int i = begin; i < end; i++)
		if (v[i] > v[begin]) swap(v[i], v[++j]);  //big to small
	swap(v[begin], v[j]);

	if (j - begin + 1 == k) {
		return v[j];
	} else if (j - begin + 1 > k) {
		return partition(v, begin, j, k);
	} else {
		return partition(v, j + 1, end, k - (j - begin + 1));
	}
}

int main()
{
	int k;
	cin>>k;
	vector<int> v;
	v.push_back(9);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	v.push_back(8);
	/*for (int i = 1; i <= 5; i++) {
		v.push_back(i);
		cout<<v[i - 1]<<" ";
	}*/
	//random_shuffle(v.begin(), v.end());
	//sort(v.begin(), v.end());
	//cout<<v[k-1]<<endl;

	random_shuffle(v.begin(), v.end());
	cout<<partition(v, 0, v.size(), k)<<endl;
	return 0;
}
