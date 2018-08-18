#include <iostream>
//need functional header
#include <functional>
using namespace std;
using namespace placeholders;

int add(int a, int b, int c){
    cout << a << ", " << b << ", " << c << endl;
    return a + b + c;
}

class Test{
public:
    int add(int a, int b, int c){
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
    
    static int add2(int a, int b, int c){
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
};

int run(function<int(int, int)> func){
    return func(7, 3);
}

int main(int argc, char **argv) {
    cout << add(1,2,3) << endl;
    //function pointer, arguements
    auto cal = bind(add, 3, 4, 5);
    
    //will always have those arguements 
    cout << cal() << endl;
    
    //dont have to suplier arguements if you use the placeholders
    auto calGen = bind(add, _1, _2, _3);
    cout << calGen(10, 20, 30) << endl;
    
    //placeholders numbers are passed to the function in the order they count up
    auto calGen2 = bind(add, _2, _3, _1);
    cout << calGen2(10, 20, 30) << endl;
    
    //Can mix and match the placeholders and other infromation
    auto calGen3 = bind(add, _2, 100, _1);
    cout << calGen3(10, 20) << endl;
    
    //Now calGen3 can fix the template in(int, int) because it takes two ints and returns an int now
    cout << run(calGen3) << endl;
    
    //Can bind to methods, but need an object (if not static)
    Test test;
    auto calGen4 = bind(&Test::add, test, 2, 100 ,1);
    
    cout << calGen4() << endl;
    //binding to static
    auto calGen5 = bind(&Test::add2, 1,2,4);
    
    cout << calGen5() << endl;
    return 0;
}

