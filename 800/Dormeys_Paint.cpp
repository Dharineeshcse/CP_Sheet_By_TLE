#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int n;
        map<int, int> mp;
        int data;
        cin >> n;
        for(int i = 0 ; i < n ; i++ ){
            cin >> data;
            mp[data]++;
        }
        if(mp.size() > 2){
            cout << "NO" << endl;
        }
        else if(mp.size() == 1){
            cout << "YES" << endl;
        }
        else{
            int f = 0;
            for(auto v : mp){
                if(v.second < n/2){
                    cout << "NO" << endl;
                    f = 1;
                    break;
                }
            }
            if(!f){
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}