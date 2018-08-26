#include <iostream>

using namespace std;
int main(){

    cout << "Help Steven, a Nightingale Bar bouncer, decide if he should allow a person to enter the said bar based on its rules and standards. \n \n";

    int age;
    int money;
    
    cout << "Enter age = ";
    cin>> age;

    cout << endl << "Enter money = ";
    cin >> money;

    if((age>=18) && (money>=500)){
    cout<< endl<<"A person is allowed to come in!";}

    else if(((age<18 && money<500) || (age<18 && money>=500) || (age>=18 && money<500))){
    cout << endl << "A person is not allowed to come in!";}

    return 0;
}