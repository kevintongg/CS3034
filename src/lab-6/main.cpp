//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include "payrollsystem.h"

using namespace std;

int main() {

  PayrollSystem payrollSystem;

  payrollSystem.addEmployee("Kevin", "Tong", 12.34, 25);
  payrollSystem.addEmployee("Cedric", "Tong", 23.45, 26);

  for (const Employee &employee : payrollSystem.employees) {
    cout << employee.getEmployeeId() << endl;
  }
}
