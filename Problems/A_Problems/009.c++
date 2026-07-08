//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 




void solve(void){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num;
        int Min, Max;
        for(int i=0; i<n; i++){
            cin >> num;
            if(!i){
                Min = Max = num;
            }else{
                if(num > Max)
                  Max = num;
                if(num < Min)
                  Min = num;
            }
            
        }

        cout << Max - Min + 1 <<  endl;
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