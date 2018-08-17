#include <iostream>
using namespace std;


int main(int argc, char **argv) {
    int values [] = {1, 4, 5};
    
    class C{
    public:
        string text;
        int id;
    };
    
    C c1 = {"Hello" , 7};
    
    struct S{
    public:
        string text;
        int id;
    };
    S s1 = {"Hello" , 7};
    
    
    struct R{
    public:
        string text;
        int id;
    };
    R r1 = {"Hello" , 7};
    return 0;
}
