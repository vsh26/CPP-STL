/*

ITERATORS:
    -> pointer like structures
    -> to access values of containers, which cannot be accessed by index

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5, 6, 7};
    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;


    vector<pair<int, int>> v_p = {{1,2}, {1,3}, {1,4}, {1,5}};
    vector<pair<int, int>> :: iterator itr;

    for(itr = v_p.begin(); itr != v_p.end(); itr++){
        cout << (*itr).first << ", " << (*itr).second << endl;
    }

    for(itr = v_p.begin(); itr != v_p.end(); itr++){
        cout << (itr -> first) << ", " << (itr -> second) << endl;
    }

    return 0;
}
