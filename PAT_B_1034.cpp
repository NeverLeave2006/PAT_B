#include <iostream>
#include <cmath>
using namespace std;

int gcd(long long a,long long b){
	return !b?a:gcd(b,a%b);
}

struct Feb{
	long long a;
	long long b;
}; 

Feb Plus(Feb f1,Feb f2){
	Feb res;
	res.a=(f1.a*f2.b+f2.a*f1.b);
	res.b=f1.b*f2.b;
	return res;
}

Feb Minus(Feb f1,Feb f2){
	Feb res;
	res.a=((f1.a*f2.b)-(f2.a*f1.b));
	res.b=f1.b*f2.b;
	return res;
}

Feb Multiply(Feb f1,Feb f2){
	Feb res;
	res.a=f1.a*f2.a;
	res.b=f1.b*f2.b;
	return res;
}

Feb Sub(Feb f1,Feb f2){
	Feb res;
	res.a=f1.a*f2.b;
	res.b=f1.b*f2.a;
	return res;
}

void Print(Feb f){
	if(f.b==0){
		printf("Inf");
		return;
	}else if(f.b<0){
		f.a=-f.a;
		f.b=-f.b;
	}else if(f.a==0){
		printf("0");
		return;
	}
	
	long long Integer=f.a/f.b;
	if(Integer<0){
		printf("(%lld",Integer);
		f.a%=f.b;
	}else if(Integer>0){
		printf("%lld",Integer);
		f.a%=f.b;
	}
	long long flag=0;
	if(f.a%f.b!=0){
		if(f.a<0){
			f.a=abs(f.a);
			if(Integer==0){
				printf("(-");
				flag=1;
			}
			
		}
		
		long long GCD=gcd(f.a,f.b);
		f.a/=GCD;
		f.b/=GCD;
		if(Integer!=0&&f.a!=0)printf(" ");
		printf("%lld/%lld",f.a,f.b);
	} 
	if(Integer<0||(flag)){
		printf(")");
	}
}

int main(){
	Feb f1,f2,res;
	scanf("%lld/%lld %lld/%lld",&f1.a,&f1.b,&f2.a,&f2.b);
	Print(f1);
	printf(" + ");
	Print(f2);
	printf(" = ");
	res=Plus(f1,f2);
	Print(res);
	printf("\n");
	
	Print(f1);
	printf(" - ");
	Print(f2);
	printf(" = ");
	res=Minus(f1,f2);
	Print(res);
	printf("\n");
	
	Print(f1);
	printf(" * ");
	Print(f2);
	printf(" = ");
	res=Multiply(f1,f2);
	Print(res);
	printf("\n");
	
	Print(f1);
	printf(" / ");
	Print(f2);
	printf(" = ");
	res=Sub(f1,f2);
	Print(res);
	printf("\n");
	return 0;
}
