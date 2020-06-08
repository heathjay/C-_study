#include<iostream>
using namespace std;
void test1();
void testcctype();
int main(){
    char ch ;
    int spaces  = 0;
    int total = 0;
    // cin.get(ch);

    // while(ch != '.'){
    //     if(ch == ' '){
    //         ++spaces;
    //     }
    //     ++total;
    //     cin.get(ch);
    // }
    test1();
    /*
    while((ch=cin.get()) != '.'){
         if(ch == ' '){
            ++spaces;
        }
        ++total;
    }
    cout << spaces << " spaces." << "total : " << total<< endl;
    */
    return 0;
}

void test1(){
    cout << "Type, and I shall repeat.\n";
    char ch;
    cin.get(ch);
    while(ch != '.'){
        if(ch == '\n'){
            cout << ch;
        }else{
            cout << ++ch;
        }
        cin.get(ch);
    }
}