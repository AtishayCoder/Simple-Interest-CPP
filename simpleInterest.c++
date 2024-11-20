#include <iostream>
using namespace std;

int main()
{
    float principal = 1000;
    float time = 3.5;
    float rate = 5;
    float principal_interest = principal * rate * time / 100;
    cout << principal_interest << endl;
}