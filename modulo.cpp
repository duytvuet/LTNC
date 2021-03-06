//
//  main.cpp
//  modulo
//
//  Created by Duy Trần on 3/6/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int modulo(int a, int b, int n){
    long long x=1, y=a;
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n;
        }
        y = (y*y) % n;
        b /= 2;
    }
    return x % n;
}
int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    int mod = modulo(a, n, m);
    cout << mod;
    return 0;
}
