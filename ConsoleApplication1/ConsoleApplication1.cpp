#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
class calculator {
private:
    double Num1, Num2;
public:
    calculator() {
        Num1 = 0;
        Num2 = 0;
    }
    void setNum1(double num1) {
        Num1 = num1;
   }
    void setNum2(double num2) {
        Num2 = num2;
    }
    double getNum1() {
        return Num1;
    }
    double getNum2() {
        return Num2;
    }
    double add() {
        double num1 = Num1;
        double num2 = Num2;
      return  num1 + num2;
    }
    double substract() {
        double num1 = Num1;
        double num2 = Num2;
        return  num1 - num2;
    }
    double multiply() {
        double num1 = Num1;
        double num2 = Num2;
        return  num1 * num2;
    }
    double divide() {
        double num1 = Num1;
        double num2 = Num2;
        if (num2==0)
        {
            cout << "Eror" << endl;
            return NULL;
        }
        return  num1 / num2;
    }
};

int main() {
    cout << "     SIMPLE CALCULATOR  " << endl;
    cout << "============================" << endl;
    int Choice=1;
   
    while (Choice < 4 && Choice>0) {
    cout << "Choose your operation from list bellow : " << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> Choice;
     double num1, num2;
    calculator myclcu;
    switch (Choice)
    {
    case 1:cout << "Please enter Number#1 :"; cin >> num1; myclcu.setNum1(num1);
        cout << "Please enter Number#2 :"; cin >> num2; myclcu.setNum2(num2);
        cout << "Answer is : " << myclcu.add()<<endl;
        break;
    case 2:cout << "Please enter Number#1 :"; cin >> num1; myclcu.setNum1(num1);
        cout << "Please enter Number#2 :"; cin >> num2; myclcu.setNum2(num2);
        cout << "Answer is : " << myclcu.substract()<<endl;
        break;
    case 3:cout << "Please enter Number#1 :"; cin >> num1; myclcu.setNum1(num1);
        cout << "Please enter Number#2 :"; cin >> num2; myclcu.setNum2(num2);
        cout << "Answer is : " << myclcu.multiply()<<endl;
        break;
    case 4:cout << "Please enter Number#1 :"; cin >> num1; myclcu.setNum1(num1);
        cout << "Please enter Number#2 :"; cin >> num2; myclcu.setNum2(num2);
        cout << "Answer is : " << myclcu.divide()<<endl;
        break;
    }
        if (Choice>4 || Choice<=0)
    {
    cout << "NOT AN OPTIN\nPLEASE choose From 1 => 4 to return to main menu\nOR Press any number to QUIT" << endl;
        cin >> Choice;
    }
    }
    
   
}


       
    

