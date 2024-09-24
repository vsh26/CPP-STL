#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {12, 32, 83, 12, 74, 65, 16};

    // min_element, max_element
    auto it = min_element(v.begin(), v.end());
    cout << (*it) << endl;      // 12

    cout << (*max_element(v.begin(), v.end())) << endl; // 83

    cout << (*max_element(v.begin(), v.begin()+2)) << endl; // 32


    // sum
    int sum = accumulate(v.begin(), v.end(), 0); // 0 -> initial value of sum
    cout << sum << endl;    // 294


    //count -> returns occurance of that element
    int ct = count(v.begin()+2, v.end(), 32);
    cout << ct << endl;     // 0

    
    // find -> returns iterator to first occurance of that element,
    //         if element not found, returns iterator to next to last element
    auto itr = find(v.begin(), v.end(), 12);
    cout << (*itr) << endl; // 12

    itr = find(v.begin()+4, v.end(), 12);
    if(itr != v.end()){
        cout << "Found" << endl;
    } else{
        cout << "Not Found" << endl;
    }

    vector<int> vect = {12, 32, 83, 12, 74, 65, 16};
    reverse(vect.begin(), vect.end());
    for(auto it: vect){
        cout << it << " ";
    }
    cout << endl;
    // 16 65 74 12 83 32 12

    string str = "abjhbfjhvbnx";
    reverse(str.begin()+4, str.end());
    cout << str << endl;
    // abjhxnbvhjfb
    
    return 0;
}