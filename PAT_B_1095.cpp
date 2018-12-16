#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Stu{
    string id;
    char type;
    int room,date,No,score;
}stu[10010];
struct r_p{
    int r,p;
    r_p(int R,int P):r(R),p(P){};
};
bool cmp1(Stu a,Stu b){
    if(a.score!=b.score){
        return a.score>b.score;
    }else{
        return a.id<b.id;
    }
    
}
bool cmp2(r_p a,r_p b){
    if(a.p!=b.p){
        return a.p>b.p;
    }else{
        return a.r<b.r;
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        string s;
        cin>>s>>stu[i].score;
        stu[i].id=s;
        stu[i].type=s[0];
        stu[i].room=stoi(s.substr(1,3));
        stu[i].date=stoi(s.substr(4,6));
        stu[i].No=stoi(s.substr(10,3));
    }
    for(int i=0;i<m;i++){
        int mode;
        scanf("%d",&mode);
        if(mode==1){
            char tmp;
            cin>>tmp;
            printf("Case %d: %d %c\n",i+1,mode,tmp);
            vector<Stu> vs;
            for(int j=0;j<n;j++){
                if(stu[j].type==tmp){
                    vs.push_back(stu[j]);
                }
            }
            sort(vs.begin(),vs.end(),cmp1);
            if(vs.empty())printf("NA\n");
            for(Stu s:vs){
                printf("%s %d\n",s.id.c_str(),s.score);
            }
        }else if(mode==2){
            int r,cnt=0,ss=0;
            cin>>r;
            printf("Case %d: %d %03d\n",i+1,mode,r);
            for(int j=0;j<n;j++){
                if(stu[j].room==r){
                    cnt++;
                    ss+=stu[j].score;
                }
            }
            if(cnt)printf("%d %d\n",cnt,ss);
            if(cnt==0)printf("NA\n");
        }else if(mode==3){
            int t,cnt=0;
            cin>>t;
            vector<r_p> vr;
            printf("Case %d: %d %06d\n",i+1,mode,t);
            int Cnts[1010];
            fill(Cnts,Cnts+1010,0);
            for(int j=0;j<n;j++){
                if(stu[j].date==t){
                    Cnts[stu[j].room]++;
                }
            }
            for(int j=0;j<1000;j++){
                if(Cnts[j]!=0){
                    vr.push_back(r_p(j,Cnts[j]));
                }
            }
            sort(vr.begin(),vr.end(),cmp2);
            for(r_p rp:vr){
                printf("%d %d\n",rp.r,rp.p);
            }
            if(vr.empty())printf("NA\n");
        }
    }
    return 0;
}