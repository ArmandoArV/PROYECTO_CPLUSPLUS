#include <string>
#include <vector>
#include <iostream>
#include "Rent.h"
using namespace std;

class Cart: public Rent
{
    private:
        vector<string> cart;
        int total;
    public:
        Cart();
        void addToCart(string);
        void removeFromCart(string);
        void printCart();
        void printTotal();
        void clearCart();
        int getTotal();
};
