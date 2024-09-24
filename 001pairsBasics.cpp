#include<bits/stdc++.h>
using namespace std;

int main(){

    // Creating and Accessing Pairs

    pair<int, string> p0(1, "qwerty");
    cout << "Pair 0: " << p0.first << ", " << p0.second << endl;    // Pair 0: 1, qwerty

    pair<int, string> p1;
    p1 = make_pair(10, "abcd");
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;    // Pair 1: 10, abcd


    pair<int, string> p2;
    p2 = {5, "xyz"};
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;    // Pair 2: 5, xyz


    // Creating a copy of pair (Pass By VALUE)
    pair<int, string> p3 = p1;
    cout << "Pair 3: " << p3.first << ", " << p3.second << endl;    // Pair 3: 10, abcd

    p3.first = 20;
    cout << "Pair 3: " << p3.first << ", " << p3.second << endl;    // Pair 3: 20, abcd
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;    // Pair 1: 10, abcd

    // Creating a copy of pair (Pass By REFERENCE)
    pair<int, string> &p4 = p2;
    cout << "Pair 4: " << p4.first << ", " << p4.second << endl;    // Pair 4: 5, xyz

    p4.first = 100;
    cout << "Pair 4: " << p4.first << ", " << p4.second << endl;    // Pair 4: 100, xyz
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;    // Pair 2: 100, xyz


    /*

        a[] = {1, 2, 3}
        b[] = {2, 3, 4}
        Exa: Elements of both araays at similar index are related
    
    */

    // Array of Pairs

    pair<int, int> p_array[3];
    p_array[0] = make_pair(1,2);
    p_array[1] = make_pair(2,3);
    p_array[2] = make_pair(3,4);

    for(int i = 0; i < 3; i++){
        cout << p_array[i].first << ", " << p_array[i].second << endl; 
    }

   return 0;
}