 #include<iostream>
 #include"stack.h"

 void cal(int op,int op1,int op2){
    int r;
    switch(op){
        case '+':
        r= op2 +op1;
        break;

        case '-':
        r= op2 - op1;
        break;

        case '*':
        r= op2 * op1;
        break;
        
        case '/':
        r= op2 / op1;
        break;
    }
    return r;
 }

 void oprater(int x){
   if(x=='+' || x =='-'|| x=='*'||x=='/')
    return 1;
else return 0;
   

 }
 void main(){

    char postfix[50];
    int p1,p2,r,i=0;

    while(postfix[i]){
    if(postfix[i]!=oprater()){
        p1= pop();
        p2= pop();
        r=cal(postfix[i],p1,p2);
        push(r);
    }
    else{
        push(postfix[i]);
    }
}

    return 0;
 }