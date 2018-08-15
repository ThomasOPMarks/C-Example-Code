#include <iostream>
#include <map>

using namespace std;
int main(int argc, char **argv) {
    map<string, int> ages;
    
    //Insert 
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;
    
    //if you ever use the bracket it adds it into the map
    
    //using a pair to add into the map
    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);
    //just using constructor
    ages.insert(pair<string, int>("Susan", 21));
    //general constructor
    ages.insert(std::make_pair("Frank", 27));
    //Test if something is in the map, iterator to end if none exists
    if(ages.find("Vivky") != ages.end()){
        cout << "found viky";
    }
    else{
        cout << "Didn't find";
    }
    //Iterators have first and second (because they are a pair type)
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }
    
    //Explicitly using pair
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
        
    }
    
    return 0;
}
