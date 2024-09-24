/*

Input:
3
Tony Stark
5
91 92 93 94 95
Bruce Banner
2
98 99
Steve Rogers
3
95 95 95

*/

/*

Output:
Bruce Banner
2
98 99 
Steve Rogers
3
99 99 99 
Tony Stark
5
91 92 93 94 95

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    // Nesting in MAPS

    map<pair<string, string>, vector<int>> m;

    int no_of_people;
    cin >> no_of_people;
    cin.ignore();

    for(int i = 0; i < no_of_people; i++){
        string first_name, last_name;
        getline(cin, first_name);
        getline(cin, last_name);

        int no_of_subs;
        
        cin >> no_of_subs;

        for(int j = 0; j < no_of_subs; j++){
            int marks;
            cin >> marks;
            m[{first_name, last_name}].push_back(marks);
        }
        cin.ignore();

    }

    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &marks = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << marks.size() << endl;

        for(int j = 0; j < marks.size(); j++){
            cout << marks[j] << " ";
        }
        cout << endl;
    }

    return 0;
}