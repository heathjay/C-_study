#include<iostream>
using namespace std;
const int Max = 5;
void fish();
void golf();

int main(){
   golf();
   return 0;
}
void fish(){

    double fish[Max];
    cout << "Please enter the weights of your fish. \n";
    cout << "u may enter up to " << Max << "fish < q to terminate >.\n";
    cout << "fish #1: ";
    int i = 0;
    while( i < Max && cin >> fish[i]){
        if(++i < Max){
            cout << "fish # " << i+1 << " : ";
        }
    }
    double total = 0;
    for(int j = 0; j < i;j++) total += fish[j];
    if(i == 0) cout << "no fish\n";
    else cout << total /i << " = average weight of "<< i << " fish\n";
    cout << "done\n";
}
void golf(){
    int golf[Max];
    cout << "please enter your golf scores. \n ";
    cout << " you must enter " << Max << " rounds.\n";
    int i ;
    for(i = 0; i < Max;i ++){
        cout << "round # " <<i + 1 << " : ";
        while(!(cin >> golf[i])){
            cin.clear();
            while(cin.get() != '\n') continue;
            cout<<"please enter a number: ";
        }
    }
     double total = 0;
    for(int j = 0; j < i;j++) total += golf[j];
    if(i == 0) cout << "no golf\n";
    else cout << total /i << " = average weight of "<< i << " golf\n";
    cout << "done\n";
}