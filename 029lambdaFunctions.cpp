#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout << [](int x){return x + 2;}(4) << endl;        // 6
    
    auto sum_xy = [](int x, int y){
        return x + y;
    };

    auto isPositive = [](int x){
        return x > 0;
    };

    auto isNegative = [](int x){
        return x < 0;
    };


    vector<int> v0 = {12, 32, 83, 12, 74, 65, 16};

    // Find if all elements in vector are positive
    cout << all_of(v0.begin(), v0.end(), isPositive) << endl; // 1


    vector<int> v1 = {-12, 32, -83, 12, 74, -65, 16};

    // Find if all elements in vector are positive
    cout << all_of(v1.begin(), v1.end(), isPositive) << endl; // 0
    // Find if all elements in vector are negative
    cout << all_of(v1.begin(), v1.end(), isNegative) << endl; // 0


    // Find if all elements in vector are positive
    cout << any_of(v1.begin(), v1.end(), isPositive) << endl; // 1
    // Find if all elements in vector are negative
    cout << any_of(v1.begin(), v1.end(), isNegative) << endl; // 1


    vector<int> v2 = {-12, -32, -83, -12, -74, -65, -16};
    // Find if all elements in vector are positive
    cout << any_of(v2.begin(), v2.end(), isPositive) << endl; // 0

    // Find if none of the element in vector are positive
    cout << none_of(v2.begin(), v2.end(), isPositive) << endl; // 1

    // Find if none of the element in vector are positive
    cout << none_of(v1.begin(), v1.end(), isPositive) << endl; // 0

    return 0;
}