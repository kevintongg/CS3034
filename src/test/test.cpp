#include <iostream>
#include <utility>
#include <utility>
#include <vector>

using namespace std;

class Monster {
public:
  explicit Monster(string nameIn)
      : name(std::move(std::move(nameIn))) {}

  virtual void rampage() = 0;

  string getName() const { return name; }

private:
  string name;
};

class Zombie : public Monster {
public:
  explicit Zombie(string nameIn)
      : Monster(std::move(nameIn)) {};

  void rampage() override {
    std::cout << getName() << " joins a herd of zombies searching for brains\n";
  }
};

class Vampire : public Monster {
public:
  explicit Vampire(string nameIn)
      : Monster(std::move(nameIn)) {};

  void rampage() override {
    std::cout << getName() << " turns into a bat and flies through your window to suck your blood\n";
  }
};


int main() {

  Monster *x = new Vampire("X");    // OK
  //Monster *y = new Monster("Y");    // error: Monster is abstract

  vector<Monster *> monsters;
  monsters.push_back(new Zombie("Zelda"));
  monsters.push_back(new Zombie("Zaphrod"));
  monsters.push_back(new Vampire("Vinnie"));
  monsters.push_back(new Vampire("Von"));

  for (Monster *m: monsters) {
    m->rampage();
  }

  return 0;
}
