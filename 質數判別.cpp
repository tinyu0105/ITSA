#include<iostream>
#include <stdio.h>
using namespace std;
main() {
    int N;
    int i;
    
    cout<<"块タ俱计N:"<<endl;
    cin>>N;
    if (N == 1) {       /*2计獶借计*/
        cout<<"No";
    } else {
        if (N <= 3) {       /* 2 ㎝ 3 借计*/
            cout<<"Yes";
        } else {
            for (i=3; i <= N-1; i++) {
                if (N % i == 0) {
                    cout<<"No";
                   return N;
                }
            }
            cout<<"Yes";
        }	
    }
}
