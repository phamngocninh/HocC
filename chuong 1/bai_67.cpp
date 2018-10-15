#include<iostream>
using namespace std;
int main(){ 
	long long n,t=-1,s=0,x,i;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap x:";cin>>x;
	for(i=1;i<=n;i++){
		t=t*x*(-1);
		s=s+t;
	}
	cout<<"Tong can tim la s= "<<s;
}
