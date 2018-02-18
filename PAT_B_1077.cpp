#include <iostream>
using namespace std;

int round(double x){
	return (int)((x*10+5)/10);
}

int main()
{
	int N,m;
	scanf("%d%d",&N,&m);
	for(int i=0;i<N;i++){
		int max=-1,min=m+1;
		int Tscore;
		scanf("%d",&Tscore);
		int cnt=0,sum=0;
		for(int i=0;i<N-1;i++){
			int tmp;
			scanf("%d",&tmp);
			if(tmp>=0&&tmp<=m){
				cnt++;
				sum+=tmp;
				if(max<tmp)max=tmp;
				if(min>tmp)min=tmp;
			}
			
		}
		double sscore=(double)(sum-max-min)/(cnt-2);
		printf("%d\n",round((Tscore+sscore)/2));
	}
	return 0;
}
