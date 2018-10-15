#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,t=1;
	float s;
	cout<<"n= ";cin>>n;
	/* if(n==1) s=1; else */{
		for(i=1;i<=n;i++){
			t=t*i;
			s=sqrt(t+s);
		}
		cout<<"s= "<<s;
	}
}
