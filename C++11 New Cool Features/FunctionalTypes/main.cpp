#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string& test){
    return test.size() == 3;
}

class Check{
public:
    bool operator()(string& test){
        return test.size() == 5;
    }
} check1;
//functional is templated and parameterized by return_type(paramters)
void run(function<bool(string&)> check){
    string test = string("dog");
    cout << check(test) << endl;
    
}
//These are good for holding anything callable
int main(int argc, char **argv) {
    vector<string> vec{"one", "two", "three"};
    int size = 5;
    //anonomous
    int count = count_if(vec.begin(), vec.end(), [=](string test){return test.size() == size;});
    cout << count << endl;
    //functional pointer
    int count2 = count_if(vec.begin(), vec.end(), check);
    cout << count2 << endl;
    //functor
    int count3 = count_if(vec.begin(), vec.end(), check1);
    cout << count3 << endl;
    string a = "hey";
    
    run([=](string test){return test.size() == size;});
    run(check);
    run(check1);
    
    function<int(int, int)> add = [](int a, int b){return a + b;};
    add(1,1);
    cout << add(7,3) << endl;
    return 0;
}
