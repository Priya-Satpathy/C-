#include<iostream>
using namespace std;

// Base class
class Player {
protected:
    int player_id;
    char player_name[50];

public:
    void getPlayer() {
        cout << "Enter Player ID: ";
        cin >> player_id;
        cin.ignore();

        cout << "Enter Player Name: ";
        cin.getline(player_name, 50);
    }

    void showPlayer() {
        cout << "Player ID: " << player_id << endl;
        cout << "Player Name: " << player_name << endl;
    }
};

// Derived from Player
class Game : public Player {
protected:
    char game_name[50];
    int game_code;

public:
    void getGame() {
        cout << "Enter Game Name: ";
        cin.getline(game_name, 50);

        cout << "Enter Game Code: ";
        cin >> game_code;
    }

    void showGame() {
        cout << "Game Name: " << game_name << endl;
        cout << "Game Code: " << game_code << endl;
    }
};

// Derived from Game
class Location : public Game {
protected:
    char city[50];
    char state[50];

public:
    void getLocation() {
        cin.ignore();
        cout << "Enter City: ";
        cin.getline(city, 50);

        cout << "Enter State: ";
        cin.getline(state, 50);
    }

    void showLocation() {
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
    }
};

// Another derived class from Game
class Physique : public Game {
protected:
    float height, weight;

public:
    void getPhysique() {
        cout << "Enter Height: ";
        cin >> height;

        cout << "Enter Weight: ";
        cin >> weight;
    }

    void showPhysique() {
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

// Hybrid inheritance (multiple inheritance)
class Final : public Location, public Physique {
public:
    void getData() {
        getPlayer();   // from Player
        getGame();     // from Game
        getLocation(); // from Location
        getPhysique(); // from Physique
    }

    void showData() {
        showPlayer();
        showGame();
        showLocation();
        showPhysique();
    }
};

int main() {
    Final obj;

    obj.getData();
    cout << "\n----- Player Details -----\n";
    obj.showData();

    return 0;
}
