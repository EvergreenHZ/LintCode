#include<iostream>
#include<vector>
#include<string>
using namespace std;

string getString(int x)
{
	if (x % 3 == 0 && x % 5 == 0) return string("fizz buzz");

	if (x % 3 == 0) return string("fizz");

	if (x % 5 == 0) return string("buzz");

	return to_string(x);
}

int main()
{
	int n;
	vector<string> vec;
	cin>>n;

	for (int i = 1; i <= n; i++) {

		vec.push_back(getString(i));
	}

	for (int i = 0; i < n; i++) {
		cout<<vec.at(i)<<" ";
	}cout<<endl;
	return 0;
}
