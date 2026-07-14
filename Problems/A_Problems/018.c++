//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long 



long long ceil_div(long long a, long long b) {
    return (a + b - 1) / b;
}

long long ceil_div1(long long a, long long b) {
    if(a % b){
        return a + (b - (a % b)) / b;
    }else{
        return a / b;
    }
}


void solve(void){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int counter=0;
        int Max=0;
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                Max=max(Max, counter);
                counter=0;
            }else{
                counter++;
            }
        }
        Max=max(Max, counter);
        cout << ceil_div(Max, 2) << "\n";
    }
    
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