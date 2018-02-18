#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
	int value;
	int next;
};

map<int,Node> m_add_n;

void print(int start){ 
	Node n=m_add_n[start];
	while(start!=-1){
		if(n.next!=-1)
		printf("%05d %d %05d",start,n.value,n.next);
		else{
			printf("%05d %d %d",start,n.value,n.next);
		}
		start=n.next;
		n=m_add_n[start];
		printf("\n");
	}
}

int main()
{
	int start;
	int N,K;
	cin>>start>>N>>K;
	
	for(int i=0;i<N;i++){
		int tmp;
		cin>>tmp;
		Node node;
		cin>>node.value>>node.next;
		m_add_n[tmp]=node;
		
	}
	
	vector<int> v_addr;
	
	Node n=m_add_n[start];//记下首地址 
	v_addr.push_back(start);
	while(start!=-1){
		start=n.next;
		n=m_add_n[start];
		v_addr.push_back(start);
	}
	
	int cnt=K;//反转首地址 
	vector<int>::iterator it=v_addr.begin();
	while(cnt<v_addr.size()){
		reverse(it,it+K);
		it+=K;
		cnt+=K;
	}
	
	for(int i=0;i<v_addr.size()-1;i++){
		int start=v_addr[i];
		Node n=m_add_n[start];
		n.next=v_addr[i+1];
		m_add_n[start]=n;
	}
	
	print(v_addr[0]);
	return 0;
}
