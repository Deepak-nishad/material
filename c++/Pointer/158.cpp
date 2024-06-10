#include <iostream>
#include <cstring>
using namespace std;

char *concat(const char *, const char *);

int main() {
    char first[10], second[10];
    cout << "Enter the first name : ";
    cin.getline(first, 10);

    cout << "Enter the second name : ";
    cin.getline(second, 10);

    char *final = concat(first, second);
    cout << final << endl;

    delete[] final; // Deallocate the dynamically allocated memory

    return 0;
}

char *concat(const char *s, const char *t) {
    int len1 = strlen(s);
    cout<<len1<<endl;
    int len2 = strlen(t);
    cout<<len2<<endl;
    char *final = new char[len1 + len2 + 2]; // +2 for space and null terminator

    strcpy(final, s);
    cout<<*final;
    final[len1] = ' '; // Add a space between the names
    strcpy(final + len1 + 1, t); // Concatenate the second name

    return final;
}

