#include <iostream>
#include <string>
using namespace std;
bool isPrime(int n){
    if(n==1||n==0)return false;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
    }
    return true;
}
int main()
{
    int a,k;
    string s;
    cin>>a>>k>>s;
    for(int i=0;i<=a-k;i++){
        string t=s.substr(i,k);
        int n=stoi(t);
        if(isPrime(n)){
            cout<<t;
            return 0;
        }
    }
    printf("404\n");
    return 0;
}