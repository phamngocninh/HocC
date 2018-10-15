#include<iostream>
using namespace std;
int main(){
	int n,i;
	float S=0;
	do {
		cout<<"Nhap so nguyen n>=1: ";cin>>n;
	} while(n<1);
	for(i=1;i<=n;i++) S=S+1.0/(2*i);
	cout<<"Tong can tim la: "<<S;
	
}
