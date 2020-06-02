#include<iostream>
#include<cstring>

using namespace std;
char * getname(void);
int main(){
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete[] name;

    name = getname();
    cout << name << " at " << (int *) name <<"\n";
    delete [] name;
    return 0;
    //静态存储
    //static double fee = 56.5;
    //动态存储 new delete
}
char * getname(){
    //自动存储，temp调用时存储，消失
    char temp[80];
    cout << "enter last name:";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}
    