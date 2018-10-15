#include<iostream>
using namespace std;
int main(){
	long long i,n,s=1;
	cout<<"n= ";cin>>n;
	for(i=1;i*i<=n;i=i+2){
		if(n%i==0) {
		if((n/i)%2==1) s=s*n; else s=s*i;
	}}
	if(n==(i-2)*(i-2)) s=s/(i-2);
	cout<<"Tich cac uoc so le: "<<s;
}
