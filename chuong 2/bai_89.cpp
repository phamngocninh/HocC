#include<iostream>
using namespace std;
int main() {
	int n,s,i;
	cout<<"n= ";cin>>n;
	for(i=1;i<=n;i=i+2) {
		s=s+i;
	}
	cout<<"s= "<<s;
}
