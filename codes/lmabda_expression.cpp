// Lambda Expression
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v) { 
    // lambda expression to print vector 
    for_each(v.begin(), v.end(), [](int i) 
    { 
        cout << i << " "; 
    });
    cout << endl;
}

int main() { 
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
    printVector(v);
    // Below snippet find first number greater than 4.
    // find_if searches for an element for which 
    //function(third argument) returns true.
    vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i) 
    { 
        return i > 4; 
    }); 
    cout << "\nFirst number greater than 4 is: " << *p << endl; 
    // function to sort vector, lambda expression is for sorting in 
    //non-decreasing order. Compiler can make out return type as 
    //bool, but shown here just for explanation.
    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool
    { 
        return a > b; 
    }); 
    printVector(v); 

    return 0;
}