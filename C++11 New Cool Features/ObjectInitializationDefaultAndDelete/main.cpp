#include <iostream>
using namespace std;

class Test {
    int id{3};
    string name{"Mike"};
public:
    //This will just use the default values from above
    Test() = default;
    //don't have to implement copy complicated, or can delete it so it isn't there 
    Test(const Test& other) = default;
    // Same for assignment
    Test& operator=(const Test& other) = default;
    Test(int id) : id(id){}
    void print(){
        cout << id << ": " << name << endl;
    }
};
int main(int argc, char **argv) {
    Test test;
    test.print();
    
    Test test1(77);
    test1.print();
    
    Test test2 = test1;
    test2 = test1;
    return 0;
}
