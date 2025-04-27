//https://github.com/TBmohammad/Procalc-cpp
#include <iostream>
#include <cmath>
using namespace std;
int n,x,y,re;
int basic(int n , int x , int y);
int pro(int n, int x);
int main() {
    cout << "Welcome to the Procalc(https://github.com/TBmohammad/Procalc-cpp)\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Factorial\n7. Prime Check\n8. Fibonacci Series\n";
    cout << "Enter your choice: ";
    cin >> n;
    if (n >= 1 && n <= 5) {
        cout << "Enter number 1: "; 
        cin >> x;
        cout << "Enter number 2: "; 
        cin >> y;
        cout << "Result: " << basic(n, x, y) << endl;
    } else if (n >= 6 && n <= 8) {
        cout << "Enter number: "; 
        cin >> x;
        if (n == 7) {
            re = pro(n, x);
            cout << "Result: " << (re == 2 ? "it is a prime number" : "it is not a prime number") << endl;
        } else if (n == 6) {
            re = pro(n, x);
            cout << "Result: " << re << endl;
        }else if (n == 8) {
            re = pro(n, x);
        }
    } else {
        cout << "Wrong choice (1-8)" << endl;
    }

    return 0;
}
int basic(int n , int x , int y){
    switch (n) {
        case 1: return x + y;
        case 2: return x - y;
        case 3: return x * y;
        case 4: return x / y;
        case 5: return pow(x, y);
        default: return 0;}}
int pro(int n, int x){
    int re = 0; 
    int a = 0, b = 1, c;  
    string r = ""; 
    switch (n){
    case 6: 
        re = 1;
        for (int i = 1; i <= x; i++)
            re *= i;
        break;
    case 7: 
        for (int i = 1; i <= x; i++){
            if (x % i == 0)
                re++;
        }
        break;
    case 8: 
        for (int i = 1; i < x-2; i++){
            c = a + b;
            if (c < x)
            r += to_string(c) + " "; 
            a = b;
            b = c;
        }
        cout << "Fibonacci Series: " << r << endl;
        break;
    default: 
        return 0; 
    }
    return re; 
}
