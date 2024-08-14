#include <bits/stdc++.h>
using namespace std;


int find(int i , int j){
    if(i==0 || j==0 || i==9 || j==9) return 1;
    if(i==1 || j==1 || i==8 || j==8) return 2;
    if(i==2 || j==2 || i==7 || j==7) return 3;
    if(i==3 || j==3 || i==6 || j==6) return 4;
    if(i==4 || j==4 || i==5 || j==5) return 5;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0){
        char board[10][10];
        for(int i = 0 ; i < 10 ; i++ ){
            for(int j = 0 ; j < 10 ; j++ ){
                cin >> board[i][j];
            }
        }
        int points = 0;
        for(int i = 0 ; i < 10 ; i++ ){
            for(int j = 0 ; j < 10 ; j++){
                if(board[i][j]== 'X'){
                    points += find(i , j);
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}

