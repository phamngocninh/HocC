#include<iostream>
using namespace std;
int main(){
	long long n,i;
	float S;
	cout<<"nhap n: ";cin>>n;
	for(i=0;i<=n;i++){
		S=S+1.0*(2*i+1)/(2*i+2);
	}
	cout<<"S= "<<S;
}
