#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	vector<int> iVec; 
	getchar();//接受数字后面的倒霉催的换行符 
	for(int i=0;i<N;i++){
		string tmp;
		getline(cin,tmp);
		char a,b;
		for(int j=0;j<tmp.length();j++){
			if(tmp[j]>='A'&&tmp[j]<='D')a=tmp[j];
			if(tmp[j]=='T'){
				int pw=a-'A'+1;
				iVec.push_back(pw);
				break;
			}
		}
	}
	for(int i=0;i<iVec.size();i++){
		printf("%d",iVec[i]);
	}
	return 0;
}
