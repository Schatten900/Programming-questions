#include <bits/stdc++.h>
typedef long long ll;

int main(){

    ll n,x,y; std::cin >> n;
    while (n--){
        std::cin >> x >> y;
        if ((x + y) % 3 != 0 || x > 2*y || y > 2*x )
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }

    return 0;
}