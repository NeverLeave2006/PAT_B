#include <iostream>
#include <set>
#include <vector> 
#include <algorithm>
using namespace std;

struct Answer{//��ȷ�� 
	int full,numOfOptions,numOfCorrect;// ����ֵ��ѡ���������ȷѡ�����
	vector<int> *v;//ÿ��ѡ�����������ʼֵΪ0 
	set<char> s;
};



int main()
{
//	int N,M;//ѧ�������Ͷ�ѡ��ĸ���
//	vector<Answer> v;
//	cin>>N>>M;
//	for(int i=0;i<M;i++){
//		Answer tmp;
//		int tmp1,tmp2,tmp3;
//		cin>>tmp1>>tmp2>>tmp3;
//		getchar();
//		tmp.full=tmp1;//����ֵ
//		tmp.numOfOptions=tmp2;//ѡ�����
//		tmp.numOfCorrect=tmp3;//��ȷѡ�����
//		tmp.v=new vector<int>(tmp2,0);//ÿ��ѡ�����������ʼֵΪ0 
//		for(int j=0;j<tmp3;j++){
//			char tmpstr;
//			cin>>tmpstr;
//			getchar();
//			tmp.s.insert(tmpstr);//ÿ����ȷ�� 
//		}
//		v.push_back(tmp);
//	}
//	 /*
//		���ϴ����������Ĵ�	
//	*/
//
//	int max_Wrong=0;
//	
//	char chrTest;//���ջ������������ڵ��Լ�� 
//	for(int i=0;i<N;i++){//���� 
//		double Marks=0;
//		//vector<Answer>::iterator iter=v.begin();//������Ŀ 
//		vector<int> * V_tmp=v[M].v;//���⼯�ϼ�¼ 
//		for(int j=0;j<M;j++){//���� 
//			chrTest=getchar();//ǰ���� 
//			int numOfAllOptions;
//			scanf("%d",&numOfAllOptions);
//			chrTest=getchar();//�������ֺ���Ŀո� 
//			int flag=0;
//			set<char> chrSet;//ѧ���𰸼��� 
//			
//			for(int k=0;k<numOfAllOptions;k++){//ѡ���� 
//				char ansTmp;//�� 
//				scanf("%c",&ansTmp);
//				chrSet.insert(ansTmp);//��¼ѧ���� 
//				chrTest=getchar();//ÿ���ַ�����Ŀո������� 
//				set<char> tmpSet(v[M].s);//������������������Ŀ 
//				//Answer *tmp=iter;
//				if(tmpSet.count(ansTmp)==0){
//					flag=1;
//					//�˴���¼ѡ���ѡ�� 
//					(*V_tmp)[ansTmp-'a']++;
//				}
//			}
//			chrTest=getchar();//�����ź���Ŀո���� 
//			if(flag==0){
//				if(numOfAllOptions==v[M].numOfCorrect){
//					Marks+=v[M].full;
//				}else{
//					Marks+=(v[M].full)/2.0;
//					//�˴�Ӧ��¼δѡ��ѡ�� 
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
//			//iter++;////������Ŀ 
//		}
//		vector<int>::iterator max=max_element((*V_tmp).begin(),(*V_tmp).end());
//		if(max_Wrong<*max){//ͳ�������� 
//			max_Wrong=*max;
//			vector<int>::iterator V_iterRA=(*V_tmp).begin();
//			while(V_iterRA!=(*V_tmp).end()){
//				
//				V_iterRA++;
//			}
//		}
//		
//		printf("%.1f\n",Marks);//���ÿ��ѧ������ 
//	}
//	
	//�������������ѡ�� 
	
	return 0;
}
