#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	vector<int> V_i,V;
	for(int i=0;i<N;i++){
		int tmp;
		scanf("%d",&tmp);
		V_i.push_back(tmp);
		V.push_back(tmp);
	}
	int max=V_i[0];
	sort(V.begin(),V.end());
	vector<int> res;
	for(int i=0;i<V_i.size();i++){
		if(V_i[i]==V[i]&&V_i[i]>=max){
			res.push_back(V_i[i]);
		}
		if(V_i[i]>max)max=V_i[i];
	}
	int cnt=res.size();
	printf("%d\n",cnt);
	vector<int>::iterator it=res.begin();
	while(it!=res.end()){
		if(it!=res.begin())printf(" ");
		printf("%d",*it);
		it++;
	}
	printf("\n");
	return 0;
}
