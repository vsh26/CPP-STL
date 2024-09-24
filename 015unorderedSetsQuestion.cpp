/*

Given N strings, and Q queries
In each query you are given a string,
print YES if string is present else print NO.

N <= 10^5
|S| <= 100
Q <= 10^6

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
3
abc
ghj
abcdef

Output:
YES YES NO

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    unordered_set<string> s;

    while(n--){
        string str;
        getline(cin, str);

        s.insert(str);
    }

    int q;
    cin >> q;
    cin.ignore();

    while(q--){
        string str;
        getline(cin, str);
        if(s.find(str) != s.end()){
            cout << "YES" << " ";
        }else{
            cout << "NO" << " ";
        }
    }
    cout << endl;

    return 0;
}