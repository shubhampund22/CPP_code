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

void DisplayCharArray(char cName[])
{
    int  i = 0;
    while(cName[i] != '\0')
    {
        cout<<cName[i];
        i++;
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
//  input:  4
//  Output: 16
//
//  input:  3
//  Output: 9
//
////////////////////////////////////////////////////////////////////////