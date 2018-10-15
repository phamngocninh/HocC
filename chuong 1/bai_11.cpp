#include<iostream>
using namespace std;
int main() {
	long long s=0,n,i,t=1;
	cout<<"n= ";cin>>n;
	for(i=1;i<=n;i++){
		t=t*i;
		s=s+t;
	}
	cout<<"s= "<<s;
}
