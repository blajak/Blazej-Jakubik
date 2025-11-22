#include <iostream>
using namespace std;

 bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2;i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
  
  
int main()
  {
    int x;
    cin >> x;

    if(x <= 0)
      {
        cout << "Podana liczba nie jest dodatnia" << endl;
        return 0;
      }

    cout << x << " ";
    if(czy_pierwsza(x))
      cout << "to jest liczba pierwsza";
    else
      cout << "to nie jest liczba pierwsza";
      
    cout << endl;

    return 0;
  }
