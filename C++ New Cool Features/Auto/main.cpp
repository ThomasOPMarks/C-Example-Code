#include <iostream>
#include <typeinfo>
using namespace std;

//This trailing return type is neat
template <typename T, typename S>
auto Test(T value, S v2) -> decltype(value + v2){
    return value + v2;
}

int get(){
    return 99;
}

auto test2() -> decltype(get()){
    return get();
}

int main(int argc, char **argv) {
    auto value = 7;
    auto text = "Hello";
    
    cout << text << endl;
    cout << typeid(text).name() << endl;
    cout << Test(4, 5.5) << endl;
    return 0;
}
