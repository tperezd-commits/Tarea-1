#include <iostream>

using namespace std;

int addFive(int num) {
    cout << "Adding 5 to " << num << endl;
    return num + 5;

}

int main(){ 
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = addFive(num);
    cout << "Result: " << result << endl;
    return 0;

}