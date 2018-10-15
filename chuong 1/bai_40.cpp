#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,t=1,x;
	float s;
	cout<<"n= ";cin>>n;
	cout<<"x= ";cin>>x;
	/* if(n==1) s=1; else */{
		for(i=1;i<=n;i++){
			t=t*x;
			s=sqrt(t+s);
		}
		cout<<"s= "<<s;
	}
}
