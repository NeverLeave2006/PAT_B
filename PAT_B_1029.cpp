#include <iostream>
#include <set>
using namespace std;

string toUpper(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]+=('A'-'a');
		}
	}
	return s;
}

int main()
{
	string s,b;
	getline(cin,s);
	getline(cin,b);
	set<char> SetChar;
	toUpper(s);
	toUpper(b);
	for(int i=0;i<b.length();i++){
		SetChar.insert(b[i]);
	}
	for(int i=0;i<s.length();i++){
		if(SetChar.count(s[i])==0){
			printf("%c",s[i]);
			SetChar.insert(s[i]);
		}
	}
	return 0;
 } 
