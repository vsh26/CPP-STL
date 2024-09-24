/*

UNORDERED MAPS


    -> internally implemented using Hash Tables

    -> elements are not sorted

    -> better time complexity than maps

    -> valid keys datatype

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> m;
    
    // Insertion -> O (1)
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";
    m.insert({2, "asd"});

    unordered_map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (it -> first) << " " << (it -> second) << endl;
    }

    // 2 asd
    // 3 efg
    // 5 cdc
    // 1 abc

    for(auto pr : m){
        cout << (pr.first) << " " << (pr.second) << endl; // Accessing: O(1)
    }

    // 2 asd
    // 3 efg
    // 5 cdc
    // 1 abc

    //Size
    cout << m.size() << endl;

    // find() returns iterator, it value not found it returns m.end()
    auto itr = m.find(3);    // O(1)
    if(itr == m.end()){
        cout << "No value found " << endl;
    }else{
        cout << (itr -> first) << " " << (itr -> second) << endl;
    }

    // erase()
    if(itr != m.end()){     // safety check
        m.erase(3);         // O(1)
    }

    itr = m.find(3);
    if(itr == m.end()){
        cout << "No value found " << endl;
    }else{
        cout << (itr -> first) << " " << (itr -> second) << endl;
    }

    // clear()
    m.clear();
    for(auto pr : m){
        cout << (pr.first) << " " << (pr.second) << endl;
    }

    // unordered_map<pair<int, int>, string> m-> Not possible
    // because hash is not intenally implemented for pair
    // map<pair<int, int>, string> m -> Possible

    return 0;
}