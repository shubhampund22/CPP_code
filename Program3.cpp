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

typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE;

class SingllyLL
{
    private:
        PNODE Head;
        int iCnt;
    public:
        SingllyLL();
        ~SingllyLL();
        void Insert_First(int iNo);
        void Insert_Last(int iNo);
        void Insert_At_Position(int iNo, int iPos);
        void Delete_First();
        void Delete_Last();
        void Delete_At_Position(int iPos);
        void Display();
        int Count();
        void Find_Even();
        void Find_Perfect(); 
};


SingllyLL::SingllyLL()
{
    iCnt = 0;
    Head = NULL;
}
SingllyLL::~SingllyLL()
{
    PNODE temp = Head;
    if(Head != NULL)
    {
        Head = Head->next;
        delete temp;
        temp = Head;
    }    
}

void SingllyLL::Insert_First(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    iCnt++;
}

void SingllyLL::Insert_Last(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    
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
    }
    iCnt++;
}
void SingllyLL::Insert_At_Position(int iNo, int iPos)
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
void SingllyLL::Delete_First()
{
    PNODE temp = Head;
    if(Head == NULL)
    {
        cout<<"LikedList is empty:"<<endl;
        return;
    }
    else
    {
        Head = temp->next;
        delete temp;
    }
    iCnt--;
}
void SingllyLL::Delete_Last()
{
    PNODE temp = Head;
    if(Head == NULL)
    {
        cout<<"LikedList is empty:"<<endl;
        return;
    }
    else if(Head->next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        PNODE tempDelete = temp->next;
        temp->next = NULL;
        delete tempDelete;

    }
    iCnt--; 
}
void SingllyLL:: Delete_At_Position(int iPos)
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


void SingllyLL::Display()
{
    PNODE temp = Head;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|  ";
        temp = temp->next;
    }
        cout<<"|"<<"NULL"<<"|  "<<endl;
}
int SingllyLL::Count()
{
    return iCnt;
}


void SingllyLL::Find_Even()
{
    PNODE temp = Head;
    cout<<"Even Elememnts are: \n";
    while(temp != NULL)
    {
        if((temp->data%2) == 0)
        {
            cout<<temp->data<<"  ";
        }
        temp = temp->next;
    }
    cout<<endl;
}

void SingllyLL::Find_Perfect()
{
    PNODE temp = Head;
    int itemp = 0;
    cout<<"Perfect Number are : \n";
    int iSum = 0;
    while(temp != NULL)
    {
        itemp = temp->data;
        iSum = 0;
        for(int i = 1; i <((itemp/2)+1); i++)
        {
            if((itemp)%i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    cout<<endl;

}



int main()
{
    int iRet = 0;
    int iNo1 = 0;
    SingllyLL obj;
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
        cout<<"Please Enter for Finding even elements from Application  : 10\n";
        cout<<"Please Enter for Finding pefect elements from Application  : 11\n";
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
            case 10:
				obj.Find_Even();
                break;
            case 11:
				obj.Find_Perfect();
                break;
			default:
				cout<<"Invalid Position:\n";
				break;

		}

	}
    return 0;
}