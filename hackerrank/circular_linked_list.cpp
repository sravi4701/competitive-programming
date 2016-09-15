#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node * next;
};
struct node * head=NULL;
struct node* createnode(int info)
{
        struct node *temp=(struct node * ) malloc(sizeof(struct node ));
        if(temp==NULL)
        {
		cout << "OVERFLOW" <<endl;
                cout << "cannot insert element " <<endl;
                exit(0);
        }
        temp->data=info;
        temp->next=NULL;
        return temp;
}
void Insert()
{
        int n=1,data,pos;
        cout << "Enter the data " <<endl;
        cin>>data;
        cout << "Enter the position you want to insert " <<endl;
        cin>>pos;
        struct node* newnode=createnode(data);
        if(head==NULL)
        {
                newnode->next=newnode;
                head=newnode;
                cout << "insertion success" <<endl;
        }
        else if(pos==1)
        {
                struct node*temp=head;
                while(temp->next!=head)
                {
			temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=head;
                head=newnode;
                cout << "insertion success " <<endl;
        }
        else
        {
		struct node *temp=head;
		while(temp->next!=head and n<pos-1)
		{
                        temp=temp->next;
                        n++;
		}
		if(n+1==pos)
		{
                        newnode->next=temp->next;
                        temp->next=newnode;
                        cout << "insertion success" <<endl;
		}
		else cout << "invalide" <<endl;
        }
}
void Delete()
{
	int n=1, pos;
        cout << "Enter the position you want to delete" <<endl;
        cin>>pos;
        struct node *temp=head;
        if(pos==1)
        {
		struct node *prev;
                while(temp->next!=head)
                {
			temp=temp->next;
                }
                prev=head;
                head=head->next;
                temp->next=head;
                free(prev);
        }
        else
        {
		struct node *prev;
                while(temp->next!=head and n<pos)
                {
			prev=temp;
                        temp=temp->next;n++;
                }
                if(n==pos)
                {
			prev->next=temp->next;
			free(temp);
		}
		else
		{
			cout << "can't delete wrong position " <<endl;
		}
        }

}
void Display()
{
	struct node *temp=head;
	while(temp->next!=head)
	{
                cout << temp->data <<" ";
                temp=temp->next;
	}
	cout << temp->data << endl;
}
int main()
{
	char ch;
	int t;
        do
        {
                cout << "ENTER YOUR CHOICE : " <<endl;
                cout << "1.Insert\n2.Delete\n3.Display"<<endl;
                cin>>t;
                switch(t)
                {
                        case 1:
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			default:
				cout << "YOU ENTERED WRONG CHOICE !!!! " <<endl;
				cout << "PLEASE ENTER VALID CHOICE "  <<endl;
				break;
                }
                cout << "DO YOU WANT TO PERFORM SOME OPERATION  AGAIN (Y/N) : " <<endl;
                cin>>ch;
        }while(ch!='N');
}
