#include <iostream>
#include <set>

using namespace std;

class Happy {
public:
    int happyLevel;
    Happy(int a) : happyLevel(a){
        
    }
    Happy() : happyLevel(0){
        
    }
    bool operator< (const Happy& other) const {
        return happyLevel < other.happyLevel;
    }
    
};
int main(int argc, char **argv) {
    set<int> numbers;
    numbers.insert(2);
    numbers.insert(3);
    numbers.insert(18);
    numbers.insert(5);
    
    for(auto it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << " ";
    }
    
    set<Happy> happySet;
    happySet.insert(Happy(3));
    return 0;
}
