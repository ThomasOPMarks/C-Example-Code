#include <iostream>
#include <memory>
using namespace std;
class Test{
public:
    Test() {
        cout << "created" << endl;
    }
    void greet(){
        cout << "Hello" << endl;
    }
    ~Test() {
        cout << "destroyed" << endl;
    }
};

class Temp{
private:
    unique_ptr<Test[]> pTest;
public:
    Temp() : pTest(new Test[2]){
    }
    
};
int main(int argc, char **argv) {
    {
        unique_ptr<Test[]> pTest(new Test[5]);
        
        
        pTest[2].greet();
    //when the pointer goes out of scope here they clean up the memory allocated
    }
    cout << "Finished part 1" << endl;
    
    Temp temp;
    
    cout << "Finished for real" << endl;
    
    
    return 0;
}

