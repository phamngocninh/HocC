#include<iostream>
using namespace std;
int main(){
	long long n,i;
	float S;
	cout<<"nhap n: ";cin>>n;
	for(i=1;i<=n;i++){
		S=S+(1.0*i)/(i+1);
	}
	cout<<"S= "<<S;
}
