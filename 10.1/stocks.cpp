#include<iostream>
#include<cstring>
class Stock{
    private:
        char company[30];
        int shares;
        double share_val;
        double total_val;
        void set_tot(){
            total_val = shares * share_val;
        }
    public:
        void acquire(const char * co, int n, double pr);
        void buy(int num, double price);
        void sell(int num, double price);
        void update(double price);
        void show();
        Stock(const char * co, int n = 0 , double pr = 0.0);
        Stock();
};

void Stock::acquire(const char * co, int n, double pr){
    std::strncpy(company,co,29);
    company[29] = '\0';
    if(n < 0) {
        std::cerr << "Number of shares cannot be negative. " << company << " shares set to 0.\n";
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(int num, double price){
    if(num < 0){
        std::cerr << "Number of shares purchased cannot be negative. "
        << "Transaction is aborted.\n";
    }else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(int num, double price){
    using std::cerr;
    if(num < 0){
        cerr << "Number of shares sold cannnot be negative. "
        <<"Transaction is aborted.\n";
    }else if(num > shares){
        cerr <<"you cannot sell more than you have ! Transaction is aborted.\n";
    }else{
        shares -=num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show(){
    using std::cout;
    using std::endl;
    cout << "Company: " << company<<" shares : " << shares << endl
    << " shares price : $" << share_val << " Total worth: $" <<total_val << endl;
}

Stock::Stock(){}

Stock::Stock(const char * co, int n ,double pr ){
    std::strncpy(company,co,29);
    company[29]= '\0';
    if(n < 0){
        std::cerr << "Number of shares can not be negative;" << company <<" shares set to 0;\n";
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot();

}
int main(){
    using std::cout;
    using std::ios_base;
    Stock stock1;
    stock1.acquire("Nano", 20, 12.5);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    //format ##。##
    stock1.show();
    stock1.buy(15,2982);
    stock1.show();
    stock1.sell(400,20.0);
    stock1.show();
    return 0;
}