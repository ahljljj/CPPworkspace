#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
public:
    // attributes
    string name{"Player"};
    int health{0};
    int xp{0};
    
    //methods
    void talk(string text_to_say){cout<< name<<" says "<< text_to_say<<endl;};
    bool is_dead();
    
    
};

class Account{
public:
    
    //attritubes
    string name{"Account"};
    double balance{0.0};
    
    
    // methods
<<<<<<< HEAD
    bool deposit(double bal){balance += bal; cout<< "In deposit"<<endl;};
    bool withdraw(double bal){balance -= bal; cout<<"In withdraw"<<endl;};
=======
    bool deposit(double bal){
        balance += bal; 
        cout<< "In deposit"<<endl;
        };
    bool withdraw(double bal){
        balance -= bal; 
        cout<<"In withdraw"<<endl;
        };
>>>>>>> 5a27f0f0319a0376134f7b3f9b414333a35b848f
    
    
    
};

int main(){
    
    Player Tom;
    Player John;
    
    Account Tom_acc;
    Account John_acc;
    Tom.name = "Tom";
    Tom.health = 100;
    Tom.xp = 100;
    Tom.talk("Hello");
    Tom_acc.deposit(50);
    
    cout<<Tom.name<<'\t'<<Tom.health<<endl;
    
    Player *enemy{nullptr};
    enemy = new Player;
    enemy->xp = 100;
    enemy->name = "bad guy";
    cout<<"enemy's name "<< enemy->name<<endl;
    delete enemy;
    
    
    
    return 0;
}

