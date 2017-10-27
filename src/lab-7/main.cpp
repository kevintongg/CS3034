//
// Created by kcr12_000 on 25/10/2017.
//

#include <iostream>
#include <vector>
#include <random>
#include <unistd.h>
#include "cat.h"
#include "bird.h"
#include "mouse.h"

using namespace std;

/**
 * https://stackoverflow.com/questions/21102105/random-double-c11
 * */

int main() {

  auto cat = new Cat("Airi", 4082.33);
  cout << *cat << endl;
  cat->call();

  vector<Prey *> prey;

  auto bird1 = new Bird("Sora", 1451.5);
  auto bird2 = new Bird("Riku", 1179.34);
  auto mouse1 = new Mouse("Mickey", 36.5);
  auto mouse2 = new Mouse("Minnie", 34.7);

  prey.emplace_back(bird1);
  prey.emplace_back(bird2);
  prey.emplace_back(mouse1);
  prey.emplace_back(mouse2);

  // Psuedorandom numbers uniformly distributed in range
  uniform_real_distribution<> distribution(0, 1);
  // Random seed
  random_device device;
  // Init Mersenne Twister psuedo-random number generator
  mt19937_64 engine(device());

  for (Prey *p : prey) {
    cout << endl;
    p->call();
    double random = distribution(engine);
    if (random < 0.5) {
      cat->predate(*p);
    } else {
      p->flee();
    }
  }

  sleep(1);

  cout << endl << cat->getName() << " had a very good meal of whatever she could find!" << endl;
  cout << cat->getName() << " now weighs " << cat->getWeight() << " grams." << endl;

  return 0;
}
