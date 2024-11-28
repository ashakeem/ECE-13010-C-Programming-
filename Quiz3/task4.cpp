
#include <iostream>
using namespace std;

bool myislower(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

char mytoupper(char ch) {
    if (myislower(ch)) {
        return ch - 32;
    }
    return ch;
}

void convertToUppercase(char* phrase) {
    for (int i = 0; phrase[i] != '\0'; ++i) {
        phrase[i] = mytoupper(phrase[i]);
    }
}

int main() {
    char phrase1[] = "characters and $32.98";
    cout << "Before conversion: " << phrase1 << endl;
    convertToUppercase(phrase1);
    cout << "After conversion: " << phrase1 << endl;

    char phrase2[] = "I have an LLC, a GmbH, and a kaisha";
    cout << "\nBefore conversion: " << phrase2 << endl;
    convertToUppercase(phrase2);
    cout << "After conversion: " << phrase2 << endl;

    char phrase3[] = "Go up, Up, UP, and down, DowN";
    cout << "\nBefore conversion: " << phrase3 << endl;
    convertToUppercase(phrase3);
    cout << "After conversion: " << phrase3 << endl;

    return 0;
}
