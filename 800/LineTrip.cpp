#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> arr;
        for(int i = 0 ; i < n ; i++ ){
            int data;
            cin >> data;
            arr.push_back(data);
        }
        int ans = arr[0];
        for(int i = 1 ; i < n ; i++ ){
            ans = max(arr[i]-arr[i-1] ,ans);
        }
        ans = max(ans, 2*(x-arr[n-1]));
        cout << ans << endl;
    }

    return 0;
}