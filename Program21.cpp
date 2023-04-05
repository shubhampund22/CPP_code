/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountL
//  Description :      	this funaction return Count of L char 
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountL(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        if((*cName == 'l') || (*cName == 'L'))
        {
            iCnt++;
        }
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to find count of L
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = CountL(cName);
    cout<<"Count of L is: "<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  ShubhamL
//  Output: 1
//
//  input:  ShubhamLL pundll
//  Output: 4
//
////////////////////////////////////////////////////////////////////////