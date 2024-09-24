/*

UNORDERED SETS

    -> internally implemented using Hash Tables

    -> elements are not sorted

    -> cannot be used with complex containers

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<string> s;
    s.insert("xyz");        // O(1)
    s.insert("abc");
    s.insert("xyz"); 
    s.insert("defgh");

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    // defgh abc xyz

    auto it = s.find("xyz");    // O(1)
    if(it == s.end()){
        cout << "Not Found" << endl;
    } else{
        cout << "Found" << endl;
    }
    // Found

    if(it != s.end()){
        s.erase("xyz");
    }

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    // defgh abc

    return 0;
}