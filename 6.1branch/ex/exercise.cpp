#include<iostream>
#include<cctype>

using namespace std;
void test1(){
    char ch;
    cout << "Enter your words\n";
    cin.get(ch);
    while(ch != '@'){
        if(islower(ch)){
            toupper(ch);
        }else if(isupper(ch)){
            tolower(ch);
        }
         if(isdigit(ch) == false){
            cout << ch;
        }
        cin.get(ch);
    }
    cout << endl;

}
void test2(){
    const int Size = 10;
    double donation[Size];
    int i = 0 ;
    double total = 0.0;
    double average = 0.0;
    cout << "Enter the donation: ";
    while(i < Size && cin >> donation[i] ){
        total += donation[i];
        i++;
    }
    cout << " total : " << total << " average : " << total / i << endl;
    int num = 0;
    for(int j = 0 ; j<i;j++){
       if(donation[j] > average ) num++;
    }
    cout << "above average : " << num << endl;

}
void test3(){
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnicore\t" << "p) pianist" << endl;
    cout << "t) tree\t\t" << "g) game" << endl;
    char alpha;

    cin.get(alpha);
 
    while (isalpha(alpha)){
	switch (alpha)
	{
	case 'c': cout << "A maple is a carnivore." << endl;
		break;
	case 'p': cout << "A maple is a pianisit." << endl;
		break;
	case 't': cout << "A maple is a tree." << endl;
		break;
	case 'g': cout << "A maple is a game." << endl;
		break;
	default: cout << "Please enter a c, p, t, or g: ";
		cin.ignore();
	}
	cin.get(alpha);
    }

}

void test4(){
    const int strsize = 50;
    struct bop{
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference; //0=fullname, 1 = title, 2 = bopname
    };
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t\t";
    cout << "b. display by title\n";
    cout << "c. display by bopname\t\t";
    cout << "d. display by preference\n";
    cout << "q. quit\n";
 
    cout << "Enter your choice:";
    char choice;
    cin >> choice;
    while (choice != 'q'){
	switch (choice)
	{
        case 'a': cout << "Wimp Macho\n" << "Raki Rhodes\n" << "Celia Laiter\n";
		cout << "Hoppy Hipman\n" << "Pat Hand\n";
		break;
        case 'd': cout << "Wimp Macho\n" << "Junior Programmer\n" << "MIPS\n" << "Analyst Trainee\n" << "LOOPY\n";
		break;
	}
	cout << "Enter your choice:";
	cin >> choice;
    }
    cout << "Bye!\n";

}
int main(){
 //test1();
 test2();
}