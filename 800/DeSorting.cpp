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
        vector<int> ar(n,0);
        for(int i = 0 ; i < n ; i++ ){
            cin >> ar[i];
        }
        int f = 1;
        for(int i = 1 ; i < n ; i++ ){
            if(ar[i-1] > ar[i]){
                cout << "0" << endl;
                f = 0;
                break;
            }
        }
        if(f){
            int first = 0,sec = 0, min_ = (int)1e9+7;
            for(int i = 1; i < n ; i++){
                if(abs(ar[i-1]-ar[i]) < min_){
                    min_ = abs(ar[i-1]-ar[i]);
                    first = ar[i-1];
                    sec = ar[i];
                }
            }
            cout << ((sec-first)/2)+1 << endl;
        }
    }

    return 0;
}