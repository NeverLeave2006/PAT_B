#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	string s,a,b;
	getline(cin,s);
	vector<int> vecS;
	for(int i=0;i<s.length();i++){
		vecS.push_back(s[s.length()-i-1]-'0');
	}
	getline(cin,a);
	vector<int> vecA;
	for(int i=0;i<a.length();i++){
		vecA.push_back(a[a.length()-i-1]-'0');
	}
	getline(cin,b);
	vector<int> vecB;
	for(int i=0;i<b.length();i++){
		vecB.push_back(b[b.length()-i-1]-'0');
	}
	stack<int> Res;
	Res.push()
	return 0;
}
