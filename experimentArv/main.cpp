#include <iostream>

using namespace std;

class Bas {
public:
    void iv() { std::cout << "Bas iv() anropades. \n"; }
    virtual void v() { std::cout << "Bas v() anropades. \n"; }
    ~Bas() { std::cout << "Bas desktruktor \n"; }
};

class Sub : public Bas {
public:
    void iv() { std::cout << "Sub iv() anropades. \n"; }
    virtual void v() { std::cout << "Sub v() anropades. \n"; }
    ~Sub() { std::cout << "Sub desktruktor \n"; }
};

void experiment(){
    std::cout << "Test 1: arnop via sub\n";
    Sub sub;
    sub.iv();
    sub.v();

    std::cout << "--------------------------\n";

    std::cout << "Test 2: anrop via bas1\n";
    Bas bas1 = sub;
    bas1.iv();
    bas1.v();

    std::cout << "--------------------------\n";

    std::cout << "Test 3: anrop via bas pekare\n";
    Bas *pB = &sub;
    pB->iv();
    pB->v();
    (*pB).iv();
    (*pB).v();


    std::cout << "--------------------------\n";

    std::cout << "Test 4: anrop via bas referens\n";
    Bas &bas2 = sub;
    bas2.iv();
    bas2.v();

    std::cout << "--------------------------\n";

    std::cout << "Test avslutat....\n";

}


int main()
{
    experiment();
    return 0;
}
