#include <bits/stdc++.h>
typedef long long ll;

int main(){
    ll n, ans=1; std::cin >> n;
    
    for (ll i=0; i < n; ++i){
        ans *=2;
        ans %= (1000000000 + 7);
    }

    std::cout << ans << '\n';
    return 0;
}