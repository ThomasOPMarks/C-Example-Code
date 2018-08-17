#include <iostream>
using namespace std;

class Parent{
    
};

class Brother : public Parent{
    
};

class Sister : public Parent{
    
};
//static cast means no run time checking
int main(int argc, char **argv) {
    
    Parent parent;
    Brother brother;
    
    float value = 3.14;
    
    cout << (int) value << endl;
    cout << int(value) << endl;
    cout << static_cast<int>(value) << endl;
    
    Parent* pp = &brother;
    
    //can actual static cast the other way...
    Brother* pb = static_cast<Brother *>(&parent);
    
    //could be useful if you know something before hand
    Parent* ppp = &brother;
    Brother* pbp = static_cast<Brother*>(ppp);
    
    Parent&& p = Parent();
    
    //could static cast to switch r values or l values
    Parent&& p1 = static_cast<Parent&&>(parent);
    return 0;
}
