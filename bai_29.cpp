#include<iostream>
using namespace std;
int main(){
	long long i,n,s=0;
	cout<<"n= ";cin>>n;
	for(i=1;i*i<=n;i++){
		if(n%i==0) {
		if((n/i)%2==1) {
		s=n/i;break;}
	}}
	if(s==0) s=1;
	cout<<"Uoc so le lon nhat la: "<<s;
}
