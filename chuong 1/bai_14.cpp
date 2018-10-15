#include<iostream>
using namespace std;
int main(){
	long long i,n,s,x,t;
	cout<<"n= "; cin>>n;
	cout<<"x= ";cin>>x;
	t=x;s=x;
	for(i=2;i<=n;i++){
		t=t*x*x;
		s=s+t;
	}
	cout<<"s= "<<s;
	
	}
