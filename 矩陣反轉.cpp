#include<iostream>
using namespace std;
int main(){
	
	int m,n;
	while(cin>>m>>n){
	int arry[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
			cin>>arry[i][j];	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arry[j][i];
			if(j<m-1)
			cout<<" ";
		}	
		cout<<endl;
	}
}
	return 0;
}
