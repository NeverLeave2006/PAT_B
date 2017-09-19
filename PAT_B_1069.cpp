#include <iostream>
#include <set>
using namespace std;

int main()
{
	int M,N,S;//转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号
	cin>>M>>N>>S;
	getchar();
	int cnt=N,flag=0;
	string tmp;
	set<string> s;
	for(int i=0;i<M;i++){
		getline(cin,tmp);
		if((i+1)>=S){
			if(cnt==N){
				if(s.count(tmp)==0){
					s.insert(tmp);
					cout<<tmp<<endl;
					flag=1;
				    cnt=0;
				}else{
					cnt--;
				}
				
			}
			cnt++;
		}
	}	
	if(!flag)cout<<"Keep going..."<<endl;
	return 0;
 } 
