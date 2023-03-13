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
string status_2 (double rata, double nil){
  if (rata >= 60 || nil >= 70)
    return "Lulus";
  else 
    return "Gagal";
}

int main () {
  double nilM, nilB;
  cout << "nilai matematika = ";
  cin >> nilM;
  cout << "nilai Bahasa = ";
  cin >> nilB;
  cout << "status kelulusan = " << status (rerata(nilM, nilB));
  cout << "\nstatus kelulusan 2 = " << status_2 (rerata(nilM, nilB), nilM);
}