#include <iostream>
#include "Usuario.h"



Usuario::Usuario(string user, string status)
{
    this->user = user;
    this->status = status;
}

Usuario::~Usuario()
{
    //dtor
}

string Usuario::getUser()
{
    return user;
}

string Usuario::getStatus()
{
    return status;
}

void Usuario::setUser(string user)
{
    this->user = user;
}

void Usuario::setStatus(string status)
{
    this->status = status;
}


ostream &operator<<(ostream &os, const Usuario &u)
{
    os << "Usuario: " << u.user << "\n" << " Status: " << u.status << "\n";
    return os;
}