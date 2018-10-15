#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=100;i=i+2){
		if(i==5 || i==7 ||i==93) continue;
		if(i==51) cout<<endl;
		cout<<i<<"; ";
	}
}
