#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[256];
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    a=a+b;
    for(char c:a){
        arr[c]=1;
    }
    for(char c:a){
        if(arr[c]){
            printf("%c",c);
            arr[c]=0;
        }
    }
    return 0;
}