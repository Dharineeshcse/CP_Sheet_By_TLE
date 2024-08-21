#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n;
        cin >> n;
        int neg = 0, pos = 0, ans = 0, sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            int data;
            cin >> data;
            sum += data;
            if(data == -1) neg++;
        }
        ans = ceil((-sum)/2.0);
        if(sum >=0 ) ans = 0;
        neg -= ans;
        if(neg&1) ans++;
        cout << ans << endl;
        
    }

    return 0;
}