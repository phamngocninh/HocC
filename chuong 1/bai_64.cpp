#include<iostream>
using namespace std;
int main(){
	float a,b,x;
	cout<<"nhap so a= ";cin>>a;
	cout<<"nhap so b= ";cin>>b;
	if(a==0)
	{
		if(b==0)
			cout<<"phuong trinh co vo so nghiem";
		else
			cout<<"phuong trinh vo nghiem";
	}
	else {
		x=-b/a;
		cout<<"phuong trinh co nghiem x=  "<<x<<" ";
	}

}
