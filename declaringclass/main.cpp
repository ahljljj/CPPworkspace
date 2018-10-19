#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
    // attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string);
    bool is_dead();
    
    
};

class Account{
    
    //attritubes
    string name;
    double balance;
    
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
    
    
}

int main(){
    
    Player Tom;
    Player John;
    
    Account Tom_acc;
    Account John_acc;
    
    Player *enemy{nullptr};
    enemy = new Player;
    delete enemy;
    
    
    
    return 0;
}

