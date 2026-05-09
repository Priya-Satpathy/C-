#include <iostream>
using namespace std;

class Player {
protected:
    int player_id;
    char player_name[50];

public:
    void getData() {
        cout << "Enter player name: ";
        cin.ignore();
        cin.getline(player_name, 50);

        cout << "Enter player id: ";
        cin >> player_id;
    }

    void showData() {
        cout << "Player ID: " << player_id << endl;
        cout << "Player Name: " << player_name << endl;
    }
};


class Game : public Player {
protected:
    int game_code;
    char game_name[30];

public:
    void getGame() {
        getData();
        cout << "Enter game code: ";
        cin >> game_code;

        cout << "Enter game name: ";
        cin.ignore();
        cin.getline(game_name, 30);
    }

    void showGame() {
        showData();
        cout << "Game Code: " << game_code << endl;
        cout << "Game Name: " << game_name << endl;
    }
};


class Location : public Player {
private:
    char city[20], state[20], country[20];

public:
    void getLoc() {
        

        cout << "Enter city: ";
        cin >> city;

        cout << "Enter state: ";
        cin >> state;

        cout << "Enter country: ";
        cin >> country;
    }

    void showLoc() {
       
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Country: " << country << endl;
    }
};


class Physique : public Game {
private:
    int height, weight;

public:
    void getValue() {
        getGame();
        cout << "Enter height: ";
        cin >> height;

        cout << "Enter weight: ";
        cin >> weight;
    }

    void showValue() {
        showGame();
        cout << "Height: " <<height<<"cm"<< endl;
        cout << "Weight: " <<weight<< "kg" << endl;
    }
};

int main() {
    Physique p;
    Location l;

    cout << "\n--- Enter Physique Details ---\n";
    p.getValue();

    cout << "\n--- Enter Location Details ---\n";
    l.getLoc();

    cout << "\n--- Physique Details ---\n";
    p.showValue();

    cout << "\n--- Location Details ---\n";
    l.showLoc();

    return 0;
}
