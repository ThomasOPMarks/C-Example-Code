#include <iostream>
using namespace std;
//Another way of passing blocks of code

struct Test{
    virtual bool operator()(string& text) = 0;
    
};

struct MatchTest : public Test{
    bool operator()(string& text){
        return text == "lion";
    }
};

void check(string text){
    
}
int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    MatchTest predicate;
    string value = "lion";
    cout << predicate(value);
    return 0;
}
