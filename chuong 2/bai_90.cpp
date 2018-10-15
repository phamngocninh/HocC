#include<iostream>
using namespace std;
int main(){
	int i=0,t=0,n;
	cout<<"n= ";cin>>n;
	while((t+i)<n){
		t=t+i;
		i=i+1;
	}
	cout<<"k= "<<i-1;
}
