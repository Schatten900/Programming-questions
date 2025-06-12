#include <bits/stdc++.h>
typedef long long int ll;

int main(){

    ll n,sum,i,j,cont; std::cin >> n;
    sum = (n*(n+1))/2;

    if ((sum % 2) != 0){
        std::cout << "NO";
        return 0;
    }

    std::cout << "YES\n";

    std::vector<ll>v(n);
    for(ll i=0; i < n ;i++){
        v[i] = i+1;
    }

    std::vector<ll>st1,st2;

    
    if (!(n & 1)){
        // n odd
        i = 0;
        j = n-1;
        cont = 0;
        while (i <= j){
            if (cont & 1){
                st1.push_back(v[i]);
                st1.push_back(v[j]);
            }
            else{
                st2.push_back(v[i]);
                st2.push_back(v[j]);

            }
            i++;
            j--;
            cont++;
        }
        
        }
    else{
        // n even
        i = 0;
        j = n-2;
        cont = 0;
        while (i <= j){
            if (cont & 1){
                st1.push_back(v[i]);
                st1.push_back(v[j]);
            }
            else{
                st2.push_back(v[i]);
                st2.push_back(v[j]);

            }
            i++;
            j--;
            cont++;
        }
        if (st1.size() > st2.size())
            st2.push_back(v[n-1]);
        else
            st1.push_back(v[n-1]);
        
    }

    std::cout << st1.size() << '\n';
    for (auto & elem:st1){
        std::cout << elem << " ";
    }

    std::cout << '\n' << st2.size() << '\n';
    for (auto & elem:st2){
        std::cout << elem << " ";
    }
    std::cout << '\n';


    return 0;
}