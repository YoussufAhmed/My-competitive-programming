
// Problem Link : https://codeforces.com/contest/231/problem/A

//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 




void solve(void){
    int n;
    cin >> n;

    int answer = 0;
    while(n--){
        int num;
        int sum = 0;
        for(int i=0; i<3; i++){
            cin >> num;
            sum+=num;
        }
        if(sum > 1)
          answer++;
    }
 
    cout << answer << endl;
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