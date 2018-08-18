#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double x;
cin>>x;
if(x>0){
	x *= x;
	x *= 10;
	x += 0.5;
cout<<fixed<<setprecision(1)<<(double)x/10<<endl;
}
return 0;
}
