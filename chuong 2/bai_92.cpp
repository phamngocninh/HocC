#include<iostream>
using namespace std;
int main(){
	int a,b,sodu;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	while(b !=0) {
		sodu= a%b;
		a=b;
		b=sodu;
	}
	cout<<"uoc chung lon nhat la: "<<a;
}
