#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,min=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"chu so nho nhat cua n la 0";else {
		min=n%10;
		for(i=1;i<=n;i++){
			if((float)t/10>0) {k=t%10;t=t/10;if(min>=k) min=k ;}else break;
	}
	cout<<"chu so nho nhat cua n la:"<<min;}
	
}
