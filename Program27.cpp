/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	StrLowerX
//  Description :      	this function change string capital to lower
//  Input :             string
//  Output :         	string
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void StrLowerX(char cName[])
{
    while(*cName != '\0')
    {
        if((*cName >= 'A')&&(*cName <= 'Z'))
        {
            *cName = *cName + 32;
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

    StrLowerX(cName);

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  SHUBHAML
//  Output: shubhaml
//
//  input:  ShubhamLL PuNdlL
//  Output: shubhamll pundll
//
////////////////////////////////////////////////////////////////////////