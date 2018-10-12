#include<iostream>
using namespace std;
int UCLN(int x,int y){
	
	if(y==0) return x;
	if(x%y==0) return y;
	else return UCLN(y,x%y);
	
}
int main() {
	int a,b;
	cout<< "Nhap so a: "; cin>>a;
	cout<< "Nhap so b: "; cin>>b;
	cout << "UCLN = "<< UCLN(a,b) ;
}
