//
//  main.cpp
//  fs
//
//  Created by Duy Trần o(n 3/6/21.
//

#include<iostream>
using namespace std;
int n, a[10];                                                                                                              
bool check = false;
void printArray(){
    for (int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
void gen(){
    int i = n;
    while (a[i]==1 && i > 0){
        i--;
    }
    if (i == 0) check = true;
    else
    {
        a[i] = 1;
        for (int j = i + 1; j <= n; j++){
            a[j] = 0;
        }
    }
}
int main(){
                                                                                                                           
    cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
    while (check == false){
        printArray();       
        gen();
    }
    return 0;
}
