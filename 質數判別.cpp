#include<iostream>
#include <stdio.h>
using namespace std;
main() {
    int N;
    int i;
    
    cout<<"��J�@�����N:"<<endl;
    cin>>N;
    if (N == 1) {       /*�p��2���ƫD���*/
        cout<<"No";
    } else {
        if (N <= 3) {       /* 2 �M 3 �����*/
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
