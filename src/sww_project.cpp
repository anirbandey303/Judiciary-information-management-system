#include <bits/stdc++.h>
using namespace std;
struct Node { 
   char lawCode[20];
   char lawDesc[100];
   struct Node *next; 
}; 
struct Node *top;
class stack
{
	public:	
	void push(Node *pushNode) {
	   pushNode->next = top; 
	   top = pushNode;
	}
	void pop() {
	   if(top==NULL)
	      cout<<"\n\tNo more Laws left to delete."<<endl;
	   else {
	      cout<<"\n\t The deleted IPC Law is: "<< top->lawCode<<"\n\n"<<endl;
	      top = top->next;
	   }
	}
	void display() {
	   struct Node *ptr;
	//   cout<<"Stack elements are: test test";
	   if(top==NULL)
	      cout<<"\n\tThere are no Laws to display"<<endl;
	   else
	   {   
	      ptr = top; 
	      cout<<"\nThe Judiciary informations available are: \n"<<endl;
	      while (ptr != NULL) 
		  { 
	         cout<<"\n\t The IPC Code: "<<ptr->lawCode<<endl;
	        cout<<"\n\t\t The IPC Law Description: "<<ptr->lawDesc<<"\n\n"<<endl;
	         ptr = ptr->next; 
	      } 
	   }
	   cout<<endl;
	}
}obj;
int main() {
   int ch;
   Node *newNode;
   top=NULL;
      
   while(1) 
   {
   		cout<<"******************* M E N U ************************"<<endl;
   		cout<<"1) Enter a new Law to the System"<<endl;
	   	cout<<"2) Delete an old Law record"<<endl;
	   	cout<<"3) Display all the Law informations"<<endl;
	   	cout<<"4) Exit"<<endl;
      	cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
	  {
         case 1: 
		 	newNode=(Node*)malloc(sizeof(Node));           
			cout<<"\n Enter the IPC Law code: "<<endl;
			cin.ignore();
            gets(newNode->lawCode);
            cout<<"\nEnter the description of this Law: "<<endl;
            cin.ignore();
			gets(newNode->lawDesc);
            cout<<"\n\t NEW Law was registered: "<<newNode->lawCode<<"\n\n"<<endl;
            obj.push(newNode);
            break;
         
         case 2:
            obj.pop();
            break;
         case 3: 
            obj.display();
            break;
         
         case 4: 
            cout<<"Exit"<<endl;
            exit(1);
            break;
         
         default:
            cout<<"Invalid Choice!!!"<<endl;         
      }
   }
      return 0;
}  
