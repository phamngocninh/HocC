#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"n= ";cin>>n;
	if(n==2 || n==1) cout<<"n la so nguyen to";
	for(i=2;i*i<=n;i++){
		if(n%i==0) { cout<<"n khong la so nguyen to";break;}
	}
	if((i*i)>n) cout<<"n la so nguyen to";
}
