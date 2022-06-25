#include <iostream>
using namespace std;
int main() {


    cout << " Hello Duniya " << endl;  //Print Function
    
    //There are The Variables in C++

    int _var = 1;
    char _charVar = 'H';
    float _floatVar = 1.55;
    bool _boolVar = false; 
    string _stringVar = "Hello Duniya";
    double _doubleVar = 1.55;
    
    cout << "You String is : " << _stringVar << endl;

    int size = sizeof(_doubleVar);
    cout<<"Size : " << size << endl;


   
   //Type Conversion In C++

    char new_Char = 25;
    cout<<"New char : " << new_Char << endl;

    int new_Int = 'H';
    cout<<"New int : " << new_Int << endl;


   // Operator Concept

    int a = 56;
    int b = 15;
    int c = 0;

    cout<< "The Addition of Theses: " << a+b << endl;
    cout<< "The Subtraction of Theses: " << a-b << endl;
    cout<< "The Multiplication of Theses: " << a*b << endl;
    cout<< "The Division of Theses: " << double(a/b) << endl;

    //Logical Operators "AND , OR & Not"

    // cout<< "The Logical Operands: " << (a&b) << endl;
    // cout<< "The Logical Operands: " << (a||b) << endl;
    // cout<< "The Logical Operands: " << !(c) << endl;




    return 0;
}