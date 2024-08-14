#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int size, val , f = 0;
        cin >> size >> val;
        for(int i = 0 ; i < size; i++ ){
            int data;
            cin >> data;
            if(data == val){
                f = 1;
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
