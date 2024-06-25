#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int lastTwoDigits = number % 100;
    int lastThreeDigits = number % 1000;
    std::cout << "Last two digits: " << lastTwoDigits << std::endl;
    std::cout << "Last three digits: " << lastThreeDigits << std::endl;
    
    return 0;
}

