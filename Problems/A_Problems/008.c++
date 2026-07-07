#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




void solve(void){
    int t; cin >> t;
    while(t--){
        int n, c; cin >> n >> c;
        vector<int> v1(n), v2(n);
        int sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            cin >> v1[i];
            sum1+=v1[i];
        }
        bool are_valid = true, sorted = true;
        for(int i=0; i<n; i++){
            cin >> v2[i];
            if(v2[i]>v1[i]){
                are_valid = false;
                sorted = false;
            }
            sum2+=v2[i];
        }

        if(!are_valid){
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            are_valid = true;
            for(int i=0; i<n; i++){
                if(v2[i] > v1[i]){
                    are_valid = false;
                }
            }
        }

        if(are_valid && sum1 >= sum2){
            sorted ? cout << sum1-sum2 << endl : cout << sum1 - sum2 + c << endl;
        }else{
            cout << -1 << endl;
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