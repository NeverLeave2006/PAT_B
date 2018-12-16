#include <bits/stdc++.h>
using namespace std;
int a[1000];
int  main()
{
    int n,m,flag=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int tmp;
            scanf("%d",&tmp);
            a[j]+=tmp;
        }
    }
    int Max=*max_element(a,a+n);
    printf("%d\n",Max);
    for(int i=0;i<n;i++){
        if(a[i]==Max){
            if(flag)printf(" ");
            printf("%d",i+1);
            flag=1;
        }
    }
    return 0;
}