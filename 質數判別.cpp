#include<iostream>
#include <stdio.h>
using namespace std;
main() {
    int N;
    int i;
    
    cout<<"輸入一正整數N:"<<endl;
    cin>>N;
    if (N == 1) {       /*小於2的數非質數*/
        cout<<"No";
    } else {
        if (N <= 3) {       /* 2 和 3 為質數*/
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
