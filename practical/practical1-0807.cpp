#include<iostream>
using namespace std;
void traversal(int array[],int &size){
    if(size==0){
        cout<<"ERROR : empty array"<<endl;
        return ;

    }
    for(int i=0;i<size;i++){
        cout << array[i]<<" ";
    }
    cout << endl;
}
void insertion(int array[],int &size,int element,int capacity,int index)
{
    if(size == capacity || index >= capacity){
        return ;
    }
    if(index <= size){
    for(int i=size;i>0;i--){
        array[i]=array[i-1];    }

        array[index]=element;
        size++;
}
else{
    array[index]=element;}
    return;
}
void deletation(int array[],int &size,int index){
    if (index >= size || index < 0){
        cout<<"index of array is empty"<<endl;
    }
    for(int i=index;i<=size-1;i++){
        array[i]=array[i+1];
    }
    size--;

}
void searching(int array[],int &size , int capacity ,int element){
    for(int i=0;i<= size;i++){
        if(array[i]==element){
            cout <<"seraching element index is:"<<i<<endl;
        }
    }
}
int main(){

    int array[15]={11,12,13,14,15};
    int curentsize = 5;
    int capacity =15;
    int element;
    int index01;
    int index02;
    -
    cout<<"TRAVERSAL"<<endl;
    traversal(array,curentsize);

    cout<<"inserting"<<endl;
    cout<<"which element you wnat to insert :";
    cin>>element;
    cout<<"where you want to insert:";
    cin<< index01;
    insertion(array,curentsize,element,capacity,index01);

    cout<<"deletion"<<endl;
    cout<<"eneter index :";
    cin<<index02;
    deletation(array,curentsize,index02);


    cout<<"searching"<<endl;
    searching( array,curentsize  ,  capacity , element);


   return 0;
}