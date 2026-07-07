
// Problem Link : https://codeforces.com/contest/263/problem/A

//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 




void solve(void){
    int matrix[5][5];
    int row, column;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                row = i;
                column = j;
            }
        }
    }
    cout << abs(2 - row) + abs(2 - column) << endl;
}

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void){

    fastIO();
    solve();
    return 0;
}