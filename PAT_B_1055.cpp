#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct PeoHeight{
	string name;
	int height;
};

bool camp(PeoHeight &a,PeoHeight &b){
	if(a.height!=b.height){
		return a.height>b.height;
	}else{
		return a.name<b.name;
	}
	
}

int main()
{
	int N,K;//ÈËÊý£¬ÅÅÊý
	cin>>N>>K;
	vector<PeoHeight> v;
	for(int i=0;i<N;i++){
		PeoHeight tmp;
		cin>>tmp.name;
		cin>>tmp.height;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),camp);
	vector<PeoHeight>::iterator iter=v.begin();
	PeoHeight raw[N/K+N%K];
	int flag=0;
	for(int i=0;i<K;i++){
		int full;
		if(flag==0){
			full=N/K+N%K;
			flag++;
		}else{
			full=N/K;
		}
		int pos=full/2;
		for(int k=0;k<full;k++){
			pos=pos+k*pow(-1,k);
			raw[pos]=*iter;
			iter++;
		} 
		for(int k=0;k<full;k++){
			if(k!=0)cout<<" ";
			cout<<raw[k].name;
		}
		cout<<endl;
	}
	return 0;
}
