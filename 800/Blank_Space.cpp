#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        int max_ = 0, c = 0;
        for(int i = 0 ; i < n ; i++ ){
            int data;
            cin >> data;
            if(!data){
                c++;
                max_ = max(c, max_);
            }
            else{
                c = 0;
            }
        }
        cout << max_ << endl;
    }

    return 0;
}