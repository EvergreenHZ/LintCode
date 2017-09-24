#include<iostream>
#include<string>
using namespace std;

int findSubstring(string& s, string& sub)
{
	int found = s.find(sub);
	return found == s.npos ? -1 : found;
}

int main()
{
	string s, sub;
	cin>>s>>sub;
	cout<<findSubstring(s, sub)<<endl;

	return 0;
}
