#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=1;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"tich chu so cua n la 0";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) {k=k*(t%10);t=t/10 ;}else break;
	}
	cout<<"tich cac chu so cua n la:"<<k;}
	
}
