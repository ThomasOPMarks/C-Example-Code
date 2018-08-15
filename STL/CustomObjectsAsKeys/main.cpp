#include <iostream>
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
    //const methods are the only ones that can be used on keys
    void print() const {
        cout << name << ": " << age << flush;
    }
    
    bool operator<(const Person& other) const{
        return name < other.name;
    }
};
int main(int argc, char **argv) {
    map<Person, int> people;
    
    //When a map inserts an object it makes a deafult object
    //If you insert it uses the copy constructor
    people[Person("Mike", 40)] = 30;
    //Won't update the key (if the keys are evaluated to be the same), but will update the value
    people[Person("Mike", 444)] = 60;
    people[Person("sue", 40)] = 20;
    people[Person("Zed", 40)] = 40;
    
    for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
        cout << it->second << ": " << flush;
        it->first.print();
    }
    return 0;
}
