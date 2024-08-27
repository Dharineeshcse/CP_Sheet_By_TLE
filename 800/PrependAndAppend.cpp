#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase-->0){
        int n;
        string str;
        cin >> n >> str;
        int i = 0, j = str.size()-1;
        while( i < j && ((str[i]=='0' && str[j]=='1') || (str[i]=='1' && str[j]=='0'))){
            i++;
            j--;
        }
        cout << j-i+1 << endl;
    }
    return 0;
}