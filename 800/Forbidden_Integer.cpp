#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n, k, x;
        cin >> n >> k >> x;
        if(x!=1){
            cout << "YES" << endl << n << endl;
            for(int i = 0 ; i < n ; i++ ){
                cout << "1" << " ";
            }
            cout << endl;
        }
        else if(k==1 || (k==2 && n%2!=0)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl << n/2 << endl;
            if(n%2==0){
                cout<<"2";
            }
            else{
                cout<<"3";
            }
            for(int i = 1 ; i < n/2 ; i++ ){
                cout << " 2";  
            }
            cout << endl;
        }
    }

    return 0;
}