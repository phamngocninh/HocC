#include<iostream>
using namespace std;
int main(){ 
	long long n,t=0,i,a=-1; float s=0;
	cout<<"Nhap n:";cin>>n;
	for(i=1;i<=n;i++){
		a=a*(-1);
		t=t+i;
		s=s+1.0*a/t;
	}
	cout<<"Tong can tim la s= "<<s;
}
