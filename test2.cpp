#include <iostream>
#include <iomanip>
using namespace std;

/*main()
{
    int a = 45;
    float b = 4.234234234;
    double c = 3.3252346456454567;

    int d = 8974;

    cout << a << endl << setprecision(50) << b << endl << c << endl << d << endl;
}
*/
// setprecision example
/*#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  double f =3.14159;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}
*/
int main()
{ 
  int a;
  float i;

  cout << "enter a: " << endl;
  cin >> a;
  i = a/2.0;
  cout << i << endl;
  
}