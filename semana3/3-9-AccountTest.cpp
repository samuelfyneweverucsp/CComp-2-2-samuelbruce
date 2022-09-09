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

#include "Account.h"

using namespace std;

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