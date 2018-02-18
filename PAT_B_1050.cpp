#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int a[10001]={0},cnt=0;
int s[10001][101];


bool cmp(int &a,int &b){
	return a>b;
}

int main()
{
	
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+N,cmp);
	int m=0,n=0;
	for(int i=1;i*i<=N;i++){
		if(N%i==0){
			n=i;
			m=N/i;
		}
	}
	int cnt2=0;
	int lbord=0,rbord=n-1,ubord=0,dbord=m-1;
	int x=0,y=0;
	s[0][0]=a[cnt2++];
	while(cnt2<N){
		while(x<rbord&&!s[y][x+1]){
			s[y][++x]=a[cnt2++];
		}
		while(y<dbord&&!s[y+1][x]){
			s[++y][x]=a[cnt2++];
		}
		
		while(x>lbord&&!s[y][x-1]){
			s[y][--x]=a[cnt2++];
		}
		
		while(y>ubord&&!s[y-1][x]){
			s[--y][x]=a[cnt2++];
		}
		
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j)printf(" ");
			printf("%d",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
