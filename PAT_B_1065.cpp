#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
	int N;
	cin>>N;
	map<int,int> couples;
	for(int i=0;i<N;i++){
		int tmp1,tmp2;
		cin>>tmp1;
		cin>>tmp2;
		couples.insert(pair<int,int>(tmp1,tmp2));
	}
	set<int> peoples;
	cin>>N;
	for(int i=0;i<N;i++){
		int tmp;
		cin>>tmp;
		peoples.insert(tmp);
	}
	
	map<int,int>::iterator iter;
	for(iter=couples.begin();iter!=couples.end();iter++){
		if(peoples.count(iter->first)&&peoples.count(iter->second)){
			peoples.erase(iter->first);
			peoples.erase(iter->second);
			N-=2;
		}
	} 
	cout<<N<<endl;
	set<int>::iterator iterSet;
	int x=0;
	for(iterSet=peoples.begin();iterSet!=peoples.end();iterSet++){
		if(x!=0)cout<<" ";
		printf("%05d",*iterSet);//这里注意格式，五位整数 
		x++;
	}
	return 0;
}
