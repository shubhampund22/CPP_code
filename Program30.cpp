/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	StrRevX
//  Description :      	this function revese the string
//  Input :             string
//  Output :         	string
//  Date :              21/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void StrRevX(char cName[])
{
    char *start = cName;
    char *end = cName;
    char temp;

    while(*end != '\0')
    {
        end++;   
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout<<endl;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to revese the string
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    StrRevX(cName);
    cout<<"String after revserse : "<<cName<<endl;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  SHUBHAML
//  Output: LMAHBUHS
//
//  input:  ShubhamLL PuNdlL
//  Output: LldNuP LLmahbuhS
//
////////////////////////////////////////////////////////////////////////