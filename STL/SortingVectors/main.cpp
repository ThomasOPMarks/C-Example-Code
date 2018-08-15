#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Test{
    int id;
    string name;
    
public:
    Test(int id, string name) : id(id), name(name){
        
    }
    void print(){
        cout << id << ": " << name << endl;
    }
    bool operator< (const Test& other) const{
        return id < other.id;
    }
    friend bool comp(const Test& a, const Test& b);
};
bool comp(const Test& a, const Test& b){
    return a.name < b.name;
}
int main(int argc, char **argv) {
    vector<Test> test;
    test.push_back(Test(5, "Mike"));
    test.push_back(Test(1, "Sue"));
    test.push_back(Test(2, "Raj"));
    test.push_back(Test(10, "Vicky"));
    
    //sorting 
    std::sort(test.begin(), test.end());
    
    //use a function pointer
    sort(test.begin(), test.end(), comp);
    
    for(auto it = test.begin(); it != test.end(); it++){
        (*it).print();
    }
    
    return 0;
}
