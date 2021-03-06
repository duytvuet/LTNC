//
//  main.cpp
//  prime
//
//  Created by Duy Trần on 3/6/21.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 2; i <= n; ++i) {
        arr[i] = true;
    }
    for (int i = 2 ; i <= n; ++i) {
        if (arr[i] == true){
            for (int j = 2*i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if(arr[i]==true) cout << i << " ";
    }
    return 0;
}
