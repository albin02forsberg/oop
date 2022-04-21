#include <iostream>
#include <QDebug>
#include "trace.h"

using namespace std;

int Trace::s_aktuelltDjup = 0;
Trace::Outputtype Trace::s_utskriftsMetod = Trace::output_qdebug;

int fakultet(int n){
    tracemeExtra(to_string(n));

    if(n<=1){
        tracemeMsg("Basvillkoret retunerar 1");
        return 1;
    }

    int res = n*fakultet(n-1);
    tracemeMsg(string("Retunerar ") + to_string(res));
    return res;
}

void funcB(){
    traceme;
    tracemeMsg("Hello, world");
}

void funcA(){
    traceme;
    funcB();
    cout << "Fakulteten av 4 är " << fakultet(4) << endl;
}

int main(){
    Trace trace("main") ;
    funcA();
    return 0;
}
