#include<cstring>
#include "stringbad.h"
int StringBad::num_strings=0;
using std::cout;
StringBad::StringBad(const char * s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << " : \" " << str << "\" object created \n";
}

StringBad::StringBad(){
    len = 4;
    str = new char[1];
    std::strcpy(str,'\0');
    num_strings++;
    cout << num_strings << ": \" " << str << "\" default object created \n";
}

StringBad::~StringBad(){
    cout << "\"" << str <<"\" object deleted";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st){
    os << st.str;
    return os;
}
StringBad::StringBad(const StringBad & st){
    num_strings++;
    len = st.len;
    str = new char[len + 1];
        std::strcpy(str,st.str);
    cout << num_strings <<":\"" << str << "\" object created.\n";
}

StringBad & StringBad::operator=(const StringBad & st){
    if(this == &st){
        return *this;
    }
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str,st.str);
    return *this;
}