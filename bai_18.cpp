#include<iostream>
using namespace std;
int main(){
	long long i,n,x,t=1,d=1;
	float s;
	cout<<"n= "; cin>>n;
	cout<<"x= ";cin>>x;
	s=1;
	for(i=1;i<=n;i++){
		t=t*x*x;d=d*(2*i-1)*2*i;
		s=s+t*1.0/d;
	}
	cout<<"s= "<<s;
	
	}
