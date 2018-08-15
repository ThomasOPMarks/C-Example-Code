#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test{
private:
    string name;
public:
    Test(string name) : name(name){
        
    }
    
    ~Test(){
        cout << name << " was destroyed" << endl;
    }
    
    void print(){
        cout << name << endl;
    }
};
int main(int argc, char **argv) {
    stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));
    
    testStack.top().print();
    testStack.pop();
    testStack.top().print();
    
    cout << "Queue time" << endl;
    queue<Test> testQueue;
    testQueue.push(Test("Tom"));
    testQueue.push(Test("B"));
    testQueue.push(Test("Zander"));
    
    testQueue.front().print();
    testQueue.pop();
    testQueue.front().print();
    testQueue.back().print();
    return 0;
}
