#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int n , m;
        cin >> n >> m;
        string x , s;
        cin >> x >> s;
        if(x.find(s) != -1){
            cout << 0 << endl;
        }
        else{
            int c = 1;
            int f = 0;
            while(x.size() < 25){
                x += x;
                if(x.find(s) != -1){
                    cout << c << endl;
                    f = 1;
                    break;
                }
                c+=1;
            }
            if(!f){
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
