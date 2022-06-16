/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709

    AQUI ESTA LO DE SOBRECARGA DE OPERADORES
*/

#pragma once
#include <string>
using namespace std;

class Usuario
{
    private:
        string user;
        string status;
    public:
        Usuario();
        ~Usuario();
        Usuario(string user, string status);
        string getUser();
        string getStatus();
        void setUser(string user);
        void setStatus(string status);
        friend ostream& operator<<(ostream& os, const Usuario& u);
};
