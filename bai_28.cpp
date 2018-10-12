#include<iostream>
using namespace std;
int main(){
	long long i,n,s=0;
	cout<<"n= ";cin>>n;
	for(i=1;i*i<=n;i++){
		if(n%i==0) s=s+i+n/i;
	}
	if(n==(i-1)*(i-1)) s=s-i+1;
	s=s-n;
	cout<<"Tong  cac uoc nho hon no la: "<<s;
}
