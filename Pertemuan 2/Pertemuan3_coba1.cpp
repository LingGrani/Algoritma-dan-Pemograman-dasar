#include <iostream>
using namespace std;

double rerata (double a, double b){
  return (a+b)/2;
}
string status (double c){
  if (c >= 60)
    return "lulus";
  else
    return "gagal";
}

int main () {
  double nilM, nilB;
  cout << "nilai matematika = ";
  cin >> nilM;
  cout << "nilai Bahasa = ";
  cin >> nilB;
  cout << "status kelulusan = " << status (rerata(nilM, nilB));
}