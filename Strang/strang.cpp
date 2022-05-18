#include "strang.h"
#include <trace.h>

Strang::~Strang(){
    delete [] m_cstr;
}

Strang::Strang(){
    m_cstr = new char[0];
}

Strang::Strang(const char *cstr){

}

Strang::Strang(const Strang &otherString){

}

Strang::Strang(Strang &&moveStrang){

}

int Strang::size() const{

}

const char *Strang::c_str() const{

}
