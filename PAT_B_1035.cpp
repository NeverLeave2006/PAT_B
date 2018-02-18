#include <iostream>
#include <algorithm>
using namespace std;
/*
	Name: 
	Copyright: 
	Author: 
	Date: 02/02/18 22:02
	Description: 
	N<=100,int,N>0
	柳婼学姐万岁！！！！！！ 
*/

int a[101],s[101],i,k;

bool IsInsertionSort(int N){
	i=0;
	while(s[i]<=s[i+1]){
		i++;
	}
	k=i+1;
	while(k<N){
		if(a[k]==s[k]){
			k++;
		}else{
			break;
		}
	}
	return k==N;
}

void I_Next(int N){
	sort(a,a+i+2);
}

void M_mext(int N){
	int k=1,flag=1;//是否与原序列一样！！！！！！
	while(flag){
		flag=0;
		for(int i=0;i<N;i++){
			if(a[i]!=s[i]){
				flag=1;
			}
		}
		k*=2;
		int n=0;
		while(n+k<N){
			sort(a+n,a+n+k);
			n+=k;
		}
		sort(a+n,a+N);
	} 
	
}

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<N;i++){
		scanf("%d",&s[i]);
	}
	bool res=IsInsertionSort(N); 
	printf(res?"Insertion Sort\n":"Merge Sort\n");
	res?I_Next(N):M_mext(N);
	for(int i=0;i<N;i++){
		if(i)printf(" ");
		printf("%d",a[i]);
	}
	return 0;
}
