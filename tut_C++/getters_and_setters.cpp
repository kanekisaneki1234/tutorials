#include <iostream>
#include <string>

using namespace std;

class Electronics {
    private:
        int starrating;
    public:
        string name;
        string type;

    Electronics(string Name, string Type, int aRating) : name(Name), type(Type) {
        setRating(aRating);
        cout << "Added new electronic item." << endl;
    }

    void setRating(int Rating) {
        int valid_ratings[] = {1, 2, 3, 4, 5};
        if (std::find(begin(valid_ratings), end(valid_ratings), Rating) != end(valid_ratings)) {
            starrating = Rating;
        }
        else {
            starrating = 0; 
        }
    }
    int getRating() {
        return starrating;
    }

    void printInfo() {
            cout << "\nName:" << name << "\nType:" << type << "\nStar Rating:" << starrating;
        }
};

int main() {
    Electronics item1("Oven", "Appliance", 3);
    Electronics item2("Washing Machine", "Appliance", 69);
    item1.printInfo();
    item2.printInfo();
    // item1.setRating(69);
    // cout << endl <<item1.getRating();
}