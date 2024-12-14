// Loops is block statements which continuously until given condition gives false;
// There are three types of loops:
//  * For loop
//  * While loop
//  * Do-while loop

#include <iostream>
using namespace std;

int main (){
    
    // Printing 1 to 40 number using for loop;
    // For loop;
    // Syntax: for (initialization; condition; updation) { // Code here }
    for (int i = 1; i <= 40; i++)
        cout << "The value of i is by for loop: " << i << endl;
    
    // Printing 1 to 40 number using while loop;
    // while loop;
    // Syntax: while (condition) { // Code here }
    // Also known as entry control statements;
    int i = 1;
    cout << endl;
    while (i <= 40){
        cout << "The value of i is by while loop: " << i << endl;
        i++; // updation here
    }
    
    // Printing 1 to 40 number using do-while loop;
    // do-while loop;
    // Syntax: do { // code here} while (condition); ;
    // Also known as exit control statements;
    i = 1;
    cout << endl;
    do{
        cout << "The value of i is by do-while loop: " << i << endl;
        i++; // updation here
    }while (i <= 40);

    return 0;
}