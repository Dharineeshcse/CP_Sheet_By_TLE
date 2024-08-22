#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        for(int i = 0 ; i < n ; i++ ){
            int data;
            cin >> data;
            cout << (n-data)+1 << " ";
        }
        cout << endl;
    }

    return 0;
}