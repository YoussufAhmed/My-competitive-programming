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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int fre[3]{};
        for(int i=0; i<n; i++){
            cin >> arr[i];
            fre[arr[i]]++;
        }

        int count = 0;
        count+=fre[0];
        count+=min(fre[1], fre[2]);
        if(fre[1] > fre[2]){
            fre[1]-=fre[2];
            count+=(fre[1]/3);
        }else if(fre[2] > fre[1]){
            fre[2]-=fre[1];
            count+=(fre[2]/3);
        }

        cout << count << endl;


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