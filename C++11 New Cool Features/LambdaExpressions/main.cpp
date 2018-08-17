#include <iostream>
using namespace std;

void test(void (*pFunc)()){
    pFunc();
}

void test2(void (*pFunc)(string)){
    pFunc("Bob");
}

void runDivide(double (*pFunc)(double, double)){
    cout << pFunc(10.3, 2.3) << endl;
}

class Test {
private:
    int one{1};
    int two{2};
    
public:
    void run(){
        int three = 3;
        int four  = 4;
        //"this" keyword always captures by reference
        auto lambda = [this, three, four](){
            cout << endl << one << " " << two << " " << three << " " << four << endl;
            
        };
        //can capture with & but not with = as default
        auto lambda2 = [&, this](){
            cout << endl << one << " " << two << " " << three << " " << four << endl;
            
        };
        lambda();
        
    }
};

int main(int argc, char **argv) {
    //Good for simple functions you want to pass
    //simplest version
    [](){};
    
    //actual one that does something
    auto func = [](){cout << "Hello\n";};
    func();
    
    test(func);
    
    test([](){cout << "Look again" << endl;});
    
    //arguements
    auto pGreet = [](string name){cout << "Hey hey hey "  << name << endl;};
    
    test2(pGreet);
    
    //trailing type to specify it
    auto pDivide = [](double a, double b) -> double{
        if(b == 0.0){
            return 0;
        }
        return a / b;
    };
    
    cout << pDivide(10.0, 5.0) << endl;
    
    runDivide(pDivide);
    
    //Capture expressions
    
    int one = 1;
    int two = 2;
    int three = 3;
    //Capture local variables by putting them in the brackets (by value)
    auto lambdaFunction = [one, two](){cout << one << ", " << two << endl;};
    
    //Capture all local varaibles by value with =
    auto lamb2 = [=](){cout << one <<", " << two << endl;};
    
    //Some by reference, some by value (equal is all by value, speficy reference)
    auto lamb3 = [=, &three] () {three = 4;};
    lamb3();
    cout << three << endl;
    
    //all by reference, one by value (rule, followed by exceptions
    auto lamb4 = [&, one] (){three = 5; two = one + 100;};
    lamb4();
    cout << two << " " << three;
    
    //Now with test class
    Test testThis;
    testThis.run();
    
    //mutable lambda, allows you to change the variables but don't affect original scope
    auto lamb5 = [one]() mutable {one = 234;};
    lamb5();
    cout << one << endl;
    return 0;
}



