
// Problem Link : https://codeforces.com/contest/1646/problem/B

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long 




void solve(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        sort(a.begin(), a.end());
 
vector<long long> pref(n);
pref[0] = a[0];
for(int i = 1; i < n; i++){
    pref[i] = pref[i-1] + a[i];
}
 
bool ok = false;
 
for(int k = 2; k <= n; k++){
    long long blue = pref[k-1]; // first k elements
    long long red = pref[n-1] - pref[n-k]; // last (k-1) elements
 
    if(red > blue){
        ok = true;
        break;
    }
}
 
cout << (ok ? "YES\n" : "NO\n");
        
 
 
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