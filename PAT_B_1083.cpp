#include <iostream>

using namespace std;

int a[10010],b[10010]={0};

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		int tmp;
		scanf("%d",&tmp);
		b[abs(tmp-i)]++;
	}
	for(int i=N;i>=0;i--){
		if(b[i]&&b[i]>1){
			printf("%d %d\n",i,b[i]);
		}
	}
	return 0;
}
