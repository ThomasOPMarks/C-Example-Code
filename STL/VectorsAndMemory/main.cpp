#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    vector<double> numbers(20);
    
    cout << "Size: " << numbers.size() << endl;
    
    int capacity = numbers.capacity();
    //This seems to double every time it needs to increase
    for(int i = 0; i < 10000; i++){
        if (capacity != numbers.capacity()){
            cout << "Size: " << numbers.size() << " Capacity: " << numbers.capacity() << endl;
            capacity = numbers.capacity();
        }
        numbers.push_back(i);
    }
    //only changes size, not capacity
    numbers.clear();
    //resize also doesn't change the capacity
    numbers.resize(3);
    
    //A 3 by 4 grid of vectors
    std::vector<std::vector<int> > grid(3, vector<int>(4, 7));
    
    for(int row = 0; row < grid.size(); row++){
        for(int col = 0; col < grid[row].size(); col++){
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
