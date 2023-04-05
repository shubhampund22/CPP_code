/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	ArrayX(class name),Accpect,Summation
//  Description :      	Display Summation
//  Input :             int
//  Output :         	int
//  Date :              12/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class ArrayX
{
    private:
        int iNo;
        int *Arr;

    public:
        ArrayX(int iSize)
        {
            this->iNo = iSize;
            Arr = new int[iNo];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements:"<<endl;

            for(iCnt = 0; iCnt < iNo; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        int Summation()
        {
            int iSum = 0;
            for(int i = 0; i < this->iNo; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};

///////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat Summation of Array elements Application
////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize,iRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>iSize;
    ArrayX obj(iSize);
    obj.Accept();
    iRet = obj.Summation();
    cout<<"Summation is: "<<iRet<<endl;

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  4,  10  20  30  40
//  Output: 100
//
//  input:  3,  -15 35  -5
//  Output: 15
//
////////////////////////////////////////////////////////////////////////