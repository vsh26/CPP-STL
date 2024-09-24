/*

Given N strings, print unique strings
in lexographical order

N <= 10^5
|S| <= 100000

Input:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

Output:
abc
def
ghj
jkl

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    set<string> s;

    while(n--){
        string str;
        getline(cin, str);
        s.insert(str);
    }

    for(auto it: s){
        cout << it << " ";
    }

    return 0;
}