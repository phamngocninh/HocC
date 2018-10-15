#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"chu so dau tien cua n la 0";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) { if((t/10)<1) k=t%10;t=t/10 ;}else break;
	}
	cout<<"chu so dau tien cua n la:"<<k;}
	
}
