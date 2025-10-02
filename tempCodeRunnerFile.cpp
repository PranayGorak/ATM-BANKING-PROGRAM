#include<iostream>
#include<iomanip>
void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 741852963;
    int choice = 0;
    do{
        std::cout<<"**************** WELCOME TO PRANAY'S INTERNATIONAL BANK *********************\n";
        std::cout<<"***************** NUMBER 1 BANK AROUND THE WHOLE WORLD ************************\n";
        std::cout<<"enter your choice : \n";
        std::cout<<"1.SHOW BALANCE\n";
        std::cout<<"2.DEPOSIT MONEY\n";
        std::cout<<"3.WITHDRAW MONEY\n";
        std::cout<<"4.EXIT\n";
        std::cout<<"****************************************************************\n";
        std::cin>>choice;
        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showbalance(balance);
                   break;
            case 2: balance += deposit();
                  showbalance(balance);
                  break;
            case 3: balance -= withdraw(balance);
                  showbalance(balance);
                  break;
            case 4: std::cout<<"THANKS FOR USING PRANAY'S BANKING\n";
                  break;
            default: std::cout<<"invalid choice\n";
            
        }
    }while(choice =! 4);
    return 0;
}
void showbalance(double balance){
    std::cout<<"YOUR BALANCE IS: $"<< std::setprecision (2) << std::fixed << balance << '\n';
}
double deposit(){
    double amount = 0;
    std::cout<<"ENTER AMOUNT TO BE DEPOSITED: ";
    std::cin>>amount;
    if(amount > 0){
        return amount;
    }
    else{
        std::cout<<"THAT'S NOT VALID AMOUNT\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    std::cout<<"ENTER THE AMOUNT TO BE WITHDRAWN: ";
    std::cin>>amount;
    if(amount > balance){
        std::cout<<"INSUFFICIENT FUNDS\n";
        return 0;
    }
    else if(amount < 0){
        std::cout<<"THATS NOT A VALID AMOUNT\n";
        return 0;
    }
    else{
        return amount;
    }
}