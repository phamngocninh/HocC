#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,max=0,u=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"so chu so lon nhat cua n la 0";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) 
		{k=t%10;t=t/10;
			if(k==max) {max=k;u++;}
			if(k>max) {max=k;u=1;}
		}
		else break;
	}
	cout<<"so chu so lon nhat cua n la:"<<u;}
	
}
