#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	cout<<"c= ";cin>>c;
	if(a < 0) a= -a;
	if(b < 0) b= -b;
	if(c < 0)c= -c;
	cout<<"|a|= "<<a<<";|b|= "<<b<<";|c|= "<<c;
	
}
