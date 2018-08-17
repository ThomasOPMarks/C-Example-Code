#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;
class Test {
public:
    //These lists are helpful
    Test(initializer_list<string> tests){
        for (auto value : tests){
            cout << value << endl;
        }
        cout << tests.size() << endl;
    }
    //These are cool because they're just lists
    void print(initializer_list<string> texts){
        for (auto value : texts){
            cout << value << endl;
        }
    }
};

int main(int argc, char **argv) {
    Test test{"apple", "orange", "banana"};
    test.print({"one", "two", "three"});
    return 0;
}
