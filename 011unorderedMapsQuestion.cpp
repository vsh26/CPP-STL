/*

Given N strings, Q queries.
In each query you are given a string.
Print frequency of that string.

N <= 10^6
|S| <= 100
Q <= 10^6

8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
def

Output:
3
1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    unordered_map<string, int> m;

    for(int i = 0; i < n; i++){
        string str;
        getline(cin, str);
        m[str]++;
    }

    int q;
    cin >> q;
    cin.ignore();

    while(q--){
        string s;
        getline(cin, s);
        cout << m[s] << endl;
    }

    return 0;
}