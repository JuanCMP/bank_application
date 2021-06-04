#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fstream>

class banking{

    
    public:

    void accountProfile(); // Summary of all data user
    void newAccount();     // Create a new account
    void depositAmount();  // Allow deposit an amount of money into user account 
    void withdrawAmount(); // Retirar dinero 
    void balanceEnquiry(); // Saldo
    void allAccountHolder(); // Give a full summary transactions list   
    void closeAccount();    // Allows the user to close their account
    void modifyAccount();  // Allows the user to modify their activated account

    private:

    char first_name[20];
    char last_name[20];
    long id_account;
    char birthday_date[10];
    char genre[2];
    char expiration_city[20];
    bool status;
    long id_card;
    long mobile_phone; 
};

banking::void accountProfile(){
    
    char option[1];
    cout << "ACCOUNT PROFILE" << endl;
    cout << "\n_____________________" << endl;
    cout << "\nID account: " << id_account << endl;
    cout << "\nStatus: " << status << endl;
    cout << "\nFirst name: " << first_name << endl;
    cout << "\nLast name: " << last_name << endl;
    cout << "\nID card: " << id_card << endl;
    cout << "\nExpiration city: " << expiration_city << endl;
    cout << "\nBirthday date: " << birthday_date << endl;
    cout << "\nMobile phone: " << mobile_phone << endl;
    cout << "\nGenre: " << genre << endl;
    cout << "-----------------------" << endl;
    cout << "\nDo you like to return to menu <Y/n> ", cin >> option << endl;
    if (option == "Y"){
        //return to menu
    }else{
        //exit
    }
};
    

banking::double newAccount(status=true){
        
        string full_name, date_time, city_born, current_city;
        double id_card, account_id = rand()%1000000000;
        char genre;
        bool status; 
        cout << "Welcome to Colombian Bank!\n Please enter your ID card:\n", cin >> id_card << endl;
        cout << "Enter your full name:\n", cin >> full_name << endl;
        cout << "Enter your birthday date:\n", cin >> date_time << endl;
        cout << "Enter your genre (that appear in the ID card):\n", cin >> genre << endl;
        cout << "Enter the city where you was tramited your ID card:\n", cin >> city_id << endl;
        cout << "Enter your current city:\n", cin >> current_city << endl;
        cout << "Welcome! " << full_name << " your new account id is:\n" << account_id, cin >> account_id << endl; 
        return account_id;
};
    
banking::double depositAmount(double id_card){
        
        cout << "Welcome, enter your ID card", cin >> id_card << endl;
        //Verify if user have an activate an account
        if (person have activated account){
            // Hello name
            // How much do you like to deposit
            //read option
            // Verify if is bigger than 1
            // sum current deposit and balance
            // storage the new balance
        }else{
            //print sorry and close the transaction
        }
        // return new_balance
       
};
    
    //Retirar
banking::void withdrawAmount(double id_card){
        /*
        a. Verify if a person have an active account
        b. Print out who is the person: full_name
        c. If user have more than $ 1, can continue, else print out a message
        d. Ask for amount to retired
        e. If amount to retired is bigger than current balance, don't allow transaction.
        f. Give to user money
        */
};
    
    //Consulta de saldo
banking::void balanceEnquiry(){
        // do it here
    };
    
    //Historial de la cuenta (ingresos y saldos)
    void allAccountHolder(){
        // do it here
    };
    
    //Cerrar cuenta
    void closeAccount(){
        // do it here
};
    
    // Modificar una cuenta
banking::void modifyAccount(){
        // do it here
};


int main(){

    return 0;
}
