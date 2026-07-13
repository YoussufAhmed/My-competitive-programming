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
        int n; cin >>n;
        vector<ll> arr1(n), arr2(n);
        for(int i=0; i<n; i++)  cin >> arr1[i];
        for(int i=0; i<n; i++)  cin >> arr2[i];
        for(int i=0; i<n; i++){
            if(arr1[i] > arr2[i]){
                swap(arr1[i], arr2[i]);
            }
              
        }  
        ll sum=0;
        ll MAx = arr1[0];
        for(int i=0; i<n; i++){
            sum+=arr2[i];
            MAx = max(MAx, arr1[i]);
        }
        sum+=MAx;
        cout << sum << "\n";
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