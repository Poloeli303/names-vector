#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    srand(time(NULL));
    vector<string>::iterator iter;
    vector<string>name;
    string input;
    cout << "Enter friends names" << endl;
    do {
        getline(cin, input);
        if (input != "q");
        name.push_back(input);
    } while (input != "q");

    sort(name.begin(), name.end());
    cout << endl;

    for (auto iter = name.begin(); iter != name.end(); iter++)
    {
        cout << *iter << " " << *iter++ << endl;
    }
    
    random_shuffle(name.begin(), name.end());
    cout << endl;

    for (auto iter = name.begin(); iter != name.end(); iter++)
    {
        cout << *iter << " " << *iter++ << endl;
    }
    
}
