#include <iostream>
#include <map>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

struct li{
	string school;
	int tws,ns;
};
map<string,double> sum;
map<string,int> cnt;

li vli[100010];

bool cmp(li a,li b){
	if(a.tws!=b.tws){
		return a.tws>b.tws;
	}else{
		if(a.ns!=b.ns){
			return a.ns<b.ns;
		}else{
			return a.school<b.school;
		}
	}
}

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		char id[8],school[8];
		double score;
		scanf("%s",id);
		scanf("%lf",&score);
		scanf("%s",school);
		for(int i=0;i<strlen(school);i++){
			school[i]=tolower(school[i]);
		}
		if(id[0]=='T'){
			score*=1.5;
		}else if(id[0]=='B'){
			score/=1.5;
		}
		string s(school);
		sum[s]+=score;
		cnt[s]+=1;
	}
	int cntl=0;
	for(auto it=sum.begin();it!=sum.end();it++){
		li tmp;
		tmp.school=it->first;
		tmp.tws=sum[it->first];
		tmp.ns=cnt[it->first];
		vli[cntl++]=tmp;
	}
	sort(vli,vli+cntl,cmp);
	printf("%d\n",cntl);
	int pre=1;
	for(int i=1;i<=cntl;i++){
		if(i!=1){
			if(vli[i-1].tws==vli[i-2].tws){
				printf("%d ",pre);
			}else{
				printf("%d ",i);
				pre=i;
			}
		}else{
			printf("1 ");
		}
		cout<<vli[i-1].school;
		printf(" %d %d\n",vli[i-1].tws,vli[i-1].ns);
	}
	return 0;
}
