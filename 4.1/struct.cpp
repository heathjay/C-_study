#include<iostream>
struct inf{
    char name[20];
    float vol;
    double price;
};
struct pig{
    int key;
    int fat;
    int hight;
}pig1;

struct dog{
    int num;
    char name[20];
} dog1 = {
    3,
    "bad"
};

int main(){
    using namespace std;
    inf guest = {
        "FF",
        1.22,
        20.88
    };
    inf xx = {
        "shiwq",
        1.99,
        183
    };

    cout << "sjijiwji" << guest.name ;
    cout << " and" << xx.name << "\n";
    cout << "you can have both for $";
    cout << guest.price + xx.price <<"!\n";

    inf a[2] = {
        {"jisji", 18,21},
        {"bb   ",172.2,1}
    };
    cout << a[1].name;
    cout << " " << a[0].price <<endl;
    return 0;
}