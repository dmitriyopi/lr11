#include <iostream>
#include <string>
#include <windows.h>
#include <cstring>  
using namespace std;
bool isgolosniy(char verb) // повертає тру якщо є голосні 
{
    return !(verb == 'a' || verb == 'e' || verb == 'i' || verb == 'o' || verb == 'u' ||
        verb == 'A' || verb == 'E' || verb == 'I' || verb == 'O' || verb == 'U');
}
void foo() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char S[100]; 
    cout << "Input line:" << endl;
    cin.getline(S, 100);
    char words[25] = "";
    for (int i = 0; S[i] != '\0'; i++) {
        if (isgolosniy(S[i])) {
            words[strlen(words)] = S[i];
        }
        else if (strlen(words) > 0) {
            cout << words << endl;
            words[0] = '\0';
        }
    }
    if (strlen(words) > 0) {
        cout << words << endl;
    }
}
int main() {
    foo();
    return 0;
}
