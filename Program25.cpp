/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountVowels
//  Description :      	this function return Count of  Vowels 
//  Input :             string
//  Output :         	int
//  Date :              12/02/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int CountVowels(char cName[])
{
    int iCnt = 0;
    while(*cName != '\0')
    {
        if((*cName == 'a') || (*cName == 'e')  || (*cName == 'i') || (*cName == 'o') || (*cName == 'u'))
        {
            iCnt++;
        }
        cName++;
    }
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat to find count vowels
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout<<"Please Enter the String"<<endl;
    char cName [20];
    cin.getline(cName,20);

    int iRet = CountVowels(cName);
    cout<<"Count of space is: "<<iRet;

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