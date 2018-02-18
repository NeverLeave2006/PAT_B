#include <iostream>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

struct Node{
	int addr;
	int value;
	int next;
};
map<int,Node> m_ii;
vector<int> v_addr,v_val;
vector<Node> v,v1;

bool cmp(int addr1,int K){
	Node n1=m_ii[addr1];
	return (n1.value)<K;
}

int val(int addr){
	Node n1=m_ii[addr];
	return n1.value;
}

int main()
{
	//freopen("C:\\Users\\10354\\Desktop\\新建文件夹\\Code_test.txt","r",stdin); 
	int addr,N,K;
	scanf("%d%d%d",&addr,&N,&K);
	for(int i=0;i<N;i++){
		Node n;
		int addr1,value,next;
		scanf("%d%d%d",&addr1,&value,&next);
		n.addr=addr1;
		n.value=value;
		n.next=next;
		m_ii[addr1]=n;
	}
	int next=addr;
//	printf("\n");
	while(next!=-1){
		Node n=m_ii[next];
		v_addr.push_back(next);
		v_val.push_back(n.value);
		v.push_back(n);
		//printf("%05d %d %05d\n",next,n.value,n.next);
		next=n.next;
	}
	
//	for(int i=0;i<v_addr.size();i++){
//		printf("%d %d\n",v_addr[i],v_val[i]);
//	}
//	
	//不能用冒泡！！！ 
//	for(int i=0;i<v_addr.size();i++){
//		int flag=1;
//		for(int j=0;j<v_addr.size()-1;j++){
//			
//			if((v_val[j]>=0&&v_val[j+1]<0)||(v_val[j]>K&&v_val[j+1]<=K)){//这个冒泡很烦人！ 
//				int tmp=v_val[j];
//				v_val[j]=v_val[j+1];
//				v_val[j+1]=tmp;
//				int tmp2=v_addr[j];
//				v_addr[j]=v_addr[j+1];
//				v_addr[j+1]=tmp2;
//				flag=0;
//			}
//		}
//		if(flag)break;
//	}
	for(int i=0;i<v.size();i++){
		Node n=v[i];
		if(n.value<0){
			v1.push_back(n);
		}
	}
	for(int i=0;i<v.size();i++){
		Node n=v[i];
		if(n.value>=0&&n.value<=K){
			v1.push_back(n);
		}
	}
	for(int i=0;i<v.size();i++){
		Node n=v[i];
		if(n.value>K){
			v1.push_back(n);
		}
	}
	
	for(int i=0;i<v1.size();i++){
		Node n=v1[i];
		if(i==0){
			printf("%05d %d",n.addr,n.value);
		}else{
			printf(" %05d\n%05d %d",n.addr,n.addr,n.value);
		}
	}
	printf(" -1\n");
//	printf("\n");
//	for(int i=0;i<v_addr.size();i++){
//		printf("%d %d\n",v_addr[i],v_val[i]);
//	}
//	printf("\n");
//	v_addr.push_back(-1);
//	for(int i=0;i<v_addr.size()-1;i++){
//		int addr=v_addr[i];
//		printf("%05d ",addr);
//		Node n=m_ii[addr];
//		n.next=v_addr[i+1];
//		if(n.next!=-1){
//			printf("%d %05d\n",n.value,n.next);
//		}else{
//			printf("%d %d\n",n.value,n.next);
//		}
//		m_ii[addr]=n;
//	}
//	next=v_addr[0];
//	while(next!=-1){
//		Node n=m_ii[next];
//		v_addr.push_back(next);
//		printf("%05d %d %05d\n",n.addr,n.value,n.next);
//		next=n.next;
//	}
	return 0;
} 
