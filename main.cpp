// Cpded by wanz

#include <iostream>

using namespace std;

int main()
{
    string name;
    string package[5] = {"", "Apartment", "Family", "Delux", "Standard"};
    int prices[5] = {0,350,250,200,150};
    int the_package, price, conti, days;
    string payment;
    bool discount;
    while (true)    {
        cout << "Welcome to The Pradise Resort\nEnter your name: ";
        cin >> name;
        cout << "\n\nSelect package: \n";
        for (int i = 1; i < 5; i++) {
            cout << i << ". " << package[i] << "\tRM" << prices[i] << "\n";
        }
        cout << "\nPackage code: ";
        cin >> the_package;
        
        cout << "\nDay(s): ";
        cin >> days;
        
        cout << "Booking method (O - Online / M - Manual): ";
        cin >> payment;
        
        price = prices[the_package] * days;
        if ((payment == "O") || (payment == "o"))   {
            
            price = (price - (0.15 * price)) + (0.05 * price);
        }  else {
            price = (price) + (0.05 * price);
        }
        
        cout << "PARADISE RESORT\n" << "########################################" << "\n";
        cout << "Guest Name: \t\t" << name << "\n";
        cout << "Type Of Package: \t" << package[the_package] << "\n";
        cout << "Number Of Day(s): \t" << days << "\n";
        cout << "Total Payment: \t\t" << price << "\n";
        
        cout << "\n\nContinue ? (1 - Yes / 0 - No): ";
        cin >> conti;
        
        if (!conti)  {
            break;
        }
        
        
    }
    return 0;
}
