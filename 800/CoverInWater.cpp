#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n >> str;
        int emptyCells = 0, maxContinous = 0 , count = 0;
        for( char c : str){
            if(c == '.'){
                emptyCells++;
                count++;
            }
            if(c == '#'){
                maxContinous = max(count, maxContinous);
                count = 0;
            }
        }
        maxContinous = max(count, maxContinous);
        if(emptyCells == 0){
            cout << 0;
        }
        else if(maxContinous > 2){
            cout << 2;
        }
        else{
            cout << emptyCells;
        }
        cout << endl;
    }
    return 0;
}