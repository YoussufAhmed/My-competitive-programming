//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
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
        float n, x, y, z;
        cin >> n >> x >> y >> z;
        float FirstWay = ceil(n / (x + y));
        float m = n - (x * z);
        float SecondWay = ceil(m / (x + (y*10)) + z);
        int F = FirstWay, S = SecondWay;
        cout << min(F, S) << endl;

    }
}

void solve1(void){
    int t; cin >> t;
    while(t--){
        int n, x, y ,z;
        cin >> n >> x >> y >> z;

        int FirstWay = ceil_div(n , (x + y));
        int SecondWay = z;
        int Remainder = n - (x * z);

        if(Remainder>0){
            SecondWay+=ceil_div(Remainder, (x+y*10));
            cout << min(FirstWay, SecondWay) << endl;
        }else{
            cout << FirstWay << endl;
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