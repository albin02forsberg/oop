#include "minafunktioner.h"

#include <iostream>

bool boolFranAnvandare(const std::string &text){
    std::cout << text << std::endl;
    std::string ans;

    std::cin >> ans;
    if(ans == "Ja" || ans == "ja" || ans == "j"){
        return true;
    } else {
        return false;
    }
}
