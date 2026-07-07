
// Problem Link : https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long 





void solve(void){
    string name;
    cin >> name;
 
    set<char> chars;
    for(int i=0; i<name.size(); i++){
        chars.insert(name[i]);
    }
 
    chars.size()%2 == 0 ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
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