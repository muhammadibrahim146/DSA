
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node( int value){
        data=value;
        next=nullptr;
        
    }
    //Node*head=nullptr;
    
    
    
};
 Node* head=nullptr;
 void insert(int value){
     Node*newNode=new Node(value);
     if(head==0){
         head=newNode;
     }
     else{
         Node*temp=head;
         while(temp->next!=nullptr){
             temp=temp->next;
         }
         temp->next=newNode;
     }
 }
 void print(){
     Node*temp=head;
     if(head==0){
         cout<<"list is empty";
         return;
     }
     while(temp!=0){
         cout<<temp->data;
         temp=temp->next;
     }
 }
 void delet(int value){
     Node*temp=head;
     if(head==0){
         cout<<"list is empty";
         return;
     }
     if(temp->data==value){
         head=head->next;
         delete temp;
         return;
     }
     else{
      Node*curr=temp->next;
      Node*pre=temp;
      while(curr!=nullptr){
          if(value==curr->data){
          pre->next=curr->next;
          delete curr;
          return;
          }
          
      
      curr=curr->next;
      pre=pre->next;
         
     }
     
 }
 }
 void search(int tosearch){
     Node*temp=head;
     if(head==0){
         cout<<"List is empty";
      return;   
     }
     if(temp->data==tosearch){
         cout<<"Value found";
         return;
     }
     else{
         while(temp!=nullptr){
             if(temp->data==tosearch){
                 cout<<"Value Found"<<"\n";
                 return;
             }
             else{
                 cout<<"No value Found"<<"\n";
                 return;
             }
             temp=temp->next;
         }
     }
 }
 void menu() {
    int choice, value;
    
    while (true) {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert a node\n";
        cout << "2. Delete a node\n";
        cout << "3. Display linked list\n";
        cout<<"4. Search a node\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                cout << value << " inserted successfully.\n";
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                delet(value);
                break;
            case 3:
                print();
                break;
                
            case 4:
            cout<<"Enter the  value To Search"<<"";
            cin>>value;
            search(value);
            break;
            case 5:
                cout << "Exiting program. Thank you!\n";
                return;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
}

int main() {
    
menu();

    return 0;
}
