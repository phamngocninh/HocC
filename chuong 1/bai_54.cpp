#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,min=0,u=0;
	cout<<"n= ";cin>>n;
	min=n%10;
	t=n;
	if(n==0) cout<<"so chu so nho nhat cua n la 0";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) 
		{k=t%10;t=t/10;
			if(k==min) {min=k;u++;}
			if(k<min) {min=k;u=1;}
		}
		else break;
	}
	cout<<"so chu so nho nhat cua n la:"<<u;}
	
}
