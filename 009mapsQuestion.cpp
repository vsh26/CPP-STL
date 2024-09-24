/*

Given N strings, print unique strings
in lexographical order with their frequency

N <= 10^5
|Str| <= 100 (smaller string)

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
abc 3
def 1
ghj 3
jkl 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        m[str] = m[str] + 1;
    }

    for(auto pr: m){
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}