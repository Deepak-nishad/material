#include <iostream>
using namespace std;
int main()
{

  int a, qty, rate, total;

  while (1)
  {
    cout << "\nMENU CARD \nSelect your drink \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.STALC\n";
    cin >> a;
    switch (a)
    {
    case 1:
      cout << "\nYou have selected Coffee.\n Enter the quantity :";
      cin >> qty;
      rate = 5;
      total = qty * rate;
      cout << "\nTotal amount :" << total;
      break;
    case 2:
      cout << "\nYou have selected Tea.\n Enter the quantity :";
      cin >> qty;
      rate = 10;
      total = qty * rate;
      cout << "\nTotal amount :" << total;
      break;
    case 3:
      cout << "\nYou have selected Cold coffee.\n Enter the quantity :";
      cin >> qty;
      rate = 15;
      total = qty * rate;
      printf("\nTotal amount :%d", total);
      break;
    case 4:
      cout << "\nYou have selected Milk shake.\n Enter the quantity :";
      cin >> qty;
      rate = 20;
      total = qty * rate;
      cout << "\nTotal amount :" << total;
      break;
    case 5:
      cout << "\nYou have selected Stalc.\n Enter the quantity :";
      cin >> qty;
      rate = 15;
      total = qty * rate;
      cout << "\nTotal amount :" << total;
      break;
    default:
      cout << "\nSorry Unavailable...s" << a;
      break;
    }
  }
}
