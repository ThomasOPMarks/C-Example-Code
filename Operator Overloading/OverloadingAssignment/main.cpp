#include <iostream>
using namespace std;

class Test{
private:
    int id;
    string name;
    
public:
    Test(): id(0), name("") {}
    Test(int id, string name): id(id), name(name){}
    void print(){
        cout << id << ": " <<name << endl;
    }
    const Test& operator=(const Test& other){
        cout << "Assignment running \n";
        id = other.id;
        name = other.name;
        return *this;
    }
    
    Test(const Test& other){
        cout << "Copy running \n";
        id = other.id;
        name = other.name;
    }
};

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    cout << to_string(12);
    
    //This calls the copy constructor
    Test test1 = Test(3, "Tom");
    return 0;
}
