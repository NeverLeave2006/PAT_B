#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string numToStr(int x){
	string res="";
	vector<char> v_c;
	while(x!=0){
		int tmp=x%10;
		x/=10;
		v_c.push_back(tmp+'0');
	}
	reverse(v_c.begin(),v_c.end());
	vector<char>::iterator it=v_c.begin();
	while(it!=v_c.end()){
		res+=(*it);
		it++;
	}
	return res;
}

int strToInt(string src){
	if(src=="")return 1;
	int i=0;
	int res=0;
	char tmp=src[i];
	while(tmp!='\0'){
		res*=10;
		res+=tmp-'0';
		i++;
		tmp=src[i];
	}
	return res;
}

string compressed(string src){
	int index=0;
	char c1=src[index];
	char c2=src[index+1];
	int i=1;
	string res="";
	while(c2!='\0'){
		while(c1==c2){
			i++;
			index++;
			c1=src[index];
			c2=src[index+1];
		}
		if(i!=1){
			res+=numToStr(i);
		}
		res+=c1;
		
		i=1;
		index++;
		c1=src[index];
		c2=src[index+1];
	}
	res+=c1;
	return res;
}

string decompressed(string src){
	int index=0;
	char tmp=src[index];
	string Num="";
	string res="";
	while(tmp!='\0'){
		while(tmp>='0'&&tmp<='9'){
			Num+=tmp;
			index++;
			tmp=src[index];
		}
		int times=strToInt(Num);
		for(int i=0;i<times;i++){
			res+=tmp;
		}
		Num="";
		index++;
		tmp=src[index];
	}
	return res;
}

int main()
{
	char op;
	scanf("%c",&op);
	getchar();
	string src;
	getline(cin,src);
	if(op=='C'){
		cout<<compressed(src);
	}else if(op=='D'){
		cout<<decompressed(src);
	}
	
	return 0;
}
