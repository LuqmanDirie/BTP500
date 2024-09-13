// Luqman Dirie 108737222
#include <iostream>

using namespace std;

const int SIZE = 3;
int n[SIZE] = {100, 150, 88};
int d[SIZE] = {3, 4, 8};

// Question 1
void ModuloOperationAlgorithm(int a[], int b[]){
    int c = 0;
    for (int i = 0; i < SIZE; i++){
        c = a[i] % b[i];
        cout << "n[" << i <<"] % b[" << i <<"] = " << c << endl;
    }
}

// Question 2
int fibSeq(int x){
    if (x <= 0){
        return 0;
    } else if (x == 1){
        return 1;
    } else {
        return fibSeq(x - 1) + fibSeq(x - 2);
    }
}

int main(){
    int x;
    cout << "Course Name : BTP 500\nLab1 Question3\nStudent Name: Luqman Dirie\nPick a choice to execute a function\n1. Modulo operator [Enter 1]\n2. Fibonacci series [Enter 2]" << endl;
    cin >> x;
    if (x == 1){
        ModuloOperationAlgorithm(n, d);
        cout << "\n";
        return 0;
    } else if (x == 2){
        cout << "Fibonacci sequence at index 5 = " << fibSeq(5) << endl;
        cout << "Fibonacci sequence at index 17 = " << fibSeq(17) << endl;
        cout << "Fibonacci sequence at index 34 = " << fibSeq(34) << endl;
        return 0;
    } else {
        cout << "Enter an Appropriate option!";
    }

    cout << "Luqman Dirie, 108737222\nLab1, Modulo Operation Algorithm, Fibonacci sequence\n" << endl;    
    return 0;
}