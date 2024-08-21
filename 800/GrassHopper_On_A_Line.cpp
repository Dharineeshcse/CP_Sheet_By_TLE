#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n, k;
        cin >> n >> k;
        if(n%k!=0){
            cout << 1 << endl << n << endl;
        }
        else{
            cout << 2 << endl << n-1 << " " << 1 << endl;
        }
    }

    return 0;
}