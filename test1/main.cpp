#include <iostream>

class A {
    
    int i;
public:
    void hello(){std::cout << "hello"<<std::endl;}
    
    
};

int main(){
    std::cout << "Hello testing..."<< std::endl;
    A* p;
    p-> hello();
    
    return 0;
}
