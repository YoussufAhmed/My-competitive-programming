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
        vector<int> nums(n+1);
        for(int i=1; i<=n; i++){
            nums[i] = i;
        }

        int l=1, r=2;
        while(r<=n){
            int temp=nums[l];
            nums[l] =nums[r];
            nums[r]=temp;
            l+=2; r+=2;
        }

        for(int i=1; i<=n; i++){
            cout << nums[i] << " " ;
        }cout << endl;
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