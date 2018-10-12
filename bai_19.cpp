#include<iostream>
using namespace std;
int main(){
	long long i,n,x,t,d=1;
	float s;
	cout<<"n= "; cin>>n;
	cout<<"x= ";cin>>x;
	s=1+x;t=x;
	for(i=3;i<=2*n;i+=2){
		t=t*x*x;d=d*(i-1)*i;
		s=s+t*1.0/d;
	}
	cout<<"s= "<<s;
	
	}
