#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i];
        }
        vector<int> ar;
        int ans = n;
        ar.push_back(arr[0]);
        for(int i = 1; i < n; i++ ){
            if(arr[i-1] <= arr[i] ){
                ar.push_back(arr[i]);
            }
            else{
                ans++;
                ar.push_back(arr[i]);
                ar.push_back(arr[i]);
            }
        }
        cout << ans << endl;
        for(int v : ar){
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}