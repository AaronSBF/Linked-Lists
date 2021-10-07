#include <iostream>

using namespace std;

 struct node{
   int number;
   node* next;
   };

int main()
{


   node* list_ = NULL;

   node* n = new node;

   if (n==NULL){
   return 1;
   }
     n->number = 1;
   n->next = NULL;

   list_ = n;


   node* n2 = new node;
   if(n==NULL){
   delete list_;
   return 1;
   }
    n2->number = 2;
    n2->next = NULL;

   list_->next = n2;

    node* n3 = new node;
   if (n2== NULL){
    delete list_->next;
    delete list_;

   }
   n3->number = 3;
   n3->next = NULL;

   list_->next->next = n3;

   for(node* temp = list_; temp!=NULL; temp = temp->next){

    cout << temp->number <<endl;
   }

   while(list_!=NULL){
    node* temp = list_->next;
    delete list_;
    list_ = temp;
   }

}
