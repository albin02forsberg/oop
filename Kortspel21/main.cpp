#include <iostream>
#include "bankir.h"
#include "spelare.h"

using namespace std;

int main() {
    cout << "Kortspelet 21" << endl;

    Bankir bank;
    Spelare spelare;

    bank.registreraSpelare(&spelare);

    while (bank.harRegistreradSpelare()) {
        bank.spelaEnOmgång() ;
    }

    return 0;
}
