#include <iostream>
using namespace std;




void solve(void){
    int t; 
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        (x % y) == 0 ? cout << "YES" << endl : cout << "NO" << endl;
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