//23h tra sua
#include<bits/stdc++.h>
using namespace std;
#define For(type, i, a, b) for(type i = a; i <= b; i++)

typedef long long ll;

const ll MOD = 1e9 + 7;

const ll limit = 1e4 + 5;

ll test;
ll n;
ll tick[limit];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}
void ReadIn(){
    test = 2;
    string a, b;
    while(test--){
        cin >> n;
         For(ll, i, 0, 1440)
                    tick[i] = 0;

        For(ll, j, 1, n){
            cin >> a >> b;

            int u = int(a[0] - 48) * 10 + int(a[1] - 48), x = int(b[0] - 48) * 10 + int(b[1] - 48);
            int v = int(a[3] - 48) * 10 + int(a[4] - 48), y = int(b[3] - 48) * 10 + int(b[4] - 48);
            int res = u * 60 + v;
            int ans = x * 60 + y;
           // cout << int(a[0]) <<" "<< res << " " << ans << endl;
           ans --;
           if(ans == -1)
                ans = 1439;

            if (res <= ans)
                For(ll, i, res, ans) tick[i] = 1;
            else{
                For(ll, i, res, 1440) tick[i] = 1;
                For(ll, i, 0, ans) tick[i] = 1;
            }
        }
            bool ok = false;
            For(ll, i, 0, 1439)
                if(tick[i] == 0){
              //      cout << i << endl;
                    ok = true;
                    break;
                }
            if(ok == true){
                cout << "huhuhu" << endl;
            }
            else cout << "bubbletea is delicious!" << endl;

    }
}

int main(){
    FastIn();
    ReadIn();
}