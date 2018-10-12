#include<iostream>
using namespace std;
int main(){
	long long i,n,s=0;
	cout<<"n= ";cin>>n;
	if(n%2==0) s=n;
	for(i=2;i*i<=n;i=i+2){
		if(n%i==0) {
		if((n/i)%2==0) s=s+i+n/i; else s=s+i;
	}}
	if(n==(i-2)*(i-2)) s=s-i+2;
	cout<<"Tong  cac uoc so chan: "<<s;
}
