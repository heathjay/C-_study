#include<iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main(){
    Stonewt pavarotti = 260;
    Stonewt wolfe(285.7);
    Stonewt taft(21.8);

    cout << "The tenor weighed ";
    pavarotti.show_stn();
    cout<<"The detective weighted ";
    wolfe.show_stn();
    cout<< "The president weighted :";
    taft.show_lbs();
    pavarotti = 282.1;
    taft = 213;
    cout <<"after dinner, the tenor weighted: ";
    pavarotti.show_stn();
    taft.show_stn();
    display(taft,2);
    display(422,2);
    cout <<"done\n";


    Stonewt pp(88,2.2);
    double p_wt = pp;
    cout << p_wt <<" = "<< int(pp) <<".\n";
    return 0;
}

void display(const Stonewt & st, int n ){
    for(int i = 0 ; i < n ; i++){
        cout << "wow ! ";
        st.show_stn();
    }
}