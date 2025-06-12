#include <bits/stdc++.h>
typedef long long int ll;

int main(){
    ll n;
    std::cin >> n;
    std::vector<ll> v;

    for (ll i =0; i < n-1; ++i){
        ll value;
        std::cin >> value;
        v.push_back(value);
    }

    sort(v.begin(),v.end());

    if (n == 2){
        if (v[0] == 1){
            std::cout << 2 << '\n';
            return 0;
        }
        std::cout << 1;
        return 0;
    }

    for (ll i=0; i<n-1; ++i){
        if (v[i+1] != v[i]+1){
            std::cout << (v[i]+1) << '\n';
            return 0;
        }
    }
    std::cout << n;

    return 0;
}