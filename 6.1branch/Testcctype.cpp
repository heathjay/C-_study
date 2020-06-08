#include<iostream>
#include<cctype>
int main(){
    using namespace std;
    cout << "Enter test for analysis, and type @ to terminate input.\n";
    char ch ;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);
    while(ch != '@'){
        if(isalpha(ch))
            chars++;
        else if(isdigit(ch))
            digits++;
        else if(ispunct(ch))
            punct++;
        else others ++;
        cin.get(ch);
    }
    cout << "digits: " << digits << "chars : " << chars << "punct : " << punct << "others : "<< others << endl;
    return 0;
}