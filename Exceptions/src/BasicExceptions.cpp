#include <iostream>



void mightGoWrong(){
    bool error = false;
    bool error2 = true;
    bool error3 = true;
    
    throw(error3);
    
    if(error){
        throw "Something went wrong";
    }
    if(error2){
        //This object doesn't go out of scope, but stays because of exception rules
        throw std::string("Something else went wrong");
    }
}
void usesMightGoWrong(){
    mightGoWrong();
}
int main(){
    try{
        usesMightGoWrong();
    }
    catch(int e){
        std::cout << "Error code: " << e << std::endl;
    }
    catch(char const* e){
        std::cout << "Error Message: " << e <<std::endl;
    }
    //You can catch by reference to speed this up, as objects made by exceptions DON'T go out of scope
    catch(std::string& e){
        std::cout << "string error message: " << e << std::endl;
    }
    catch(bool e){
        std::cout << "Threw a bool error: " << e << std::endl;
    }
    std::cout << "Still running" << std::endl;
    return 0;
}
