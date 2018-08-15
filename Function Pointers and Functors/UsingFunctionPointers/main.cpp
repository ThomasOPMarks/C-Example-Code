#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string test){
    return test.size() == 3;
}

int countStrings(vector<string> &tests, bool (*m)(string test)){
    int total = 0;
    for(auto it = tests.begin(); it != tests.end(); it++){
        if(m(*it)){
            total += 1;
        }
    }
    return total;
}

int main(int argc, char **argv) {
    vector<string> tests;
    tests.push_back("one");
    tests.push_back("two");
    tests.push_back("three");
    tests.push_back("four");
    tests.push_back("two");
    tests.push_back("hugs");
    tests.push_back("death");
    
    //counts the number of times the if is true
    cout << count_if(tests.begin(), tests.end(), match) << endl;
    
    return 0;
}
