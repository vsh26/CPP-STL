/*

MAPS

    -> each element is (key : value) pair

    -> keys are unique (if we enter a new value with same existing key,
        older value will be replaced by newer one)

    -> Ordered Maps/ Maps

        -> internally implemented using Red-Black Trees

        -> elements are sorted in ascending order (ascending order of keys)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    
    // Insertion -> O (log N)
    // It also depends upon the type of key, if we use strings as key str.size()*log(N)
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";
    m.insert({2, "asd"});

    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (it -> first) << " " << (it -> second) << endl;
    }

    // 1 abc
    // 2 asd
    // 3 efg
    // 5 cdc

    for(auto pr : m){
        cout << (pr.first) << " " << (pr.second) << endl; // Accessing: O(log N)
    }

    // 1 abc
    // 2 asd
    // 3 efg
    // 5 cdc

    //Size
    cout << m.size() << endl;

    // find() returns iterator, it value not found it returns m.end()
    auto itr = m.find(3);    // O(log N)
    if(itr == m.end()){
        cout << "No value found " << endl;
    }else{
        cout << (itr -> first) << " " << (itr -> second) << endl;
    }

    // erase()
    if(itr != m.end()){     // safety check
        m.erase(3);         // O(log N)
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


    return 0;
}