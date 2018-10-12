#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,s=0;
	cout<<"n= ";cin>>n;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0) s=s+i+(n/i);
	}
	cout<<"s= "<<s;
	
}
