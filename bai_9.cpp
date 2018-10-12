#include<iostream>
using namespace std;
int main(){
	long long n,i;
	long long S=1;
	cout<<"nhap n: ";cin>>n;
	for(i=1;i<=n;i++){
		S=S*i;
	}
	cout<<"S= "<<S;
}
