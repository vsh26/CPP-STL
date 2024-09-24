/*
Lower Bound
    -> Finds the element, if the element is present
        else, returns the pointer to next greater element

Upper Bound
    -> Even if the element is present,
        returns pointer to next greater element

Returns
    -> for arrays   : pointer
    -> for vectors  : iterator

For sorted      -> O(log N)
For unsotred    -> O(N) 

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    // For Arrays and Vectors

    int arr[] = {12, 32, 83, 74, 65, 16};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // 12 16 32 65 74 83

    int *ptr = lower_bound(arr, arr+n, 5);
    cout << (*ptr) << endl;                 // 12

    ptr = lower_bound(arr, arr+n, 13);
    cout << (*ptr) << endl;                 // 16

    ptr = lower_bound(arr, arr+n, 32);
    cout << (*ptr) << endl;                 // 32

    ptr = upper_bound(arr, arr+n, 32);
    cout << (*ptr) << endl;                 // 65

    ptr = upper_bound(arr, arr+n, 83);
    cout << (*ptr) << endl;                 // -1211960576 (Garbage Value)

    if(ptr == arr+n){
        cout << "Not Found" << endl;        // Not Found
    }

    // For Sets and Maps
    set<int> s = {12, 32, 83, 74, 65, 16};

    // auto it = s.lower_bound(s.begin(), s.end(), 32); -> O(N)
    auto it = s.lower_bound(32);    // O(log N)
    cout << (*it) << endl;          // 32
    return 0;
}