#include <iostream>
#include <map>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    //When you define a constructor you must define a default constructor
    Person(string name, int age) : name(name), age(age){
        
    }
    
    Person(const Person &other){
        name = other.name;
        age = other.age;
        cout << "Copy running" << endl;
    }
    //Forced deafult constructor
    Person(): name(""), age(-1){
        
    }
    void print() const {
        cout << name << ": " << age << endl;
    }
};
int main(int argc, char **argv) {
    map<int, Person> people;
    
    //When a map inserts an object it makes a deafult object
    //If you insert it uses the copy constructor
    people[0] = Person("Mike", 40);
    people[1] = Person("Vicky", 30);
    people[2] = Person("Raj", 20);
    
    for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
        cout << it->first << ": " << flush;
        it->second.print();
    }
    return 0;
}
