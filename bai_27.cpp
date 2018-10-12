#include<iostream>
using namespace std;
int main(){
	long long i,n,s=0;
	cout<<"n= ";cin>>n;
	if(n%2==0) s=1;
	for(i=2;i*i<=n;i=i+2){
		if(n%i==0) {
		if((n/i)%2==0) s=s+2; else s=s+1;
	}}
	if(n==(i-2)*(i-2)) s=s-1;
	cout<<"Tong  cac uoc so chan: "<<s;
}
