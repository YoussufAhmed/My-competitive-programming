
// Problem Link : https://codeforces.com/contest/791/problem/A

//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 




void solve(void){
    int a, b;
    cin >> a >> b;
    int count = 0;
    while(a <= b){
        a*=3;
        b*=2;
        count++;
    }
    cout << count << endl;
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