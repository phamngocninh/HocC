#include<iostream>
using namespace std;
int main(){
	int n,t;
	cout<<"n= ";cin>>n;
	t=n;
	while(t!=1){
		if((t%3)!=0){
			cout<<"so n khong co dang 3^k";break;}
		t=t/3;
		}	
	if(t==1) cout<<"so n co dang 3^k";
}
