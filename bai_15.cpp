#include<iostream>
using namespace std;
int main(){
	int i,n,t=0;
	float s=0;
	cout<<"n= "; cin>>n;
	for(i=1;i<=n;i++){
		t=t+i;
		s=s+ 1.0/t;
	}
	cout<<"s= "<<s;
	
	}
