// Problem Link : https://codeforces.com/contest/2242/problem/A


#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
#include<map>
using namespace std;




void solve(void){ 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        unsigned long long Max= 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(Max < (n*2)){
                Max+= arr[i];
            }
        }
        if(Max >= n+2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
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