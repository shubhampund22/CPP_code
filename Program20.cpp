/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	StrLenX
//  Description :      	this funaction return lenght of string
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int StrLenX(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        iCnt++;
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to find lenght of string
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = StrLenX(cName);
    cout<<"Lenght of string is: "<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  Shubham
//  Output: Shubham
//
//  input:  Shubham pund
//  Output: Shubham pund
//
////////////////////////////////////////////////////////////////////////