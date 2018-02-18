#include <iostream>
#include <vector> 
using namespace std;

struct answer{
	int scores;
	int NumOfAnswer;
	int rightAnswer;
	int NumOfOption;
};

int v[]={1,2,4,8,16};

int alphabet2values(char x){//字母转数字 
	return v[x-'a'];
}

int wrongCnt[101][6];

vector<answer> v_a;

int main()
{
	int N,M;
	
	scanf("%d%d",&N,&M);//学生数，多选题个数 
	for(int i=0;i<M;i++){
		answer a;
		scanf("%d%d%d",&a.scores,&a.NumOfOption,&a.NumOfAnswer);
		a.rightAnswer=0;
		for(int i=0;i<a.NumOfAnswer;i++){
			getchar();
			char c;
			scanf("%c",&c);
			a.rightAnswer=a.rightAnswer^alphabet2values(c);
		}
		getchar();
		v_a.push_back(a);
	} 
	for(int i=0;i<N;i++){
		double score=0; 
		for(int j=0;j<M;j++){
			getchar();
			int NumOfOptions;
			scanf("%d",&NumOfOptions);
			int ans=0;//每一题答案 
			for(int k=0;k<NumOfOptions;k++){
				getchar();
				char c;
				scanf("%c",&c);
				ans=ans^alphabet2values(c);
				
			}
			if(ans==v_a[j].rightAnswer){
				score+=v_a[j].scores;
			}else{
				if((ans|(v_a[j].rightAnswer))==(v_a[j].rightAnswer)){
					score+=(v_a[j].scores)/2.0;
				}
				
			}
			int wrong=ans^(v_a[j].rightAnswer);
			for(int l=0;l<v_a[j].NumOfOption;l++){
				if((wrong&(v[l]))!=0){
					wrongCnt[j][l]+=1;
				}
			}
			getchar();
			getchar();
		}
		printf("%.1f\n",score);
	} 
	int cnt=0;
	for(int i=0;i<M;i++){
		for(int j=0;j<5;j++){
			if(wrongCnt[i][j]>cnt){
				cnt=wrongCnt[i][j];
			}
		}
	}
	if(cnt==0){
		printf("Too simple\n");
	}else{
		for(int i=0;i<M;i++){
			for(int j=0;j<5;j++){
				if(wrongCnt[i][j]==cnt){
					printf("%d %d-%c\n",cnt,i+1,'a'+j);
				}
			}
		}
	}
	
	
	return 0;
}
