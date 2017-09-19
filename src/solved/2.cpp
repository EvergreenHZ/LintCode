#include<iostream>
using namespace std;

int factorial(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)  s *= i;
	return s;
}

int main()
{
	int n;
	cin>>n;
	string str = to_string(factorial(n));

	int count = 0;
	for (string::reverse_iterator rit = str.rbegin(); rit != str.rend(); rit++) {

		if (*rit != '0') break;

		count++;
	}

	cout<<count<<endl;

	return 0;
}
