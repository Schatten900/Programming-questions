#include <bits/stdc++.h>
typedef long long int ll;

int main(){


    ll n,aux=1; std::cin >> n;
    std::vector<ll>v(n);

    if (n == 2 || n == 3){
        std::cout << "NO SOLUTION";
        return 0;
    }

    for (int i=0; i<n; ++i){
        if (aux > n){
            aux = 2;
        }
        v[i] = aux;
        aux += 2;
    }

    for (int i=0; i<n; ++i){
        std::cout << v[i] << " ";
    }

    return 0;
}