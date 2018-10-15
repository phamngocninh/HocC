#include<iostream>
using namespace std;
int main(){ 
	long long n,t=1,i,a=1,x,u=1; float s=0;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap x:";cin>>x;
	
	for(i=1;i<=n;i++){
		a=a*(-1);
		u=u*x;
		t=t*i;
		s=s+1.0*a*u/t;
	}
	cout<<"Tong can tim la s= "<<s;
}
