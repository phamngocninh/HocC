#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,t=1;
	float s;
	cout<<"n= ";cin>>n;
	{
		for(i=1;i<=n;i++){
			t=t*i;
			s=pow((t+s),1.0/(i+1));
		}
		cout<<"s= "<<s;
	}
}
