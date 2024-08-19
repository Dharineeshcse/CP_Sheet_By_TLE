#include<algorithm>
#include <iostream>
#include<vector>

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
        sort(ar.begin(), ar.end());
        if(ar.back() == ar[0]){
            cout << "-1" << endl;
        }
        else{
            int ind = 0;
            while(ar[ind] == ar[0]) ind++;
            cout << ind << " " << n-ind << endl;
            for(int i = 0 ; i < ind ; i++ ){
                cout << ar[i] << " ";
            }
            cout << endl;
            for(int i = ind ; i < n ; i++ ){
                cout << ar[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}