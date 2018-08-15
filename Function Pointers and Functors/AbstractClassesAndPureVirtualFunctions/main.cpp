#include <iostream>
#include <vector>
using namespace std;


class Animal {
public:
    //Make it an abstract method by setting equal to 0,
    //  and the class is abstract
    virtual void speak() = 0;
};

class Dog: public Animal{
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Cat: public Animal{
public:
    virtual void speak(){
        cout << "Meow!" << endl;
    }
};

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    Dog god;
    god.speak();
    //Have to do this because it uses default, then assign (but can't make animals)
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    
    for(auto it = animals.begin(); it != animals.end(); it++){
        (*it)->speak();
    }
    return 0;
}
