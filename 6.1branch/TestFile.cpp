#include<iostream>
#include<fstream>
using namespace std;
void openfile(){
    const int  Size = 60;
    char filename[Size];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename,Size);
    inFile.open(filename);
    if(!inFile.is_open()){
        cout<< " could not open the file " << filename << endl;
        cout << " program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    inFile >> value;
    while(inFile.good()){
        ++count;
        sum += value;
        inFile >> value;
    }
    if(inFile.eof()){
        cout << "end of file.\n";
    }else if(inFile.fail()){
        cout <<"input terminated by data mismatch.\n";
    }else{
        cout << "unknow reason.\n";
    }

    if(count == 0) cout<<"no data processed.\n";
    else{
        cout << "Items read: " << count << endl;
        cout << "Sum : " << sum << endl;
        cout << "Average : " << sum / count << endl;
    }
    inFile.close();

}
void writefile(){
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    ofstream outFile;
    outFile.open("./file.txt");
    cout << "enter the make and model of automobile: ";
    cin.getline(automobile,50);
    cout << "enter the mobile year : ";
    cin >> year;
    cout << "enter the original asking price : ";
    cin >> a_price;
    d_price = 0.913 * a_price;


    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "make and model : " << automobile << endl;
    cout << " year : " << year << endl;
    cout << "was asking $ " << a_price<<endl;
    cout << "now asking $ " << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "make and model : " << automobile << endl;
    outFile << " year : " << year << endl;
    outFile << "was asking $ " << a_price<<endl;
    outFile << "now asking $ " << d_price << endl;
    outFile.close();
}
int main(){
    openfile();
    
    return 0;
}