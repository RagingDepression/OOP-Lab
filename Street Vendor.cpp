#include <iostream>
#include <string>
using namespace std;

class StreetVendor {
private:
    string Name;
    string Goods;
    string Location;
    int DailyGoal;

public:
    StreetVendor(string name, string good, string location, int dailyGoal) {
        Name = name;
        Goods = good;
        Location = location;
        DailyGoal = dailyGoal;
    }

    void Display() {
        cout << "---------------------\n";
        cout << "Vendor Name: " << Name << "\n";
        cout << "Goods: " << Goods << "\n";
        cout << "Location: " << Location << "\n";
        cout << "Daily Goal: " << DailyGoal << "\n";
        cout << "---------------------\n";
    }

    void Relocate(string new_location) {
        if (new_location.find("Manhattan") != string::npos) {
            Location = new_location;
            cout << Name << " has successfully moved to " << Location << endl;
        } else {
            cout << "Relocation denied: Must stay in Manhattan!" << endl;
        }
    }
};

int main() {
    StreetVendor HalalGuys("53rd St. Halal","Chicken & Rice",
                           "Midtown, 53rd & 6th", 1500);

    StreetVendor FlowerShop("Union Sq Blooms","Fresh Flowers",
                            "Union Square Park entrance", 750);

    HalalGuys.Display();
    HalalGuys.Relocate("Manhattan, Times Square");

    FlowerShop.Display();
    FlowerShop.Relocate("Queens");

    return 0;
}
