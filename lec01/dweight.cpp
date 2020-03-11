#include <iostream>
using namespace std;

int main()
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  cout << "Dimensions: " << length << "x" << width << "x" << height << "\n";
  cout << "Volume (cubic inches): " << volume << endl;
  cout << "Dimensional weight (pounds): " << weight << endl;

  return 0;
}


