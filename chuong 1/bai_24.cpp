#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,i,t=-1,a[n];
	cout<<"n= ";cin>>n;
	for(i=1;i*i<=n;i=i+2){
		if(n%i==0) {
			i=a[t+1];
			if((n/i)%2==1&& n/i!=i) cout << n/i << endl;
		}
	}
	
}
