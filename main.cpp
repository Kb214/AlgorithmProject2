#include <iostream>
#include <string>
#include <stack>

// using namespace std;
// // you can type an arithmetic expression with no, one or more than one spaces
// // between each operator and operand
// // If no spaces is given between each operator and operand, this function will add
// // spaces to them

// string InfixToPostfix(char* str);


// char* AddDelimetersToStr(char* str)
// {

//     int spacesNeeded = 0;
//     int length = 0;
//     while (str[length] != '\0') // hit enter on my computer, // it produces \0, maybe your computer may produce different
//     {
//         if (str[length] != ' ')
//         spacesNeeded = spacesNeeded + 1;

//         length = length + 1;
//     }


//     int size = length + spacesNeeded + 1;
//     char* adjustedStr = new char[size];


//     // insert delimeters between operands and operators
//     int newInx = 0;

//     for (int inx=0; inx<length; inx++)
//     {

//         if (str[inx] != ' ')
//         {
//         adjustedStr[newInx] = str[inx];
//         newInx = newInx + 1;
//         adjustedStr[newInx] = ' ';
//         newInx = newInx + 1;
//         }
//     }


//     adjustedStr[newInx] = '\0';
//     //cout << "string with delimteres: " << adjustedStr << endl;
//     //system("PAUSE");
//     return adjustedStr;
// }





// int main()
// {
// // input arithmetic expression should be less than 80 characters
// char* str = new char[80];

// while (1) // type ccontrol_c to exit the loop
// {
//     // you can assume legal arithemic expressions only
//     cout << "Enter an arithmetic equation..." << endl;
//     cin.getline(str, 80);
//     str = AddDelimetersToStr(str);
//     cout << InfixToPostfix(str) << endl;
// }

// return 0;

// }


int main(){
    std::cout << "Hello!\n\n";
    return 0;
}