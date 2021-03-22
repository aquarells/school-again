#include <iostream>
#include <limits>

using namespace std;

int wczytajInt() {
  int x = 0;

  while(true) {
     try {
        std::cin >> x;
        break;
     }
     catch(std::exception &) {
       std::cin.clear();
       std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');
       std::cout << "Postaraj sie bardziej: ";
     }
  }
  return x;
}

int main()
{
    std::cin.exceptions(std::ios::failbit | std::ios::badbit);

    std::cout << "Podaj liczbe nr 1: ";
    int a = wczytajInt();
    std::cout << "Podaj liczbe nr 2: ";
    int b = wczytajInt();
    std::cout << "Suma: " << a+b << '\n';
    return 0;
}
