#include <iostream>
#include <list>
using namespace std;
int main(int argc, char **argv) {
    //lists are doubly linked lists
    
    list<int> numbers;
    
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    list<int>::iterator it = numbers.begin();
    it++;
    //insert before this element
    numbers.insert((it), 100);
    //erases the element being pointed to by the iterator;
    //set it equal to itself because it invalidates the iterator
    it = numbers.erase(it);
    
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }
    
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        if(*it == 2){
            numbers.insert(it, 1234);
        }
        if(*it == 1){
            //if you just did this it would advance the iterator to the element past the deleted one
            //  then the for loop would improperly incriment it again
            it = numbers.erase(it);
            it--;
        }
    }
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}
