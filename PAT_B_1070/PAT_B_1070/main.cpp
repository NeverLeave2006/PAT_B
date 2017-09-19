#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
	int N;
	cin>>N;
	vector<int> v;
	
	for(int i=0;i<N;i++){
		int tmp;
		cin>>tmp;
		getchar();
		v.push_back(tmp);	
	}
	sort(v.begin(),v.end());
	int res=v[0];
	for(int i=1;i<v.size();i++){
		res=(res+v[i])/2;
	}
	cout<<res;
	return 0;
}
