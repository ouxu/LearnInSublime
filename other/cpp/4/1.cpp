#include <iostream>
using namespace std;

class box {
public:
  void get_value();
  void volume();
  void dis_value();

public:
  float length;
  float width;
  float height;
  float vol;
};

int main() {
  box b[3];
  for (int i = 0; i < 3; ++i) {
    b[i].get_value();
    b[i].volume();
    cout << "Box" << i + 1 << "'s volume is:  ";
    b[i].dis_value();
  }

  return 0;
}
void box::get_value() {
  cout << "Please input length,width,height: ";
  cin >> length >> width >> height;
}
void box::volume() { vol = length * width * height; }
void box::dis_value() { cout << vol << endl; }
