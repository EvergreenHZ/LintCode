#include<iostream>
using namespace std;

bool isUgly(int x)
{
	if (x == 1) return true;

	while (x % 2 == 0) x /= 2;
	if (x == 1) return true;

	while (x % 3 == 0) x /= 3;
	if (x == 1) return true;

	while(x % 5 == 0) x /= 5;
	if (x == 1) return true;

	return false;
}

int main()
{
	int n;
	cin >> n;

	int count = 0;
	for (int i = 1; ; i++) {

		if (isUgly(i)) {
			if (++count == n) {

				cout<<i<<endl;
				return 0;
			}
		}
	}

	return 0;
}

