#include<iostream>
enum {red, orange, yellow, green, blue, violet, indigo};
int main(){
    using namespace std;
    cout << "Enter color code(0-6) : " ;
    int code ;
    cin >> code;
    while(code >= red && code << indigo){
        switch (code)
        {
        case red: cout << "red." << endl;
            break;
        
        default:
            cout << "no." << endl;
            break;
        }
    }
    cout << "bye\n";
    return 0;
}