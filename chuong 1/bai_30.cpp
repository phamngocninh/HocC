#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,s=1;
	cout<<"n= ";cin>>n;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) s=s+i+(n/i);
	}
	if(s==n) cout<<"n la so hoan thien"; else cout<<"n khong phai so hoan thien";
	
}
