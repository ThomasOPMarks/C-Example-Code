#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    int value{5};
    
    cout << value << endl;
    
    string text{"Hello"};
    cout << text << endl;
    
    int numbers[]{1,2,3};
    cout << numbers[1] << endl;
    
    int* pInts = new int[3]{1,2,3};
    cout << pInts[1] << endl;
    delete[] pInts;
    
    int value1{};
    cout << value1 << endl;
    
    int* pSomething{nullptr}; //if you don't pass anything it defaults to nullptr
    cout << pSomething << endl;
    
    int numbers1[5]{};
    cout << numbers[1] << endl;
    
    struct {
        //if you were to initialize any of these paramteres here that would not give you the default constructor
        //couldn't if there were private either
        int value;
        string text;
    }s1 {5, "Hi"};
    
    //just right next to it.
    vector<string> strings{"One", "two", "three"};

    return 0;
}
