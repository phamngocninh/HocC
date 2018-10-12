#include<iostream>
using namespace std;
int main(){
	int n,S,i;
	cout<<"Nhap so tu nhien n: "; cin>>n;
	for(i=1;i<=n;i++) S=S+i;
	cout<<"Tong "<<n<<" so tu nhien dau tien la: "<<S;
}
