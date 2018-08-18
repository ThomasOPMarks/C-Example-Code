#include <iostream>
using namespace std;

class Parent{
    virtual void speak(){
        cout << "parent\n";
    }
};

class Brother : public Parent{
    
};

class Sister : public Parent{
    
};
//static cast means no run time checking
int main(int argc, char **argv) {
    
    Parent parent;
    Brother brother;
    Sister sister;
    
    float value = 3.14;
    
    cout << (int) value << endl;
    cout << int(value) << endl;
    cout << static_cast<int>(value) << endl;
    
    Parent* pp = &brother;
    
    //can actual static cast the other way...
    Brother* pb = static_cast<Brother *>(&parent);
    
    //could be useful if you know something before hand
    Parent* ppp = &parent;
    //does runtime type checking
    Brother* pbp = dynamic_cast<Brother*>(ppp);
    
    if(pbp == nullptr){
        cout << "Bad\n";
    }
    else {cout << "good";}
    
    //Reinterpret cast, the crazy one (literally a biniary cast)
    //  Literally less checking than static cast
    Parent *ppb = &brother;
    
    Sister* pbps = reinterpret_cast<Sister*> (ppb);
    if (pbps == nullptr){
        cout << "Not good sister" << endl;
    }
    else{
        cout << "Good cast" << endl;
    }
    
    return 0;
}
