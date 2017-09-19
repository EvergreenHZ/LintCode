#include<iostream>
using namespace std;

int add(int x, int y)
{
	if (!x) {
		return y;
	} else {

		int newX, newY;
		newX = x & y;
		newY = x ^ y;
		newX <<= 1;

		return add(newX, newY);
	}
}

int main()
{
	int x, y;
	cin>>x;
	cin>>y;

	cout<<add(x, y)<<endl;

	return 0;
}
