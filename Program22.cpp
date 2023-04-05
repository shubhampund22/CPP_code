/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountCapital
//  Description :      	this funaction return Count  of Capital Latter 
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountCapital(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        if((*cName >= 'A') && (*cName <= 'Z'))
        {
            iCnt++;
        }
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to Count  of Capital Latter 
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = CountCapital(cName);
    cout<<"Count of capital latters is: "<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  ShubhamL
//  Output: 2
//
//  input:  ShubhamLL pundll
//  Output: 3
//
////////////////////////////////////////////////////////////////////////