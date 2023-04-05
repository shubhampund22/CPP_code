/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Struct node, Insert_First, Insert_Last,
//						Delete_First, Delete_Last, Delete_At_Posotion,
//						Insert_At_Position, Display, Count.
//  Description :      	Singly Circular Liner Link list
//  Input :             int
//  Output :         	int
//  Date :              03/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE;

class SingllyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int iCnt;
    public:
        SingllyCLL();
        ~SingllyCLL();
        void Insert_First(int iNo);
        void Insert_Last(int iNo);
        void Insert_At_Position(int iNo, int iPos);
        void Delete_First();
        void Delete_Last();
        void Delete_At_Position(int iPos);
        void Display();
        int Count();      
};


SingllyCLL::SingllyCLL()
{
    iCnt = 0;
    Head = NULL;
    Tail = NULL;
}
SingllyCLL::~SingllyCLL()
{
    PNODE temp = Head;
    if(Head != NULL)
    {
        Head = Head->next;
        delete temp;
        temp = Head;
    }
}

void SingllyCLL::Insert_First(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
    if((Head == NULL)&&(Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
    iCnt++;
}

void SingllyCLL::Insert_Last(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
    if((Head == NULL)&&(Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
    iCnt++;
}
void SingllyCLL::Insert_At_Position(int iNo, int iPos)
{
    if((iPos < 1)||(iPos > (iCnt+1)))
    {
        cout<<"Invalid Position: "<<endl;
        return;
    }
    if(iPos == 1)
    {
        Insert_First(iNo);
    }
    else if(iPos == (iCnt +1))
    {
        Insert_Last(iNo);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;
        PNODE temp = Head;
        for(int i = 1; i < (iPos-1);i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCnt++;
    }
}
void SingllyCLL::Delete_First()
{
    if(Head == NULL && Tail ==  NULL)
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head -> next;
        delete Tail->next;

        Tail->next = Head;
    }
    iCnt--;
}
void SingllyCLL::Delete_Last()
{
    if(Head == NULL && Tail ==  NULL)
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        PNODE temp = Head;
        while(temp->next != Tail)
        {
            temp = temp->next;
        }
        delete Tail;
        
        Tail = temp;
        temp->next = Head;

        Tail->next = Head;
    }
    iCnt--; 
}
void SingllyCLL:: Delete_At_Position(int iPos)
{
    if((iPos < 1)||(iPos > (iCnt+1)))
    {
        cout<<"Invalid Position: "<<endl;
        return;
    }
    if(iPos == 1)
    {
        Delete_First();
    }
    else if(iPos == (iCnt +1))
    {
        Delete_Last();
    }
    else
    {
        PNODE temp = Head;
        for(int i = 1; i < (iPos-1);i++)
        {
            temp = temp->next;
        }
        PNODE tempDelete = temp->next;
        temp->next = temp->next->next;
        delete tempDelete;
        iCnt--;
    }
}
void SingllyCLL::Display()
{
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp -> next;
    }while(temp != Head);

    cout<<endl;
}
int SingllyCLL::Count()
{
    return iCnt;
}
int main()
{
    int iNo1,iRet = 0;
    SingllyCLL obj;
    cout<<"-------------------Welcome into the Singly LinkList Application----------\n";
	while(1)
	{
		int iNo,iPos = 0;
		cout<<"===============================================================================\n";
		cout<<"Please Enter For Insert First Elememt : 1\n";
		cout<<"Please Enter For Insert Last Elememt : 2\n";
		cout<<"Please Enter For Insert At Position Elememt : 3\n";
		cout<<"Please Enter For Delete First Elememt : 4\n";
		cout<<"Please Enter For Delete Last Elememt : 5\n";
		cout<<"Please Enter For Delete At Position Elememt : 6\n";
		cout<<"Please Enter For Display Elememt : 7\n";
		cout<<"Please Enter For Count Elememt : 8\n";
		cout<<"Please Enter For to Exit from Application  : 9\n";
		cout<<"===============================================================================\n";

		cout<<"Please enter Your Choice: --------\n";
		cin>>iNo;
		switch(iNo)
		{
            
			case 1:
				cout<<"Please Enter The Element:---\n";
				cin>>iNo1;
				obj.Insert_First(iNo1);
				break;
			case 2:
				cout<<"Please Enter The Element:---\n";
				cin>>iNo1;
				obj.Insert_Last(iNo1);
				break;
			case 3:
				cout<<"Please Enter The Element:---\n";
				cin>>iNo1;
				cout<<"Please Enter Position:--------\n";
				cin>>iPos;
				obj.Insert_At_Position(iNo1,iPos);
				break;
			case 4:
				obj.Delete_First();
				break;
			case 5:
				obj.Delete_Last();
				break;
			case 6:
				cout<<"Please Enter Position:--------\n";
				cin>>iPos;
				obj.Delete_At_Position(iPos);
				break;
			case 7:
				obj.Display();
				break;
			case 8:
				iRet = obj.Count();
				cout<<"The Count of Element is: "<<iRet<<endl;
				break;
			case 9:
				cout<<"=============Thank You For Using ME====================\n";
				return -1;
			default:
				cout<<"Invalid Position:\n";
				break;

		}

	}
    return 0;
}
