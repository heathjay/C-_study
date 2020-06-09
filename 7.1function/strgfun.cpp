#include<iostream>
int c_in_str(const char * str, char ch);
int main(){
    using namespace std;
    char mmm[15] = "minimum";
    char *wall = "ululate";
    int ms = c_in_str(mmm, 'm');
    int us = c_in_str(wall, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wall << endl;
    return 0;
}

int c_in_str(const char * str, char ch){
    int count = 0;
    while(*str){//如果是\0退出
        if(*str == ch) count++;
        str++;
    }
    return count;
}