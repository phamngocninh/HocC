#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	if(a==0) {
		if(b==0) cout<<"phuong trinh vo so nghiem"; else cout<<"phuong trinh vo nghiem";
	} else cout<<"phuong trinh co nghiem la: "<<-b/a;
}
