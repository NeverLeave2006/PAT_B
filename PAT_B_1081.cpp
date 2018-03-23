#include <iostream>
#include <set>
using namespace std;

set<char> sc,salp,snum;

bool IsLegal(string s){
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(!sc.count(c))
		return false;
	}
	return true;
}

bool hasAlp(string s){
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(salp.count(c))
		return true;
	}
	return false;
}

bool hasNum(string s){
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(snum.count(c))
		return true;
	}
	return false;
}

int main()
{
	for(char i='a';i<='z';i++){
		sc.insert(i);
		salp.insert(i);
	}
	for(char i='A';i<='Z';i++){
		sc.insert(i);
		salp.insert(i);
	}
	for(char i='0';i<='9';i++){
		sc.insert(i);
		snum.insert(i);
	}
	sc.insert('.');
	int N;
	scanf("%d",&N);
	getchar();
	for(int i=0;i<N;i++){
		string s;
		getline(cin,s);
		if(s.length()<6){
			printf("Your password is tai duan le.\n");
		}else{
			if(!IsLegal(s)){
				printf("Your password is tai luan le.\n"); 
			}else if(!hasAlp(s)){
				printf("Your password needs zi mu.\n"); 
			}else if(!hasNum(s)){
				printf("Your password needs shu zi.\n"); 
			}else{
				printf("Your password is wan mei.\n"); 
			}
		}
	}
	return 0;
}
