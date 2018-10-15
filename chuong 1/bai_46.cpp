#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"so chu so le cua n la 0";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) {if((t%10)%2==1) k=k+1;t=t/10 ;}else break;
	}
	cout<<"so luong chu so le cua n la:"<<k;}
	
}
