#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,u=1;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"n khong toan chu so le";else {
	for(i=1;i<=n;i++){
		if((float)t/10>0) 
			{
				k=t%10;t=t/10 ;
				if(k%2==0) u=0;
			}
		else break;
					}
	if(u==0) cout<<"n khong toan chu so le";
	if(u==1)cout<<"n toan chu so le" ;
												}
	
	
}
