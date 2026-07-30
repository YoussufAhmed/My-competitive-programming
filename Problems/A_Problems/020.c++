// problem link: https://codeforces.com/contest/2227/problem/B

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
       string s1 = "", s2="";
       for(int i=0; i<n; i++){
        char c; cin >> c;
        if(c == ')') s1.push_back(c);
        else s2.push_back(c);
       }

       s1.size() == s2.size() ? cout << "YES\n" : cout << "NO\n";
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