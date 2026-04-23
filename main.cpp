// University of Arkansas at Little Rock
// Department of Computer Science
// CPSI 28003: Algorithms
// Fall 2026
// Project 2: Infix to Postfix Conversion, Bonus: evaluate arithmetic expressions
// for the results. This program is not a menu-driven.
// Due Date: April 23, 2026, Thursday
// Name: Karleigh Branscomb
// ID-number (Last 4 Digits): Your ID number
// Description of the Program (2-3 sentences): This program converts infix
// arithmetic expressions to postfix. Each operator and operand is
// separated by at least one spaces
// Date Written:4-16-26
// Date Revised:4-16-26

#include <iostream>
#include <string>
#include <stack>
#include <string>
#include <cmath>

// you can type an arithmetic expression with no, one or more than one spaces
// between each operator and operand
// If no spaces is given between each operator and operand, this function will add
// spaces to them

int Operations(char op){
    if(op == '^'){
        return 4;

    }else if(op == '*' || op == '/'){
        return 3; 

    }else if(op == '+' || op == '-'){
        return 2;

    }else{
        return 1; 
    }

}


std::string InfixToPostfix(char* str){
    std::stack<char> postfix;
    std::string output;


    for(int i = 0; str[i] != '\0'; i++){

        if(str[i] == ' '){
    
            continue;
        }

        if(str[i] >= '0' && str[i] <= '9'){

            output += str[i];
            output += ' ';

        } else if(str[i] == '('){

            postfix.push('(');
            

        
        } else if(str[i] == ')'){

    
            while(!postfix.empty() && postfix.top() != '('){
                output += postfix.top();
                output += ' ';
                postfix.pop();
            }


            if(!postfix.empty()){

                postfix.pop();
            }

        } else {  
            while (!postfix.empty() && postfix.top() != '(' && ((Operations(postfix.top()) > Operations(str[i])) || (Operations(postfix.top()) == Operations(str[i]) && str[i] != '^'))){
               
                output += postfix.top();
                output += ' ';
                postfix.pop();

            }

            postfix.push(str[i]);

        }
    }
    while (!postfix.empty()){

        output += postfix.top();
        output += ' ';
        postfix.pop();

    }
   
    return output;
}


char* AddDelimetersToStr(char* str)
{

    int spacesNeeded = 0;
    int length = 0;
    while (str[length] != '\0') // hit enter on my computer, // it produces \0, maybe your computer may produce different
    {
        if (str[length] != ' ')
        spacesNeeded = spacesNeeded + 1;

        length = length + 1;
    }


    int size = length + spacesNeeded + 1;
    char* adjustedStr = new char[size];


    // insert delimeters between operands and operators
    int newInx = 0;

    for (int inx=0; inx<length; inx++)
    {

        if (str[inx] != ' ')
        {
            adjustedStr[newInx] = str[inx];
            newInx = newInx + 1;
            adjustedStr[newInx] = ' ';
            newInx = newInx + 1;
        }
    }


    adjustedStr[newInx] = '\0';
    std::cout << "string with delimteres: " << adjustedStr << "\n";
    //system("PAUSE");
    return adjustedStr;
}











int main()
{
// input arithmetic expression should be less than 80 characters
    char* str = new char[80];

    while (1) // type ccontrol_c to exit the loop
    {
        // you can assume legal arithemic expressions only
        std::cout << "Enter an arithmetic equation..." << "\n";
        std::cin.getline(str, 80);
        str = AddDelimetersToStr(str);
        std::cout << InfixToPostfix(str) << "\n";
        
    }

    return 0;

}
