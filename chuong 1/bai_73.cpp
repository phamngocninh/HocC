#include<iostream>
using namespace std;
int main(){ 
	long long n,t=1,i,a=-1,x,u=1; float s=-1;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap x:";cin>>x;
	
	for(i=2;i<=2*n;i=i+2){
		a=a*(-1);
		u=u*x*x;
		t=t*i*(i-1);
		s=s+1.0*a*u/t;
	}
	cout<<"Tong can tim la s= "<<s;
}
