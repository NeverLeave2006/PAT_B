#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct people{
	string name;
	int y,m,d;
};

bool camp(people &a,people &b){
	if(a.y!=b.y){
		return a.y>b.y;
	}else{
		if(a.m!=b.m){
			return a.m>b.m;
		}else{
			return a.d>b.d;
		}
	}
}

int main()
{
	int N,cnt=0;
	cin>>N;
	vector<people> v;
	getchar();
	for(int i=0;i<N;i++){
		people tmp;
		cin>>tmp.name;
		scanf("%d/%d/%d",&tmp.y,&tmp.m,&tmp.d);
		getchar();
		if(tmp.y<1814){
			continue;
		}else if(tmp.y==1814){
			if(tmp.m<9){
				continue;
			}else if(tmp.m==9){
				if(tmp.d<6)continue;
			}
		}
		if(tmp.y>2014){
			continue;
		}else if(tmp.y==2014){
			if(tmp.m>9){
				continue;
			}else if(tmp.m==9){
				if(tmp.d>6)continue;
			}
		}
		
		v.push_back(tmp);
		cnt++;
	}
	sort(v.begin(),v.end(),camp);
	printf("%d",cnt);
	people tmp;
	
	if(cnt!=0){
		tmp=v[cnt-1];
		cout<<" "<<tmp.name<<" ";
		tmp=v[0];
		cout<<tmp.name<<endl;
	}
	
	return 0;
}
