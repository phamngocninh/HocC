#include<iostream>
using namespace std;
int main(){
	int i=0,t=0;
	while((t+i)<10000){
		t=t+i;
		i=i+1;
	}
	cout<<"k= "<<i;
}
