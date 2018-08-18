#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int s;
	cout<<"輸入英里"<<endl;
	cin>>s;
	cout<<s<<"英里為"<<fixed<<setprecision(1)<<(double)s*1.6<<"公里" <<endl;
	return 0; 
}
