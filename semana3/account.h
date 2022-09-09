/**
 * @file account.h
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu.pe)
 * @brief clase Account, con constructor para inicalizar el nombre de la cuenta
 * @version 0.1
 * @date 2022-09-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using std::string;
using std::cout;


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

