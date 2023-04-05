/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Struct node, Insert_First, Insert_Last,
//						Delete_First, Delete_Last, Delete_At_Posotion,
//						Insert_At_Position, Display, Count, Find_Even
//  Description :      	Find even elements
//  Input :             int
//  Output :         	int
//  Date :              03/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


void Find_Perfect(int iNo)
{
    int iSum = 0;
    int temp = iNo;

    for(int i = 1; i <((iNo/2)+1); i++)
    {
        if((iNo)%i == 0)
        {
            iSum = iSum + i;
        }
    }
    if(iSum == temp)
    {
        cout<<"ENter Number is perfect"<<temp<<" ";
    }
    
    cout<<endl;

}



int main()
{
   
   Find_Perfect(6);

    return 0;
}