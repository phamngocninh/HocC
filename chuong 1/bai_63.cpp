#include<iostream>
using namespace std;
int main(){
	long long a,b,t=1,u,x,y;
	cout<<"Nhap a: ";cin>>x;a=x;
	cout<<"Nhap b: ";cin>>y;b=y;
	if(a%b==0 || b%a==0) {
		if(a>=b) cout<<"boi chung nho nhat la: "<<a;
		else cout<<"boi chung nho nhat la"<<b;
	}else {
		if(a>b){
		
			while(t) {
				t=a%b;
				a=b;
				b=t;
			
	} 
			cout<<"boi chung nho nhat la: "<<(x/a)*y;
	} else{
		while(t) {
				t=b%a;
				b=a;
				a=t;
			
	} 
			cout<<"boi chung nho nhat la: "<<(x/b)*y;
	}
	}	
}
