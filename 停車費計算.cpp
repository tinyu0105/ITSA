#include<iostream>
using namespace std;
int main(){
	int inHr,inMin,outHr,outMin,totalT;
	cin>>inHr>>inMin;
	cin>>outHr>>outMin;
	totalT=outHr*60+outMin-(inHr*60+inMin);
	if(totalT>240){
		cout<<280+(totalT/30-8)*60<<endl;
	}
	else  if(totalT>120){
		cout<<120+(totalT/30-4)*40<<endl;
	}
	else

		cout<<(totalT/30)*30<<endl;
		return 0;
}
