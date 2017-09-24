#include<iostream>
#include<vector>
using namespace std;

//vector<int> v;
class Node {
public:
	Node* root;
	int data;
}

void inorderTranversal(Node* &root, vector<int>& v)
{
	if (root) {

		inorderTranversal(root->pl);
		v.push_back(root->data);
		inorderTranversal(root->pr);
	}
	return ;
}

vector<int>& getInterval(Node* &root, int x, int y, vector<int>& v, vector<int>& tmp)
{
	inorderTranversal(root, v);
	int left = v.find(x);
	int right = v.find(y);
	tmp.insert(tmp.begin(), v.begin() + left, v.begin() + right);
	return tmp;
}

int main()
{
	return 0;
}
