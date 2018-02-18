#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int s[1001][1001];//善于使用全局变量！！！ 
int m,n;
int tol;
int dir[8][2]={1,0,-1,0,0,1,0,-1,1,1,1,-1,-1,1,-1,-1};

bool check(int x,int y){
	for(int i=0;i<8;i++){
		int xx = x + dir[i][0];  
        int yy = y + dir[i][1];
        if(xx>=0 && xx<n && yy<m && yy>=0 && abs(s[xx][yy]-s[x][y])<=tol ) return false;
	}
	return true;
}

int main()
{
	
	
	scanf("%d%d%d",&m,&n,&tol);
	map<int,int> m_ii;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&s[i][j]);
			m_ii[s[i][j]]++;
		}
	}
	
	int cnt=0;
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(m_ii[s[i][j]]==1&&check(i,j)){
				cnt++;
				x=i;
				y=j;
			} 
		}
	}
	if(cnt==1){
		printf("(%d, %d): %d\n",y+1,x+1,s[x][y]);
	}else if(cnt>1){
		printf("Not Unique");
	}else{
		printf("Not Exist");
	}
	return 0;
}
