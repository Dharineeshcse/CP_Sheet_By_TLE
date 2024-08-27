#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n;
        cin >> n;
        int data;
        int ans = 0;
        for(int i = 0 ; i < n ; i++ ){
            cin >> data;
            ans ^= data;
        }
        if(n%2!=0){
            cout << ans;
        }
        else{
            if(ans == 0){
                cout << ans;
            }
            else{
                cout << -1;
            }
        }
        cout << endl;
    }

    return 0;
}