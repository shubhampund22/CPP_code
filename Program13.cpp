/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	DisplayCharArray
//  Description :      	this funaction return array of string
//  Input :             char
//  Output :         	char
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void DisplayCharArray(char *cName)
{
    int  i = 0;
    while(*cName != '\0')
    {
        cout<<*cName;
        cName++;
    }
    cout<<endl;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat the square of number
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cName [] = "Hello";
    DisplayCharArray(cName);

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  Hello
//  Output: Hello
////////////////////////////////////////////////////////////////////////