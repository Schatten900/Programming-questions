#include <bits/stdc++.h>
typedef long long int ll;

int main(){

    ll n,places,attacks,ans; std::cin >> n;

    for (int i=1; i <=n; ++i){
        places =  (i * i * (i * i - 1)) / 2;
        attacks = 0;
        if (i > 2)
            attacks = 4*(i-2)*(i-1);
        ans = places - attacks;
        std::cout << ans << '\n';
    }

    return 0;
}