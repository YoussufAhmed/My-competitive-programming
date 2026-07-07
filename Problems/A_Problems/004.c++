
// Problem Link : https://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 





void solve(void){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
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