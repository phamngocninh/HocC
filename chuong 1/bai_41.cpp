#include<iostream>
using namespace std;
int main(){
	int n,i;
	float s;
	cout<<"n= ";cin>>n;
	/* if(n==1) s=1; else */{
		for(i=1;i<=n;i++){
			s=1/(1+s);
		}
		cout<<"s= "<<s;
	}
}
