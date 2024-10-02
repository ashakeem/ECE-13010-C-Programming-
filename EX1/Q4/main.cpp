#include <iostream>
using namespace std;

int main(){
int sum = 0;
int i = 1;

while (i <= 100) {
    sum += i;
    i++;
}

cout << "Sum from 1 to 100 using while loop is: " << sum << endl;

return 0;
}