#include <iostream>
using namespace std;


struct node{
    int info;
    struct node*next;

}
struct node*first=NULL;
{
    struct node * temp;
    temp = (struct node *);
    mallo((size of struct node));
    temp -> int = x;
    temp -> next = null;
    return(temp);
}
void  insert_first()
{
     int x;
     struct node*temp;
     cin>>X;
     temp =create_node(x);
     if (first == null)
     {
        first =t;
     }
     else{
       X = first;
       while (x->next != null)
       {
        t-> =next;
        first=t;
       }
       

      }
    }
     void insert_last()
     {
        struct node*x,*t;
        t=create_node(x);
        f (first == null)
     {
        first =t;
     }
     else{
       X = first;
       while (x->next != null)
       {
        x = x->next;
       }
       x-> next=t;

     }
    }
     void insert(int pos,int x){
        struct node*t,*y;
        t=create_node(x);
        if(first==null)
        first = t;
       else {
        y = first;
        while(!pos-1)
        y=y->next;
       } 
       t->next=y->next;
       y->next=t;

     }
     void display(){
        struct node*temp;
        temp=first;
        while(tem!= null)
        {
            cout<<temp.info;
            temp=temp.next;
        }
     }
     int main(){

        int choice;
        while(1){
            cout<<"insert at first"<<endl;
            out<<"insert at last"<<endl;
            out<<"insert "<<endl;
            out<<"desply"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                insert_first();
                break;

                case 2:
                insert_last();
                break;

                case 3:
                insert();
                break;

                case 4:
                display()
                break;
            }

        }
     }

     
