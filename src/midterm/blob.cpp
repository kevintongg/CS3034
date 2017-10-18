//
// Created by Kevin Tong on 18/10/2017.
//

#include "blob.h"

Blob::Blob(double size)
    : size(size) {}

Blob::Blob() = default;

double Blob::getSize() const {
  return size;
}

void Blob::setSize(double size) {
  Blob::size = size;
}

bool Blob::operator==(const Blob &other) {
  return this->size == other.size;
}

Blob Blob::operator+=(Blob &other) {
  this->size += other.size;
  other.size = 0;
  
  return *this;
}



