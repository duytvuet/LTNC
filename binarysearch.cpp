//
//  main.cpp
//  binarysearch
//
//  Created by Duy Trần on 3/6/21.
//

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    /*
    your code goes here
    you can make change to preload code
    */
    int a[100000] = {};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[100000] = {};
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    int dem = 0, mid, left = 1, right = n;
    for(int i = 0; i < m; i++){
        while(dem == 0 && left <= right)
    {
        mid = (left + right)/2;
        if(b[i] > a[mid]) left = mid + 1;
        else if(b[i] < a[mid]) right = mid - 1;
        else dem = 1;
    }
    if(dem == 1) cout << "YES" << " ";
    else cout << "NO" << " ";
    }

    return 0;
}
