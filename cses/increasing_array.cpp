#include <bits/stdc++.h>
typedef long long int ll;

int main(){
    ll n; std::cin >> n;
    std::vector<ll> v(n);
    for (int i=0; i < n; ++i){
        std::cin >> v[i];
    }

    ll cont = 0;
    for (ll i=0; i < n-1; ++i){
        if (v[i] > v[i+1]){
            ll diff = v[i+1] - v[i];
            //std::cout << i << ") diff: " << v[i+1] << " - "<< v[i] << ": " << diff << '\n';
            cont += abs(diff);
            v[i+1] = v[i];
        }
    }
    std::cout << cont;

    return 0;
}