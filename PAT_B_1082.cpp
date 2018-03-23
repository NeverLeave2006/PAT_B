#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	int minId,maxId,minScore,maxScore;
	for(int i=0;i<N;i++){
		int id,x,y;
		scanf("%d%d%d",&id,&x,&y);
		int score=x*x+y*y;
		if(i){
			if(minScore>score){
				minId=id;
				minScore=score;
			}
			if(maxScore<score){
				maxId=id;
				maxScore=score;
			}
		}else{
			minId=id;
			maxId=id;
			minScore=score;
			maxScore=score;
		}
	}
	printf("%04d %04d",minId,maxId);
	return 0;
 } 
