#include<iostream>
using namespace std;
int main(){
	int i=1,n;
	float S=0;
	do {
		cout<<"Nhap so nguyen n: "; cin>>n;
		if(n<1) cout<<"Nhap n lon hon 1"<<endl;
	} while(n<1);
	do {
		S=S+1.0/i;
		i=i+1;
	}
	while(i<=n);
	cout<<"Tong 1/1+1/2+1/3+....+1/"<<i-1<<" la: "<<S;
	
}
