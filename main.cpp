//
//  main.cpp
//  chess
//
//  Created by Duy Trần on 3/6/21.
//

#include <iostream>
#include <cmath>

using namespace std;

void nhap_mang(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
}
bool test(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i]== a[j] || b[i] == b[j] ||abs(a[i]-a[j]) == abs(b[i]-b[j])) {
                return true;
            }
        }
    } return false;
}
int main()
{
    int n;
    cin >> n;
    int *arr1 = new int [n];
    int *arr2 = new int [n];
    nhap_mang(arr1, arr2, n);
    if(test(arr1, arr2, n) == true) cout << "yes";
    else cout << "no";
    return 0;
}

