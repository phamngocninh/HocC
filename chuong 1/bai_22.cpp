#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,s=1;
	cout<<"n= ";cin>>n;
	for(i=1;i<sqrt(n);i++){
		if(n%i==0) s=s*n;
	}
	if(n==i*i) s=s*i;
	cout<<"s= "<<s;
	
}
