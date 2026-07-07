
// Problem Link : https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long 




#include <iostream>
#include <string>
using namespace std;

void solve(void){
    string s;
    cin >> s;
    int n = s.size();
    int arr[n+1]{0};
    for(int i=1; i<n; i++){
        if(s[i-1] == s[i]){
            if(i == 1){
                arr[i]++;
            }else{
                arr[i] = arr[i-1]+1;
            }
        }else{
            arr[i] = arr[i-1]; 
        }
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout <<  arr[r-1] - arr[l-1] << endl;
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