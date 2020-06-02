#include<iostream>
#include<string>
#include<cstring>
int main(){
    using namespace std;
    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "path";

    str1 = str2;
    //copy 
    strcpy(char1,char2);
    str1 += "pash";
    strcat(char1," jsijis");
    //size
    //strlen
    int len1 = str1.size();
    int len2 = strlen(char2);

    cout << "The string" << str1 << " contains " 
        << len1 << " character.\n";
    cout << "The string " << char1 << " contians " << len2 << " characters\n";

    return 0;
}