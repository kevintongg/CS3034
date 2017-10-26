//
// Created by kcr12_000 on 25/10/2017.
//

#include <vector>
#include <random>
#include "cat.h"
#include "bird.h"
#include "mouse.h"


/**
 * https://stackoverflow.com/questions/21102105/random-double-c11
 * */

double getRandomNumber() {
  uniform_real_distribution<> distribution(0, 1);
  random_device device;
  mt19937_64 engine(device());
  double x = distribution(engine);
  return x;
}

int main() {

  auto *cat = new Cat("Jerry", 20);
  cat->call();

  vector<Prey *> prey;

  auto *bird1 = new Bird("Tweety", 15.0);
//  auto *bird2 = new Bird("Donald", 30);
//  auto *mouse1 = new Mouse("Jerry", 10);
//  auto *mouse2 = new Mouse("Mickey", 27);
//
//  bird1->call();
//
//  prey.emplace_back(bird1);
//  prey.emplace_back(bird2);
//  prey.emplace_back(mouse1);
//  prey.emplace_back(mouse2);
//
//  for (Prey *p : prey) {
//    p->call();
//
//  }

  return 0;
}
