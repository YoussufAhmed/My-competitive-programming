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
        int arr[n];
        int mx=0, mn=2000;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]>mx) mx=arr[i];
            if(arr[i]<mn) mn=arr[i];
        }

        int target=(mn+mx)/2;
        if(target==0){
            cout << 0 << endl;
            continue;
        }

        int x=max(abs(mx-target), abs(target-mn));
        x++;
        int fre[x]{};
        for(int i=0; i<n; i++){
            fre[(abs(arr[i]-target))]++;
        }

        int counter=0;
        for(int i=0; i<x+1; i++){
            if(fre[i]>0)  counter++;
        }

        cout << counter << endl;
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