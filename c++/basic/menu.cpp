/* #include <iostream>
using namespace std;

int main() {

   int n;

   cout << "Enter a positive integer: ";
   cin >> n;

   // run a loop from 1 to 10
   // print the multiplication table
   for (int i = 1; i <= 10; ++i) {
       cout << n << " * " << i << " = " << n * i << endl;
   }

   return 0;
} */

/*
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
} */

/* #include<iostream>
using namespace std;
int main()
{
   int i,j,k;
   cout<<"enter first number";
   cin>>i;
   cout<<"enter second number";
   cin>>j;
   k=i+j;

   cout<<k;
   return 0;


} */

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
