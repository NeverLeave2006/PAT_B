#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s,a,b;
	getline(cin,s);
	getline(cin,a);
	getline(cin,b);
	vector<int> v_is,v_ia,v_ib;
	for(int i=0;i<s.length();i++){
		int tmp=s[i]-'0';
		if(tmp==0)
		v_is.push_back(10);
		else
		v_is.push_back(tmp);
	}
	for(int i=0;i<a.length();i++){
		int tmp=a[i]-'0';
		v_ia.push_back(tmp);
	}
	for(int i=0;i<b.length();i++){
		int tmp=b[i]-'0';
		v_ib.push_back(tmp);
	}
	reverse(v_is.begin(),v_is.end());
	reverse(v_ia.begin(),v_ia.end());
	reverse(v_ib.begin(),v_ib.end());
	
	vector<int> v_ires;
	int tmp=0;
	for(int i=0;i<v_ia.size()&&i<v_ib.size();i++){
		int digit=v_ia[i]+v_ib[i]+tmp;
		v_ires.push_back(digit%v_is[i]);
		tmp=digit/v_is[i];
	}
	if(v_ires.size()<v_ia.size()){
		for(int i=v_ires.size();i<v_ia.size();i++){
			int digit=v_ia[i]+tmp;
			//if(digit==0)break;
			v_ires.push_back(digit%v_is[i]);
			tmp=digit/v_is[i];
		}
	}
	
	if(v_ires.size()<v_ib.size()){
		for(int i=v_ires.size();i<v_ib.size();i++){
			int digit=v_ib[i]+tmp;
			//if(digit==0)break;
			v_ires.push_back(digit%v_is[i]);
			tmp=digit/v_is[i];
		}
	}
	if(tmp!=0){
		while(tmp!=0&&v_ires.size()<v_is.size()){
			int index= v_ires.size();
			v_ires.push_back(tmp%v_is[index]);
			tmp/=v_is[index];
		}
		v_ires.push_back(tmp);//超过给定的位数不管他，直接加在末尾 
	}
	reverse(v_ires.begin(),v_ires.end());
	int flag=0;
	for(int i=0;i<v_ires.size();i++){
		if(v_ires[i]!=0||flag){
			printf("%d",v_ires[i]);
			flag=1;
		}
		
	}
	if(!flag)printf("0");
	return 0;
}
