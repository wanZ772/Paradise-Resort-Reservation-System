// Coded by wanz

#include <iostream> // main library

using namespace std;

int main() // main function called
{
    string name;
    string package[5] = {"", "Apartment", "Family", "Delux", "Standard"}; // array utk jenis2 package
    int prices[5] = {0,350,250,200,150}; // array utk harga setiap package
    int the_package, price, conti, days; // variable2 yg jenis data dia integer. aku combine dlm 1 line utk declare.
    string payment; // variable data type string.
    bool discount; // variable type boolian. abaikan je. aku x guna pun
    while (true)    { // while loop sbb soalan ckp nk software ni terus run selagi user x terminate
        cout << "Welcome to The Pradise Resort\nEnter your name: ";
        cin >> name; // ambik input utk variable name
        cout << "\n\nSelect package: \n";
        for (int i = 1; i < 5; i++) { // kat sini aku guna for loop utk jimat masa & efficiency program utk print out semua package & harga
            cout << i << ". " << package[i] << "\tRM" << prices[i] << "\n";
        }
        cout << "\nPackage code: ";
        cin >> the_package;
        
        cout << "\nDay(s): ";
        cin >> days;
        
        cout << "Booking method (O - Online / M - Manual): ";
        cin >> payment;
        
        price = prices[the_package] * days; // kat sini math utk base price (price sebelum discount & tax)
        if ((payment == "O") || (payment == "o"))   { // kat sini program decide nk bagi discount sbb online payment atau x
            
            price = (price - (0.15 * price)) + (0.05 * price); // kat sini semua math utk discount price
        }  else {
            price = (price) + (0.05 * price); // kat sini semua math utk x de discount price
        }
        
        cout << "PARADISE RESORT\n" << "########################################" << "\n"; // kat sini output
        cout << "Guest Name: \t\t" << name << "\n";
        cout << "Type Of Package: \t" << package[the_package] << "\n";
        cout << "Number Of Day(s): \t" << days << "\n";
        cout << "Total Payment: \t\t" << price << "\n";
        
        cout << "\n\nContinue ? (1 - Yes / 0 - No): "; // program mintak user decide nk terminate atau continue
        cin >> conti;
        
        if (!conti)  { // kat sini program check variable conti ni true / false. dlm coding 1 - true. 0 - false. so cara ni boleh jimat masa
            break; // break the loop kalau condition dia true (dlm kes ni kalau false la)
        }
        
        
    }
    return 0;
}
