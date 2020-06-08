#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int x;
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) <<endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout <<(x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    for(int i = 0; i <= 5; i++)
        cout << "Value = " << i << ":";
        cout << "jj" << endl;

    char word[5] = "?ate";
    for(char ch = 'a'; strcmp(word,"mate");ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout << "end word is " << word << endl;
    
    return 0;
}