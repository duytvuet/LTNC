//
//  example.cpp
//  week6
//
//  Created by Duy Trần on 3/11/21.
//


#include <iostream>
#include <algorithm>
using namespace std;
void permute(string str, string out)
{
    if (str.size() == 0)
    {
        cout << out << endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        permute(str.substr(1), out + str[0]);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
int main()
{
    string str;
    cin >> str;
    permute(str, "");
    return 0;
}
