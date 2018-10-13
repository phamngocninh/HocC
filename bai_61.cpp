#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,u=0,v=0;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"so 0";
	else {
		
		k=t%10;
		t = t/10;
		while(t){
			if(t%10<k){
				v=1;
				break;
			}
			k=t%10;
			t=t/10;
		}
		if(v==0) cout<<"chu so cua n giam dan tu trai sang phai";
		else
	         cout<<"chu so cua n khong khong giam dan tu trai sang phai";
	}
}

