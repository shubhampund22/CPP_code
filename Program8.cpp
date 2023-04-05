/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_fact(class name),Accpect,Display_Rev
//  Description :      	Display Elements
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
        void Display_Rev()
        {
            int iSum = 0;
            for(int i = (iNo-1); i >= 0; i--)
            {
                cout<<Arr[i]<<"\t";
            }
        }
};

///////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat Display elemets from array in reavse Application
////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize,iRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>iSize;
    ArrayX obj(iSize);
    obj.Accept();
    obj.Display_Rev();

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  4,  10  20  30  40
//  Output: 10  20  30  40
//
//  input:  3,  -15 35  -5
//  Output: -15 35  -5
//
////////////////////////////////////////////////////////////////////////