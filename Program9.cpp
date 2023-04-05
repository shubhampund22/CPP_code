/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Pattern(class name),Accpect,Display_Rev
//  Description :      	Display Elements
//  Input :             int
//  Output :         	int
//  Date :              12/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class Display_Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Display_Pattern()
        {
            this->iRow = 0;
            this->iCol = 0;
        }
        void Accept()
        {
            cout<<"Please Enter the size of Row:"<<endl;
            cin>>this->iRow;
            cout<<"Please Enter the size of coloum:"<<endl;
            cin>>this->iCol;
        }
        void Pattern()
        {
            for(int i = 0; i < this->iRow; i++)
            {
                for(int j = 0; j < this->iCol; j++)
                {
                    cout<<"*"<<"\t";
                }
                cout<<endl;
            }
        }
};

//////////////////////////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat Display elemets from array in reavse Application
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display_Pattern obj;
    obj.Accept();
    obj.Pattern();

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