#include<iostream>
#include <time.h> 
using namespace std;
long long T(long long x,long long n){
	if(n==1) return x;
	long long d = T(x,n/2);
	if(n%2==0) return d*d;
	else return d*d*x;
}
int main(){
	long long S=1,n,i,t,x;
	cout<<"n= ";cin>>n; cout<<"x= "; cin>>x;
	time_t timer,start;
    time(&start);
	/*for(i=1;i<=n/2;i++){
		S=S*x;
		if(n%2==0&&i==n/2) S=S*S;
		if((n-1)%2==0&&i==(n-1)/2) {
		S=S*S*x;break;}
	}*/
	
	
	cout<<"S= "<<T(x,n)<<endl;
	time(&timer);  /* get current time; same as: timer = time(NULL)  */

  	double seconds = difftime(timer,start);
  	cout << seconds;
}
