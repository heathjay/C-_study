#include<iostream>
using namespace std;
struct sysop{
    char name[26];
    char quote[64];
    int used;
};

const sysop & use(sysop & sysopref);

int main(){
    sysop looper = {
        "Rick \"Fortran\" Looper",
        "I am a goto kind of guy",
        0
    };

    use(looper);
    cout << "Looper : " << looper.used << " use(s)\n";
    sysop copystr;
    copystr = use(looper);
    cout << "Looper: " << looper.used << " use\n";
    cout << "copystr : " << copystr.used << " use\n";
    cout << "use(looper): " << use(looper).used << " uses\n";
    return 0; 
}

const sysop & use(sysop & sysopref){
    cout << sysopref.name << " says : \n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref; 
}