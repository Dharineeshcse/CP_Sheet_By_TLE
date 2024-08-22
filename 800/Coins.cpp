#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        long long int n, k;
        cin >> n >> k;
        int f = 0;
        for(int i = 0 ; i < 2 ; i++ ){
            if((n-i*k) >=0 && (n-i*k)%2 == 0){
                f = 1;
                break;
            }
        }
        if(f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}