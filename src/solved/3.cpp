#include<iostream>
#include<vector>
using namespace std;

string& vectorToString(vector<int>& vec, string& str)
{
	for (int i = 0; i != vec.size(); i++) {

		str += to_string(vec.at(i));
	}
	return str;
}

int main(int argc, char* argv[])
{
	vector<int> vec;
	int n;
	cout<<"input the length of the vector"<<endl;
	cin>>n;
	cout<<"please input your vector"<<endl;
	for (int i = 0 ; i < n; i++) {
		int x;
		cin>>x;
		vec.push_back(x);
	}

	string str("");
	vectorToString(vec, str);

	//argv[1] is the k
	string k = string(argv[1]);
	int count = 0;
	for (int i = 0; i != str.size(); i++) {
		if (str[i] == k[0]) count++;
	}

	cout<<count<<endl;
	return 0;
}
