

#include <iostream>
#include <cstdlib>
using namespace std;

#define size 15
int stak[15];
int tos = -1;

 int empty(){
    if(tos == -1)
    return 1;
else
    return 0;
}
int full(){
    if(tos == size-1)
    return 1;
    else 
    return 0;
}
void push(int x){
    if(!full())
    { 
        tos++;
      stak[tos]=x;
    }
    else{
        exit(0);
    }
 }
int pop (){
    int x;
    if(!empty()){
        x = stak[tos];
        tos--;
        return x;
    }
    else{
     exit(0);}
}
int peek(){
    if(!empty()){
       return stak[tos];   }
    else{
        exit(0);  }
}
int  main(){
    int n, element,x;
    char ch;
    while(1)
    { 
        cout<<"which function you want to do eneter ther no:";
        cin>>n;

        switch(n)
        {
            case 1:
              cout<<"eneter element which you want to add:";
              cin >> element;
              push(element);
              cout<<"desplay tos:"<<stak[tos]<<endl;
              break;
            case 2:
              x = pop();
              cout<<x<<endl;
              break;
            case 3:
              x = peek();
              cout << x <<endl;
              break;
        }
        cout<<"want to continue"<<endl;
        cin>>ch;
        if(ch == 'n')
        break;
    }
    return 0;
}
