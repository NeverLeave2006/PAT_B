#include <iostream>
#include <set>
#include <vector> 
#include <algorithm>
using namespace std;

struct Answer{//正确答案 
	int full,numOfOptions,numOfCorrect;// 满分值、选项个数、正确选项个数
	vector<int> *v;//每个选项错误数，初始值为0 
	set<char> s;
};



int main()
{
//	int N,M;//学生人数和多选题的个数
//	vector<Answer> v;
//	cin>>N>>M;
//	for(int i=0;i<M;i++){
//		Answer tmp;
//		int tmp1,tmp2,tmp3;
//		cin>>tmp1>>tmp2>>tmp3;
//		getchar();
//		tmp.full=tmp1;//满分值
//		tmp.numOfOptions=tmp2;//选项个数
//		tmp.numOfCorrect=tmp3;//正确选项个数
//		tmp.v=new vector<int>(tmp2,0);//每个选项错误数，初始值为0 
//		for(int j=0;j<tmp3;j++){
//			char tmpstr;
//			cin>>tmpstr;
//			getchar();
//			tmp.s.insert(tmpstr);//每题正确答案 
//		}
//		v.push_back(tmp);
//	}
//	 /*
//		以上代码解释输入的答案	
//	*/
//
//	int max_Wrong=0;
//	
//	char chrTest;//吸收缓冲区垃圾便于调试检查 
//	for(int i=0;i<N;i++){//人数 
//		double Marks=0;
//		//vector<Answer>::iterator iter=v.begin();//遍历题目 
//		vector<int> * V_tmp=v[M].v;//错题集合记录 
//		for(int j=0;j<M;j++){//题数 
//			chrTest=getchar();//前括号 
//			int numOfAllOptions;
//			scanf("%d",&numOfAllOptions);
//			chrTest=getchar();//吸收数字后面的空格 
//			int flag=0;
//			set<char> chrSet;//学生答案集合 
//			
//			for(int k=0;k<numOfAllOptions;k++){//选项数 
//				char ansTmp;//答案 
//				scanf("%c",&ansTmp);
//				chrSet.insert(ansTmp);//记录学生答案 
//				chrTest=getchar();//每个字符后面的空格或后括号 
//				set<char> tmpSet(v[M].s);//拷贝构造器，拷贝题目 
//				//Answer *tmp=iter;
//				if(tmpSet.count(ansTmp)==0){
//					flag=1;
//					//此处记录选错的选项 
//					(*V_tmp)[ansTmp-'a']++;
//				}
//			}
//			chrTest=getchar();//后括号后面的空格或换行 
//			if(flag==0){
//				if(numOfAllOptions==v[M].numOfCorrect){
//					Marks+=v[M].full;
//				}else{
//					Marks+=(v[M].full)/2.0;
//					//此处应记录未选的选项 
//					set<char> s_RightAnswer(v[M].s);
//					set<char>::iterator s_RAiter=s_RightAnswer.begin();
//					while(s_RAiter!=s_RightAnswer.end()){
//						if(chrSet.count(*s_RAiter)==0){
//							(*V_tmp)[(*s_RAiter)-'a']++;
//						}
//						s_RAiter++;
//					}
//				}
//			}
//			//iter++;////遍历题目 
//		}
//		vector<int>::iterator max=max_element((*V_tmp).begin(),(*V_tmp).end());
//		if(max_Wrong<*max){//统计最多错题 
//			max_Wrong=*max;
//			vector<int>::iterator V_iterRA=(*V_tmp).begin();
//			while(V_iterRA!=(*V_tmp).end()){
//				
//				V_iterRA++;
//			}
//		}
//		
//		printf("%.1f\n",Marks);//输出每个学生分数 
//	}
//	
	//评价输出错最多的选项 
	
	return 0;
}
