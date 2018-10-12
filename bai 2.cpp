#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n,i=1,S=0;
	cout<<"Nhap so tu nhien n: "; cin>>n;
	while(i<=n){
		S=S+pow(i,2);
		i=i+1;
	}
	cout<<"Tong 1^2+2^2+....+"<<n<<"^2 la: "<<S;
}
