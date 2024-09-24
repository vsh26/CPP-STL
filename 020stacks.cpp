/*

STACK

    -> LIFO (Last In First Out)

    -> Operations
        1. push
        2. pop
        3. top

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(10);
    s.push(13);

    if(!s.empty()){
        cout << s.top() << endl;    // 13
    }

    s.pop();
    s.pop();
    if(!s.empty()){
        cout << s.top() << endl;    // 5
    }

    return 0;
}