/*

MULTI SETS

    -> non-unique elements are allowed

    -> internally implemented using Red-Black Trees

    -> all elements are sorted in ascending order 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    multiset<string> s;
    s.insert("xyz");        // O(log N)
    s.insert("abc");
    s.insert("xyz");
    s.insert("defgh");
    s.insert("abc");
    s.insert("abc");

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    // abc abc abc defgh xyz xyz
    

    // find() returns iterator of first occurance of element
    auto it = s.find("xyz");    // O(log N)
    if(it == s.end()){
        cout << "Not Found" << endl;
    } else{
        cout << "Found" << endl;
    }
    // Found

    if(it != s.end()){
        s.erase(it);
    }
    // when iterator is passed only first occurance is deleted

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    // abc abc abc defgh xyz

    auto itr = s.find("abc");
    if(itr != s.end()){
        s.erase("abc");
    }
    // when value is passed all occurance are deleted

    for(auto itr: s){
        cout << itr << " ";
    }
    cout << endl;
    // defgh xyz

    return 0;
}