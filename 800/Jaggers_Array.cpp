#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0 ; i < n ; i++ ){
            cin >> ar[i];
        }
        if(is_sorted(ar, ar+n)){
            cout << "YES" << endl;
            continue;
        }
        bool f = 1;
        while(f){
            f = 0;
            for(int i = 1 ; i < n-1 ; i++){
                if(ar[i] > ar[i-1] && ar[i] > ar[i+1]){
                    f = 1;
                    swap(ar[i], ar[i+1]);
                }
            }
        }
        if(is_sorted(ar, ar+n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}