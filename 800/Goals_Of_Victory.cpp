#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int negative = 0 , positive = 0;
        int n;
        cin >> n;
        for(int i = 0 ; i < n-1 ; i++ ){
            int data ;
            cin >> data;
            if(data >=0 ) positive += data;
            else negative += (data*-1);
        }
        if(positive > negative){
            cout << (positive-negative)*-1 << endl;
        }
        else{
            cout << negative-positive << endl;
        }
    }
    return 0;
}

