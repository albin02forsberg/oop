#include <iostream>

using namespace std;

void test(int i){
    if(i == 2){
        throw runtime_error("2");
    }
    std::cout << "Hello World" << std::endl;
}

int main()
{
    test(1);
    test(3);
    test(2);
    return 0;
}
