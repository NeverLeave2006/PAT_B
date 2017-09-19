#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool camp(int &a,int &b){
	return a>b;
}

int main()
{
	int N;
	cin>>N;
	vector<int> v;
	int tmp;
	v.push_back(0);
	for(int i=0;i<N;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin()+1,v.end(),camp);
	int ans;
	for(int i=1;i<=N;i++){
		if(v[i]<=i){
			break;
		}
		ans=i;
	}
	cout<<ans;
	return 0;
}
