/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Struct node, Insert_First, Insert_Last,
//						Delete_First, Delete_Last, Delete_At_Posotion,
//						Insert_At_Position, Display, Count.
//  Description :      	Doublly Circular Link list
//  Input :             int
//  Output :         	int
//  Date :              12/01/2023
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
}NODE,*PNODE;

class DoubllyLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int iCnt;
    public:
        DoubllyLL();
        ~DoubllyLL();
        void Insert_First(int iNo);
        void Insert_Last(int iNo);
        void Insert_At_Position(int iNo, int iPos);
        void Delete_First();
        void Delete_Last();
        void Delete_At_Position(int iPos);
        void Display();
        int Count();      
};


DoubllyLL::DoubllyLL()
{
    iCnt = 0;
    Head = NULL;
    Tail = NULL;
}
DoubllyLL::~DoubllyLL()
{
    PNODE temp = Head;
    if((Head == Tail->next))
    {
        Head = Head->next;
        delete temp;
        temp = Head;
    }
}

void DoubllyLL::Insert_First(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((Head == NULL)&&(Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = newn;
    }
    Tail = Head->prev;
    iCnt++;
}

void DoubllyLL::Insert_Last(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
       PNODE temp = Head;
       while(temp->next != NULL)
       {
            temp = temp->next;
       }
       temp->next = newn;
       newn->prev = temp;
    }
   
    iCnt++;
}
void DoubllyLL::Insert_At_Position(int iNo, int iPos)
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
        newn->prev = NULL;
        PNODE temp = Head;
        for(int i = 1; i < (iPos-1);i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next = newn;
        iCnt++;
    }
}
void DoubllyLL::Delete_First()
{
    if(Head == NULL)
    {
        cout<<"Link List is empty:"<<endl;
        return;
    }
    else if(Head->next == NULL)
    {
        delete Head;
        Head = NULL;
       
    }
    else
    {
        PNODE temp = Head;
        Head = Head -> next;
        Head->prev = NULL;
        delete temp;
       
    }
    iCnt--;
}
void DoubllyLL::Delete_Last()
{
    if(Head == NULL)
    {
        cout<<"Link List is empty:"<<endl;
        return;
    }
    else if(Head->next == NULL)
    {
        delete Head;
        Head = NULL;
    
    }
    else
    {
        PNODE temp = Head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        } 
        PNODE tempDelete = temp->next;
        delete tempDelete;
        temp->next = NULL;

    }
    iCnt--; 
}
void DoubllyLL:: Delete_At_Position(int iPos)
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
        temp->next->prev = temp;
        delete tempDelete;
        iCnt--;
    }
}
void DoubllyLL::Display()
{
    PNODE temp = Head;

    if(Head == NULL)
    {
        cout<<"Link List is empty"<<endl;
        return;
    }
    cout<<"|NULL|"<<"\t";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|"<<"\t";
        temp = temp->next;
    }

    cout<<"|NULL|"<<endl;
}
int DoubllyLL::Count()
{
    return iCnt;
}
int main()
{
    int iNo1,iRet = 0;
    DoubllyLL obj;
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
