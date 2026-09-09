#include <iostream>
using namespace std;

class Player {
private:
  int score = 0;

public:
  static int time;
  void addPoint() { score++; }           // Non-const function (modifies state)
  int getScore() const { return score; } // Const function (read-only)


  static int random(){
    cout<<"hello"<<endl;
    cout<<"time"<<time;
    //we can only use static variable in static functions
    return 0;
  }
};

int Player::time = 50;

int main() {

  cout << Player::time << endl;

  Player player1;

  cout << player1.time << endl;

  player1.time = 30;

  cout << player1.time << endl;

  cout << Player::time << endl;

  player1.random();
}
