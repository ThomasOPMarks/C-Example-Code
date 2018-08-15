#include <iostream>
#include "ring.h"
using namespace std;


int main(int argc, char **argv) {

    ring<string> textring(3);
    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    textring.add("five");
    
    for(int i = 0; i < textring.size(); i++){
        cout << textring.get(i) << endl;
    }

    
    for(string value : textring){
        cout << value << endl;
    }
    
    for(ring<string>::iterator it = textring.begin(); it != textring.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
