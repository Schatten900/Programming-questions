#include <bits/stdc++.h>

int main(){
    long long int n;
    std::cin >> n;
    while (n != 1){
        std::cout << n << " ";
        if (n & 1 ){
            n = (3*n)+1;
        }
        else{
            n /= 2;
        }
    }
    std::cout << 1;
    return 0;
}