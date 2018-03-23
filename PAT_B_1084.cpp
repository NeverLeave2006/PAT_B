#include <iostream>
#include <cstdlib>
using namespace std;

string solve(string s){
	string res="";
	for(int i=0;i<s.length();){
		res+=s[i];
		int num=0;
		while(s[i]==s[i+num]){
			num++;
		}
		i+=num;
		res+=to_string(num);
	}
	return res;
}

int main()
{
	string s;
	cin>>s;
	int N;
	scanf("%d",&N);
	for(int i=1;i<N;i++){
		s=solve(s);
	}
	cout<<s;
	return 0;
}
