#include<iostream>

using namespace std;

// Script exploring the recursion concept in C++.

int nFactorial(int x);
int fibonacci(int x);
void listFactorial();
void listFibonacci();
int main(){

    listFactorial();
    listFibonacci();
    return 0;
}

int nFactorial(int x){

    // Function that returns x! recursively

    switch(x){
        case 0:
            return 1;
            break;
        case 1:
            return 1;
        default:
            return x*nFactorial(x-1);
    }

}

int fibonacci(int x){

    // Function that returns the x-th number in the Fibonacci sequence

    switch(x){
        case 1:
            return 1;
            break;
        case 2:
            return 2;
        default:
            return fibonacci(x-2)+fibonacci(x-1);
    }


}

void listFactorial(){

    // Given a number, function that returns the factorial of all numbers smaller or equal to that initial number.
    // Print these numbers in reverse order.

    int x;
    cout << "Please enter the last number for which you want to have the factorial for: " << endl;
    cin >> x;
    int holder[x+1];
    for(int i = 0; i < x+1; i++){
        holder[i] = nFactorial(i);
    }
    for(int i = x; i >= 0; i--){
        cout << i << "----" << holder[i]<< endl;
    }
}

void listFibonacci(){

    // Given a number, function that returns a list of all x-th Fibonacci numbers smaller or equal to that initial number.
    // Print these numbers in reverse order.

    int x;
    cout << "Please enter the amount of Fibonacci numbers you want: " << endl;
    cin >> x;
    int holder[x];
    for(int i = 0; i < x; i++){
        holder[i] = fibonacci(i+1);
    }
    for(int i = x-1; i >= 0; i--){
        cout << i << "----" << holder[i]<< endl;
    }
}
