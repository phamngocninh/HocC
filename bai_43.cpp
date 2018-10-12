#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"so chu so cua n la 1";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) {k=k+1;t=t/10 ;}else break;
	}
	cout<<"so chu so cua n la:"<<k;}
	
}
