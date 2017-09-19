#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

struct stu{
	int id;
	int mori;
	int intel;
	int total;
};

bool camp(const stu &s1,const stu &s2){
	if(s1.total!=s2.total){
		return s1.total>s2.total;
	}else{
		if(s1.mori!=s2.mori){
			return s1.mori>s2.mori;
		}else{
			return s1.id<s2.id;
		}
	}
}

int main()
{
	int N,L,H,cnt=0;
	cin>>N>>L>>H;
	//getchar();
	vector<stu> s1,s2,s3,s4;
	stu tmp;
	for(int i=0;i<N;i++){
		scanf("%d%d%d",&tmp.id,&tmp.mori,&tmp.intel);
		tmp.total=tmp.intel+tmp.mori;
		if(tmp.intel>=L&&tmp.mori>=L){
			cnt++;
			if(tmp.intel>=H&&tmp.mori>=H){
				s1.push_back(tmp);
			}
			else if(tmp.intel<H&&tmp.mori>=H){
				s2.push_back(tmp);
			}
			else if(tmp.intel<H&&tmp.mori<H&&tmp.mori>=tmp.intel){
				s3.push_back(tmp);
			}
			else{
				s4.push_back(tmp);
			}
		}
	}
	sort(s1.begin(),s1.end(),camp);
	sort(s2.begin(),s2.end(),camp);
	sort(s3.begin(),s3.end(),camp);
	sort(s4.begin(),s4.end(),camp);
	printf("%d\n",cnt);
	vector<stu>::iterator itr;  
    for(itr=s1.begin();itr!=s1.end();itr++){
    	stu s=*itr;
    	printf("%d %d %d\n",s.id,s.mori,s.intel);
	}
         
    for(itr=s2.begin();itr!=s2.end();itr++){
    	stu s=*itr;
    	printf("%d %d %d\n",s.id,s.mori,s.intel);
	}
	
        
    for(itr=s3.begin();itr!=s3.end();itr++){
    	stu s=*itr;
    	printf("%d %d %d\n",s.id,s.mori,s.intel);
	}
    for(itr=s4.begin();itr!=s4.end();itr++){
    	stu s=*itr;
    	printf("%d %d %d\n",s.id,s.mori,s.intel);
	}
	return 0;
}
