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

    int t; cin >>t; 
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int i = 0;
        ll sum = 0;
        while(i < n-1){
            if(arr[i+1] > arr[i])
              arr[i+1] = arr[i];
            i++;
        }

        for(int i=0; i<n; i++) sum+=arr[i];
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