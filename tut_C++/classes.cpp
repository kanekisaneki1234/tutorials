#include <iostream>

using namespace std;

class Book {
    public:
        string name;
        string author;
        int pages;
};
class Character {
    public:
        string name;
        int age;
        string ability;

        Character() {
            name = "none";
            age = 0;
            ability = "none";
            cout << "\nAdded New Empty Character!";
        }

        // Character(string Name,int Age, string Ability) {
        //     name = Name;
        //     age = Age;
        //     ability = Ability;
        //     cout << "Added New Character\nName:" << Name << "\nAge:" << age << "\nAbility:" << ability;
        // }
        Character(string Name,int Age, string Ability) : name(Name), age(Age), ability(Ability) {
            cout << "Added New Character!";//\nName:" << Name << "\nAge:" << age << "\nAbility:" << ability;
        }

        void printInfo() {
            cout << "\nName:" << name << "\nAge:" << age << "\nAbility:" << ability;
        }
};

int main() {
    Book book1;
    book1.name = "Jujutsu Kaisen";
    book1.author = "Gege Akutami";
    book1.pages = 1500;

    Character char1("Itadori Yuuji",18,"Plot Armor");
    char1.printInfo();
    // cout << book1.author;
    Character char2;
    char2.printInfo();
}