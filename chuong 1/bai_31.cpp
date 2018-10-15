#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,s=0;
	cout<<"n= ";cin>>n;
	if(n==2||n==3) cout<<"n la so nguyen to"; else {
	for(i=2;i*i<=n;i++){
		if(n%i==0) { cout<<"n khong phai so nguyen to";break ;}
	}}
	if(i*i>n) cout<<"n la so nguyen to";
	
}
