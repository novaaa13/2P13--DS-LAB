//1) Developa Menudrivenprogramtodemonstrate the followingoperations of Arrays
//——MENU——-
//1.CREATE
//2.DISPLAY
//3.INSERT
//4.DELETE
//5.LINEAR SEARCH
//6.EXIT

#include <iostream>
using namespace std;

int main() {
    
    int array[5];
    bool isCreated = false;
    int choice = 0;
    int size=5;

    while(choice!=6){
        cout<<"---MENU---"<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Insert"<<endl;
        cout<<"4. Delete"<<endl;
        cout<<"5. Linear Search"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Choose an option: ";
        cin>>choice;
        if(choice==1){
            for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
                array[i] = i+1;
            }
            cout<<"Array of size 5 created. \n";
            isCreated = true;
        }else if(choice==2){
            if(isCreated){
                cout<<"array is: \n";
                cout<<array[0]<<"\n";
                cout<<array[1]<<"\n";
                cout<<array[2]<<"\n";
                cout<<array[3]<<"\n";
                cout<<array[4]<<"\n";
            }else{
                cout<<"Array not created \n";
            }
        }else if(choice==3){
            int position,value;
            cout<<"Enter position where you wanna add: ";
            cin>>position;
            cout<<"Enter what you wanna add: ";
            cin>>value;
            for(int i=size;i>=position-1;i--){
                array[i]=array[i-1];
            }
            array[position-1]=value;
            for(int i=0;i<=sizeof(array)/sizeof(array[0]);i++){
                cout<<array[i]<<"\n";
            }
        }else if(choice ==4){
            if(isCreated==true){
                int position;
                cout<<"Enter position where you wanna delete: ";
            cin>>position;
            for(int i=position-1;i<=size;i++){
                array[i]=array[i+1];
            }
            size--;
            for(int i=0;i<=size-1;i++){
                cout<<array[i]<<"\n";
            }
            }
        }else if(choice==5){
            if(isCreated==true){
                int value;
                cout<<"Enter element you want to find: ";
                cin>>value;
                for(int i=0;i<size-1;i++){
                    if(array[i]==value){
                        cout<<"Your element was found at: "<<i;
                        break;
                    }
                }
            cout<<"\n";
            }else{
                cout<<"Array not created";
            }
        }else if(choice==6){
            cout<<"Exiting program \n";
        }else{
            cout<<"Invalid argument";
        }
        
    }
    
    return 0;
}










