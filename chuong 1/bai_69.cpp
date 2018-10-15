#include<iostream>
using namespace std;
int main(){ 
	long long n,x,t,s,i;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap x:";cin>>x;
	s=x;t=x;
	for(i=2;i<=n;i++){
		t=t*x*x*(-1);
		s=s+t;
	}
	cout<<"Tong can tim la s= "<<s;
}
