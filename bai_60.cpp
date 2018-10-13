#include<iostream>
using namespace std;
int main(){
	long long n,i,t,k=0,u=0,v=1;
	cout<<"n= ";cin>>n;
	t=n;
	if(n==0) cout<<"so 0";
	else {
		
		k=t%10;
		t = t/10;
		while(t){
			if(t%10>k){
				v=0;
				break;
			}
			k=t%10;
			t=t/10;
		}
		if(v==1) cout<<"chu so cua n tang dan tu trai sang phai";
		else
	         cout<<"chu so cua n khong tang dan tu trai sang phai";
	}
}

