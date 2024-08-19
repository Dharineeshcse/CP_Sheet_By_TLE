#include<algorithm>
#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int a, b, c;
        cin >> a >> b >> c;
        if( c % 2 == 0 ){
          if ( a > b) cout << " First";
          else cout << "Second";
        }
        else{
            if( b > a) cout << "Second";
            else cout << "First";
        }
        cout << endl;
    }

    return 0;
}