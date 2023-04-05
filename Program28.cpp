/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	StrToggleX
//  Description :      	this function change toggle the string
//  Input :             string
//  Output :         	string
//  Date :              21/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void StrToggleX(char cName[])
{
    while(*cName != '\0')
    {
        if((*cName >= 'A')&&(*cName <= 'Z'))
        {
            *cName = *cName + 32;
        }
        else if((*cName >= 'a')&&(*cName <= 'z'))
        {
            *cName = *cName - 32;
        }
        
        cout<<*cName;
        cName++;
    }
    cout<<endl;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to change the string captial to small
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    StrToggleX(cName);

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  SHUBHAML
//  Output: shubhaml
//
//  input:  ShubhamLL PuNdlL
//  Output: sHUBHAMll pUnDLl
//
////////////////////////////////////////////////////////////////////////