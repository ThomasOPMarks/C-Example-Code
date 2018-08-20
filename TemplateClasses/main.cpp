#include <iostream>
using namespace std;

//generic class
template <typename T>
class Test{
private:
    T obj;
    
public:
    Test(T obj) {
        this->obj = obj;
    }
    
    void print(){
        cout << obj << endl;
    }
};

//templated function
template <typename T>
void print(T n){
    cout << (1/n);
}

void print2(int n){
    cout << "Not template version: " << n << endl;
}

template <typename T>
void print2(T n){
    cout << "Template version: " << n << endl;
}

//If you did something where the input args cant but deduced must pass the type
template<typename T>
T showAndReturn(){
    T var;
    cout << var << endl;
    return var;
}

int main(int argc, char **argv) {
    Test<string> test1("hello");
    test1.print();
    //calling the templated function (don't have to explicitly say the type)
    // But can if it matters(due to functional overriding 
    print<double>(0);
    
    //this will call the more specific version
    print2(3);
    
    //add the brackets to make it call the template one
    print2<>(3);
    
    //can also go the whole way
    print2<int>(3);
    
    //must say which type (these are all garbage)
    showAndReturn<int>();
    showAndReturn<double>();
    showAndReturn<string>();
    showAndReturn<long>();
    return 0;
}
