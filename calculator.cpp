#include <iostream>
using namespace std;

double power(double bn, double pn){
    double result = 1;
    for(int i = 0; i < pn; i++){
       result = result*bn;
    }
    return result;
}


int main()
{

    bool x = true;
    while(x == 1 && x != 0){
        cout << "\n\n'e' for exponent, '+' for add., '-' for sub., '*' for mult., '/' for div." << endl;
        double fn;
        double sn;
        double exp;
        char op;
        double result;
        cout << "operator: ";
        cin >> op;

        if(op == '+'){
            cout << "first number: ";
            cin >> fn;
            cout << "second number: ";
            cin >> sn;
            result = fn + sn;

        } else if(op == '-'){
            cout << "first number: ";
            cin >> fn;
            cout << "second number: ";
            cin >> sn;
            result = fn - sn;
        } else if(op == '/'){
            cout << "first number: ";
            cin >> fn;
            cout << "second number: ";
            cin >> sn;
            result = fn / sn;
        } else if(op == '*'){
            cout << "first number: ";
            cin >> fn;
            cout << "second number: ";
            cin >> sn;
            result = fn * sn;
        } else if(op == 'e'){
            cout << "enter number: ";
            cin >> fn;
            cout << "enter exponent: ";
            cin >> exp;
            result = power(fn, exp);
        }

        cout << "result = " << result;
        cout << "\nif you want to stop, enter 0. if you want to continue, enter 1"<< endl;
        cin >> x;




    }
    cout << "see you later!" << endl;



    return 0;
}


