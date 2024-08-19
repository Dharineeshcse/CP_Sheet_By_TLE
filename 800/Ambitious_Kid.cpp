#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int min_ = (int)1e9+7;
    for(int i = 0; i < t; i++ ){
        int data;
        cin >> data;
        min_ = min(min_, abs(data));
    }
    cout << min_;


    return 0;
}