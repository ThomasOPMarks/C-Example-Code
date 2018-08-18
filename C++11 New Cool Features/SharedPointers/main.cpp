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
    ~Test(){
        cout << "Deleted" << endl;
    }
    
};
int main(int argc, char **argv) {
    //These can't be used for arrays
    shared_ptr<Test> pTest1(new Test());
    
    //can init to null
    shared_ptr<Test> pTest3(nullptr);
    {
        //better to use this though (efficient)
        shared_ptr<Test> pTest2 = make_shared<Test>();
        //Now both have to go out of scope before it is murdered
        pTest3 = pTest2;
    }
    cout << "Finished" << endl;
    //Note, even though the pTest2 goes out first it won't be deleted until 3 goes out of scope now
    
    //Maybe auto could be an easier way
    auto fourth = pTest3;
    return 0;
}
