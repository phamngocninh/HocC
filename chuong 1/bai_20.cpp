#include<iostream>
#include<math.h>
using namespace std;
void uoc(int n,int i){
	if(i*i>n) return;
	else if(i*i==n){
		cout << i <<endl;
	}
	else if(n%i==0){
		cout << i <<endl;
		uoc(n,i+1);
		cout << n/i << endl;
	}
	else uoc(n,i+1);
}
int main(){
	long long n,i,t;
	cout<<"n= "; cin>>n;
	uoc(n,1);
	/*for(i=1;i<=sqrt(n);i++){
		if(n%i==0) 
	}*/
}
