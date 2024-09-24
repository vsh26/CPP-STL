/*

SETS

    -> collection of unique elements

    -> ORDERED SETS/ SETS
        
        -> internally implemented using Red-Black Trees

        -> all elements are sorted in ascending order 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    set<string> s;
    s.insert("xyz");        // O(log N)
    s.insert("abc");
    s.insert("xyz");
    s.insert("defgh");

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    // abc defgh xyz

    auto it = s.find("xyz");    // O(log N)
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
    // abc defgh

    return 0;
}