#include <bits/stdc++.h>
typedef long long int ll;

int main(){

    ll t,y,x,n,ans; std::cin >> t;
    while (t--){
        std::cin >> y >> x;
        n = std::max(y,x);
        if (!(n & 1)){
            if (y == n)
                ans = (n*n*1ll) - x + 1;
            else
                ans = (n - 1) * (n - 1) + y;
        }
        else{
            if (x == n)
                ans = (n*n*1ll) - y + 1;
            else
                ans = (n - 1) * (n - 1) + x;
        }

        std::cout << ans << '\n';
    }

    return 0;
}