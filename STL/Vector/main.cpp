#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv) {
    //Has 5 as its starting capacity in it
    vector<string> strings(5);
    
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    
    //Now the vector has 8 elements in it after the push backs
    strings[3] = "dog";
    
    for(int i = 0; i < strings.size(); i++){
        cout << strings[i] << endl;
    }
    //Get an iterator that points to the start
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it <<endl;
    }
    
    //can also subtract, and move weirder ammounts
    vector<string>::iterator it = strings.end();
    it -= 8;
    
    return 0;
}
