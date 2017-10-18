//
// Created by Kevin Tong on 18/10/2017.
//

#ifndef BLOB
#define BLOB

class Blob {
public:
  explicit Blob(double size);
  
  Blob();
  
  bool operator==(const Blob &other);
  
  Blob operator+=(Blob &other);
  
  double getSize() const;
  
  void setSize(double size);

private:
  double size;
};


#endif // BLOB
