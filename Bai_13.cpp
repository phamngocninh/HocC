#include<iostream>
using namespace std;
int main(){
	long long i,n,t=1,s,x;
	cout<<"n= "; cin>>n;
	cout<<"x= ";cin>>x;
	for(i=1;i<=n;i++){
		t=t*x*x;
		s=s+t;
	}
	cout<<"s= "<<s;
	
	}
