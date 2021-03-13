//
//  main.cpp
//  hoanvixau
//
//  Created by Duy Trần on 3/11/21.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char s[10];
    cin >> s;
    sort(s, s+3);
    do{
        cout << s[0] << s[1] << s[2] << endl;
        
    } while(next_permutation(s, s+3));
        
            return 0;
}
