#include<iostream>
#include<time.h>
using namespace std;
int main(){
	long long x,s,i,t,n;
	cout<<"n= ";cin>>n;
	cout<<"x= ";cin>>x;
	time_t timer,start;
    time(&start);
	for(i=1;i<=n;i++){
		t=t*x;
		s=s+t;
	}
	cout<<"s= "<<s<<endl;
	time(&timer);  /* get current time; same as: timer = time(NULL)  */

  	double seconds = difftime(timer,start);
  	cout <<"thoi gian chay: " <<seconds;
}
