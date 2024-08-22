#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int x , y , x1, y1;
        cin >> x >> y >> x1 >> y1;
        if( y1 >= y && (x-y) >= (x1-y1)){
            cout << (y1-y)+((x+y1-y)-x1) << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}