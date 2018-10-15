#include<iostream>
using namespace std;
int main(){
	int k,n,s=0,i=1;
	cout<<"n= ";cin>>n;
	while(s+i<n){
		s=s+i;
		i=i+1;
	}
	cout<<"k= "<<i-1;
}
