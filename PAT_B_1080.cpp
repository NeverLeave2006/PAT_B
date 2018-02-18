#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
	string name;
	int p_socre;
	int m_score;
	int n_score;
	int score;
};

bool cmp(student &a,student &b){
	if(a.score!=b.score){
		return a.score>b.score;
	}else{
		return a.name<b.name;
	}
}

int main()
{
	int P,M,N;// P（做了在线编程作业的学生数）、M（参加了期中考试的学生数）、N（参加了期末考试的学生数）
	scanf("%d%d%d",&P,&M,&N);
	map<string,int> m_p,m_m,m_n;
	set<string> s_stu;
	getchar();
	for(int i=0;i<P;i++){
		string s;
		int s_p;
		cin>>s>>s_p;
		if(s_p>=200){
			m_p[s]=s_p;
			s_stu.insert(s);
		}
		//getchar();
	}
	set<string>::iterator it=s_stu.begin();
	while(it!=s_stu.end()){
		m_m[*it]=-1;
		m_n[*it]=-1;
		it++;
	}
	for(int i=0;i<M;i++){
		string s;
		int s_m;
		cin>>s>>s_m;
		if(s_stu.count(s)!=0){
			m_m[s]=s_m;
		}
		//getchar();
	}
	for(int i=0;i<N;i++){
		string s;
		int s_n;
		cin>>s>>s_n;
		if(s_stu.count(s)!=0){
			m_n[s]=s_n;
		}
		
	}
	vector<student> v_s;
	it=s_stu.begin();
	while(it!=s_stu.end()){
		student tmp;
		string name=*it;
		tmp.name=name;
		tmp.p_socre=m_p[name];
		tmp.m_score=m_m[name];
		tmp.n_score=m_n[name];
		if((tmp.m_score)>(tmp.n_score)){
			int mscore=tmp.m_score,nscore;
			if(tmp.n_score==-1){
				nscore=0;
			}else{
				nscore=tmp.n_score;
			}
			double score=(0.4*mscore)+(0.6*nscore);
			tmp.score=(int)(score+0.5);
		}else{
			tmp.score=(int)((tmp.n_score)+0.5);
		}
		if(tmp.score>=60){
			v_s.push_back(tmp);
		}
		//cout<<tmp.name<<" "<<tmp.p_socre<<" "<<tmp.m_score<<" "<<tmp.n_score<<" "<<tmp.score<<endl;
		it++;
	}
	sort(v_s.begin(),v_s.end(),cmp);
	vector<student>::iterator it2=v_s.begin();
	while(it2!=v_s.end()){
		student tmp=*it2;
		cout<<tmp.name<<" "<<tmp.p_socre<<" "<<tmp.m_score<<" "<<tmp.n_score<<" "<<tmp.score<<endl;
		it2++;
	}
	return 0;
} 
