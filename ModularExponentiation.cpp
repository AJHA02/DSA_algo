// Modular Exponentiation (Power in Modular Arithmetic)
/* Iterative Function to calculate (x^y)%p in O(log y(base2)) */

#include <bits/stdc++.h>
using namespace std;

int power(long long x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    
    if (x == 0) return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
            
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    int x;
    int y;
    int mod;
    cin>>x>>y>>mod;
    cout << "Power is " << power(x, y, mod);
    return 0;
}
