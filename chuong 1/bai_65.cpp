#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,a,b,c,denta;
	do {
		cout<<"a= ";cin>>a;
		if(a==0) cout<<"nhap a khac 0"<<endl;
	} while(a==0);
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	denta=b*b-4*a*c;
		if(denta<0) cout<<"Phuong trinh vo nghiem";
		if(denta==0) cout<<"phuong trinh co nghiem kep x1=x2= "<<-b/2*a;
		if(denta>0) {
			cout<<"phuong trinh co 2 nghiem phan biet: "<<endl;
			cout<<"x1= "<<(-b+sqrt(denta))/(2*a)<<endl;
			cout<<"x2= "<<(-b-sqrt(denta))/(2*a)<<endl;
		}
					
}
