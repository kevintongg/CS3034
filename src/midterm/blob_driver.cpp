//
// Created by Kevin Tong on 18/10/2017.
//

#include <iostream>
#include <vector>
#include "blob.h"

using namespace std;

int main() {
  
  vector<Blob> blobs;
  
  auto blob1(0.3);
  auto blob2(2.3);
  auto blob3(9.4);
  auto blob4(2.0);
  auto blob5(1.7);
  
  blobs.emplace_back(blob1);
  blobs.emplace_back(blob2);
  blobs.emplace_back(blob3);
  blobs.emplace_back(blob4);
  blobs.emplace_back(blob5);
  
  auto masterBlob(0);
  
  for (auto i = 0; i < blobs.size(); i++) {
    if (masterBlob == blobs[i].getSize()) {
      cout << "Master Blob is equal to Blob #" << i << endl;
    } else {
      cout << "Master Blob is not equal to Blob #" << i << endl;
    }
    masterBlob += blobs[i].getSize();
  }
  
  int springfield = 15;
  
  if (springfield < masterBlob) {
    cout << "Springfield has size " << springfield << " and giant Blob has size " << masterBlob << "; Springfield has been destroyed!" << endl;
  } else if (springfield > masterBlob) {
    cout << "Springfield has size " << springfield << " and giant Blob has size " << masterBlob << "; Springfield has been saved!" << endl;
  }
  
  return 0;
};