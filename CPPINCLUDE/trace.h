#ifndef TRACE_H
#define TRACE_H
#include <string>
#include <iostream>
#include <QDebug>

#define traceme Trace trace(__func__);
#define tracemeExtra(extra) Trace trace(__func__, extra);
#define tracemeMsg(meddelande) trace.message(meddelande);

#define USING_COUT_TRACE \
    int Trace::s_aktuelltDjup = 0;\
    Trace::Outputtype Trace::s_utskriftsMetod = Trace::output_cout;
#define USING_QDEBUG_TRACE \
    int Trace::s_aktuelltDjup = 0;\
    Trace::Outputtype Trace::s_utskriftsMetod = Trace::output_qdebug;

class Trace
{
public:
    enum Outputtype { output_cout, output_qdebug};

    static int s_aktuelltDjup;
    static Outputtype s_utskriftsMetod;

    Trace(const std::string &funktionsnamn) {
        m_fuktionsnamn = funktionsnamn;
        printline(indentering() + ">>" + m_fuktionsnamn + ">>");
        s_aktuelltDjup++;
    }

    Trace(const std::string &funktionsnamn, const std::string &extra) {
        m_fuktionsnamn = funktionsnamn;
        printline(indentering() + ">>" + m_fuktionsnamn + " " + extra + ">>");
        s_aktuelltDjup++;
    }

    ~Trace(){
        s_aktuelltDjup--;
        printline(indentering() + "<<" + m_fuktionsnamn + "<<");
    }

    void message(const std::string &str) {
        printline(indentering() + "trace: " + str);
    }

private:

    std::string m_fuktionsnamn;

    void printline(const std::string &str){
        if(s_utskriftsMetod == output_qdebug){
            qDebug() << str.c_str();
        } else {
            std::cout << str;
        }
    }

    std::string indentering(){
        std::string str = "";
        for(int i = 1; i <= s_aktuelltDjup * 3; i++){
            str += " ";
        }
        return str;
    }
};

#endif // TRACE_H
