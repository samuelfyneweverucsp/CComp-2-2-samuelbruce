/**
 * @file AccountTest.cpp
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu.pe)
 * @brief creating and manipulating a (bank) Account object
 * @version 0.1
 * @date 2022-09-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

#include "account.h"

using namespace std;


class Account {
    public:
        explicit Account(std::string accountName, int initialBalance)
        : nameDataMember{accountName} {
            // validar que initialBalance es positivo; si no lo es,
            // mantener el balance en 0
            if (initialBalance > 0) {
                balanceDataMember = initialBalance;
            }
        }

        // funcion que deposita solamente una cantidad valida al balance
        void deposit(int depositAmount) {
            if (depositAmount > 0) { // si la cantidad para depositar es valido
                balanceDataMember = balanceDataMember + depositAmount; // agregarlo al balance
            }
        }

        void withdraw(int withdrawalAmount) {
            if (withdrawalAmount < 0) {std::cout << "No se puede retirar un valor negativo" << std::endl;} 
            else if (withdrawalAmount > balanceDataMember) {std::cout << "No tienes tanta plata, asi que no puedes retirar esa cantidad! No retirando nada" << std::endl;}
            else {
                balanceDataMember = balanceDataMember - withdrawalAmount;
            }
        }

        // funcion que retorna el balance del cuenta
        int getBalance() const {
            return balanceDataMember;
        }

        // establecer nombre
        void setName(std::string accountName) {
            nameDataMember = accountName;
        }

        // retornar el nombre
        std::string getName() const {
            return nameDataMember;
        }

    private:
        std::string nameDataMember;
        int balanceDataMember{0};
};


int main () {
    Account account1{"Rigoberto", 100};
    Account account2{"Nicolas", 50};

    cout << "account1: " << account1.getName() << " tiene balance de S/" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " tiene balance de S/" << account2.getBalance();

    cout << "\n\nIngresa cuanto depositar en account1: " << endl;
    int depositAmount;
    cin >> depositAmount;
    cout << "Agregando S/" << depositAmount << " al balance de account1...";
    account1.deposit(depositAmount); // agregar al balance de account1

    // mostrar los balances de nuevo
    cout << "\n\naccount1: " << account1.getName() << " tiene balance de S/" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " tiene balance de S/" << account2.getBalance();

    cout << "\n\nIngresa cuanto depositar en account2: " << endl;
    cin >> depositAmount;
    cout << "agregando " << depositAmount << "al balance de account2...";
    account2.deposit(depositAmount); // agregar al balance de account2

    // mostrar los balances una vez mas
    cout << "\n\naccount1: " << account1.getName() << " tiene balance de S/" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " tiene balance de S/" << account2.getBalance();    

    cout << "\n\nIngresa cuanto retirar de account1: " << endl;
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "Retirando S/" << withdrawalAmount << " del balance de account1...";
    account1.withdraw(withdrawalAmount); // agregar al balance de account1

    // mostrar los balances de nuevo
    cout << "\n\naccount1: " << account1.getName() << " tiene balance de S/" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " tiene balance de S/" << account2.getBalance();

    cout << "\n\nIngresa cuanto retirar de account2: " << endl;
    cin >> withdrawalAmount;
    cout << "Retirando S/" << withdrawalAmount << " del balance de account2...";
    account2.withdraw(withdrawalAmount); // agregar al balance de account2

    // mostrar los balances una vez mas
    cout << "\n\naccount1: " << account1.getName() << " tiene balance de S/" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " tiene balance de S/" << account2.getBalance();   
}
