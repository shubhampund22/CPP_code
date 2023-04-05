/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountSpace
//  Description :      	this funaction return Count of of blank space 
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountSpace(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        if(*cName == ' ')
        {
            iCnt++;
        }
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to find count of blank space
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = CountSpace(cName);
    cout<<"Count of space is: "<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  ShubhamL
//  Output: 0
//
//  input:  ShubhamLL pundll
//  Output: 1
//
////////////////////////////////////////////////////////////////////////