/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_fact(class name),Accpect,Factorail
//  Description :      	Display Factorail
//  Input :             int
//  Output :         	int
//  Date :              12/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class Display_Fact
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout<<"Enter the Number:"<<endl;
            cin>>this->iNo;
        }
        void Factorail()
        {
            cout<<"Enter Numbers Factorail are"<<endl;
            for(int i = 1; i < (iNo/2+1); i++)
            {
                if((iNo%i) == 0)
                {
                    cout<<i<<endl;
                }
            }
        }
};

///////////////////////////////////////////////////////////////////////
//  This Program is used to demonstreat Factorail Application
////////////////////////////////////////////////////////////////////////

int main()
{
    Display_Fact obj;
    obj.Accept();
    obj.Factorail();

    return 0;
}

///////////////////////////////////////////////////////////////////////
//  input:  14
//  Output: 1   2   7
//
//  input:  30
//  Output: 1   2   3   5   6   10  15
//
////////////////////////////////////////////////////////////////////////