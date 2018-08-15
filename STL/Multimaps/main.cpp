#include <iostream>
#include <map>
using namespace std;
int main(int argc, char **argv) {
    multimap<int, string> lookup;
    
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Raj"));
    lookup.insert(make_pair(30, "Vicky"));
    lookup.insert(make_pair(20, "Bob"));
    
    for(multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
        cout << it->first <<": " << it->second << endl;
    }
    //find returns the first instance of the key passed to it, so not useful
    
    //Iterate over the range passed here
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
    for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
        cout << it->first << ": " << it->second << endl;
    }
    
    cout << std::to_string(121);
    its = lookup.equal_range(30);
    for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
