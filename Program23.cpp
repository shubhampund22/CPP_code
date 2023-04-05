/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountSmall
//  Description :      	this funaction return Count of of Small Latter 
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountSmall(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        if((*cName >= 'a') && (*cName <= 'z'))
        {
            iCnt++;
        }
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to find count of small latters
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = CountSmall(cName);
    cout<<"Count of small latters is: "<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  ShubhamL
//  Output: 6
//
//  input:  ShubhamLL pundll
//  Output: 10
//
////////////////////////////////////////////////////////////////////////