#include<iostream>
double betsy(int);
double pam(int);
void estimate(int lines, double (*pf)(int));

int main(){
    using namespace std;
    int code;

    cout << "how many lines of code do you need ? ";
    cin >> code;
    cout << "Here is Betsy's estimate: \n";
    estimate(code,betsy);
    cout << "Here is pam's estimate: \n ";
    estimate(code,pam);
    return 0;
}

double betsy(int lns){
    return 0.05 * lns;
}
double pam(int lns){
    return 0.3 * lns + 0.0002 *lns * lns;
}

void estimate(int lines, double (*pf)(int)){
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hours \n";
}