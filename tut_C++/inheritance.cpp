#include <iostream>
#include <string>

using namespace std;

class Enemy{
    public:
        string name;
        int health;
        int damage;

    Enemy(bool mainClass=true) {
        if(mainClass) {
            cout << "Created a new enemy entity." << endl;
        }
    }

    Enemy(string Name, int Health, int Damage, bool mainClass = true) : name(Name), health(Health), damage(Damage) {
        if (mainClass) {
            cout << "Created a new enemy entity.\nName:" << Name << "\nHealth:" << Health << "\nDamage:" << Damage << endl;
        }
    }
};

class Guardian: public Enemy{
    public:
        int shield;

    Guardian() : Enemy(false) {
        cout << "Created a new enemy sub-class entity Guardian." << endl;
    }

    Guardian(string Name, int Health, int Damage, int Shield) : Enemy(Name, Health, Damage, false), shield(Shield) {
        cout << "Created a new Guardian entity.\nName:" << Name << "\nHealth:" << Health << "\nDamage:" << Damage << "\nShield:" << Shield << endl;
    }

    void specialMove() {
        cout << "Guardian used special move AURA BLAST!" << endl;
    }
};

int main() {
    Enemy grunt("Grunt", 100, 10);
    Enemy Enemy0;
    Guardian Hallway;
    Guardian Zulu("Zulu", 200, 30, 50);
}