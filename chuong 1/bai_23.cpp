#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,t=0;
	cout<<"n= ";cin>>n;
	for(i=1;i<sqrt(n);i++){
		if(n%i==0) t=t+2 ;
	}
	if(n==i*i) t=t+1;
	cout<<"so uoc la: "<<t;
	
}
