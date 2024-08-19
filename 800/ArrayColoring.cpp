#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n;
        cin >> n;
        vector<int> ar(n);
        int cn = 0;
        for(int i = 0 ; i < n ; i++ ){
            cin >> ar[i];
            if(ar[i]%2!=0) cn++;
        }
        if(cn%2==0){
           cout << "YES";
        }
        else{
           cout << "NO";
        }
        cout << endl;
    }
    return 0;
}