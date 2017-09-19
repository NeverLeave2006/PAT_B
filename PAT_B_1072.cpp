#include <iostream>
#include <set>
#include <cstdio>
using namespace std;

int main()
{
	int N,M;
	scanf("%d%d",&N,&M);
	set<int> s;
	int tmp;
	for(int i=0;i<M;i++){
		cin>>tmp;
		s.insert(tmp);
	}
	string name;
	int K,cnt1=0,cnt2=0;;
	for(int i=0;i<N;i++){//每个学生 
		cin>>name;
		cin>>K;
		int tmp2;
		int flag=0;
		for(int j=0;j<K;j++){
			cin>>tmp2;
			if(s.count(tmp2)==1){//每样物品 
				if(flag==0){
					cout<<name<<":";
					flag=1;
					cnt1++;
				}
				printf(" %04d",tmp2);
				cnt2++;
			}
		}
		if(flag!=0)cout<<endl;
	}
	cout<<cnt1<<" "<<cnt2;
	return 0;
}

