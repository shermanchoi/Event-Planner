#include "CLI.h"

CLI::CLI(){
    exec = new Executive();
}

/*Logs a user into the application*/
CLI::login(){

    while(!loggedin){
        std::string identifier;
        std::cout << "You need to login to continue. If you do not have an account enter \"CreateAccount\".\nEnter your username: ";
        std::cin >> identifier;

        if(identifier == "CreateAccount"){
            newAccount();
        }else{
            //Attempt Login
            if()
        }
    }
}
