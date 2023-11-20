#include <stdio.h>
#include <stdlib.h>
// struct Contact
// {
//   char name[20];
//   char email[20];
//   char phone[20];
// };


// int main ()
// {
//   int i = 0, numcontacts = 0;
//   struct Contact *contact=NULL;
//   while (1)
//     {
//       printf
// 	("\n\nAddress book menu\nPress 1 to  Enter a new contact\nPress 2 to delete a contact\nPress 3 to view Address book\nPress 4 to exit\nEnter your choice: ");
//       int choice;
//       scanf ("%d", &choice);
//       switch (choice)
// 	{
// 	case 1:
//         numcontacts++;
//         contact=realloc(contact,numcontacts*sizeof(struct Contact));
//         printf ("\nEnter name of Contact %d: ", i + 1);
//         scanf ("%s", contact[i].name);
//         printf ("\nEnter email of Contact %d: ", i + 1);
//         scanf ("%s", contact[i].email);
//         printf ("\nEnter Phone no of Contact %d: ", i + 1);
//         scanf ("%s", contact[i].phone);
//         i++;
//         break;
//     case 2:
//     int ind;
//         if (contact==NULL){
//             printf("Adress book is empty");
//         }
// 	    for (int j=0;j<i;j++){
// 	        printf("\nRecord of Adress %d\n",j+1);
// 	        printf("\nName of contact %d is %s",j+1,contact[j].name);
// 	        printf("\nEmail of contact %d is %s",j+1,contact[j].email);
// 	        printf("\nPhone no of contact %d is %s\n",j+1,contact[j].phone);
// 	    }
// 	    printf("\nEnter Adress no to be deleted: ");
// 	    scanf("%d",&ind);
// 	    if (ind<1|| ind>i){
// 	        printf("Invalid choice!!!");
// 	        break;
// 	    }
// 	    contact[ind-1]=contact[i-1];
// 	    i--;
// 	    contact=realloc(contact,i*sizeof(struct Contact));
// 	    break;
        
// 	 case 3:
// 	    if (contact==NULL){
// 	        printf("\nAdress book is empty");
// 	    }
// 	    for (int j=0;j<i;j++){
// 	        printf("\n\nRecord of Adress %d\n",j+1);
// 	        printf("\nName of contact %d is %s",j+1,contact[j].name);
// 	        printf("\nEmail of contact %d is %s",j+1,contact[j].email);
// 	        printf("\nPhone no of contact %d is %s",j+1,contact[j].phone);
// 	    }
// 	    break;
// 	   case 4:
// 	        free(contact);
// 	        printf("\nExiting Program....");
// 	        return 0;
// 	   default:
// 	    printf("Invalid choice! Please enter again...");
//         break;
// 	    }
	 
// 	  }
// 	 return 0;
//     }   
// // // --------------------------------------------QNO-2----------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node *createNode(int data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){
        fprintf(stderr,"Memory allocation failed");  //fprintf: to print output on stream not on console
                                                    // stderr: to print an error message  
        exit(1);                                             
    }
    newNode->data=data;
    newNode->next=NULL;
}
struct Node *insertAtBeginning(struct Node *head,int data){
    struct Node *newNode=createNode(data);
    newNode->next=head;
    return newNode;
}
struct Node *insertAtEnd(struct Node *head,int data){
    struct Node *newNode=createNode(data);
    if (head==NULL){
        return newNode;
    }
    struct Node *current=head;
    while (current->next!=NULL){
        current=current->next;
    }
    current->next=newNode;
    return newNode;
}
struct Node *insertAfter(struct Node *head,int data,int searchValue){
   struct Node *current=head;
   while(current->data!=searchValue && current!=NULL){
    current=current->next;
   }
if (current==NULL){
    fprintf(stderr,"Search Value not found");
    return head;
}
struct Node *newNode=createNode(data);
newNode->next=current->next;
current->next=newNode;
return head;
}
struct Node *insertBefore(struct Node *head,int data,int searchValue){
   struct Node *current=head;
   struct Node *prev=NULL;

   while(current->data!=searchValue && current!=NULL){
    prev=current;
    current=current->next;
   }
if (current==NULL){
    fprintf(stderr,"Search Value not found");
    return head;
}
struct Node *newNode=createNode(data);
if (prev==NULL){
    head=newNode;
    newNode->next=current;
    return head;
}
prev->next=newNode;
newNode->next=current;
return head;
}
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
int lenNode(struct Node *head){
    struct Node *current=head;
    int count=0;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    // printf("%d",count);
    return count;
}
struct Node *sortNode(struct Node *head){
   int length=lenNode(head);
   struct Node *current=NULL;
   struct Node *nextNode=NULL; 
   int i=0,j=0;
   while(i<length-1){ 
    current=head;
    nextNode=current->next;
    while(j<length-1-i){
        if (current->data>nextNode->data){
            int temp=current->data;
            current->data=nextNode->data;
            nextNode->data=temp;
        }
        current=current->next;
        nextNode=current->next;
        j++;
    }
    j=0;
    i++;
   }
   return head;
}

struct Node *MergeSortNodes(struct Node *head1,struct Node *head2){
        struct Node *current=head1;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=head2;
        struct Node *sortedNode=sortNode(head1);
        return sortedNode;
}
int main() {
struct Node* head1 = NULL;
struct Node* head2 = NULL;
struct Node* sortedNode = NULL;
// Insert nodes at the beginning
head1 = insertAtBeginning(head1, 5);
head1 = insertAtBeginning(head1, 4);
head1 = insertAtBeginning(head1, 3);
head1 = insertAtBeginning(head1, 2);
head1=insertAtBeginning(head1,1);
//head 2-->
head2=insertAtBeginning(head2,11);
head2 = insertAtBeginning(head2, 9);
head2 = insertAtBeginning(head2, 7);
head2 = insertAtBeginning(head2, 5);
head2 = insertAtBeginning(head2, 3);
sortedNode=MergeSortNodes(head1,head2);
printList(sortedNode);
return 0;
}

// // -----------------------------------QNO:3----------------------------------------------------------------
// // Define a structure for a node in the linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
// int data;
// struct Node* next;
// };
// // Function to create a new node
// struct Node* createNode(int data) {
// struct Node* newNode = (struct Node*)malloc(sizeof(struct
// Node));
// if (newNode == NULL) {
// fprintf(stderr, "Memory allocation failed\n");
// exit(1);
// }
// newNode->data = data;
// newNode->next = NULL;
// return newNode;
// }
// // Function to insert a node at the beginning of the linked list
// struct Node* insertAtBeginning(struct Node* head, int data) {
// struct Node* newNode = createNode(data);
// newNode->next = head;
// return newNode;
// }
// int *arr(struct Node* head){
// 	int *array=NULL;
// 	int i=0;
// 	struct Node *current=head;
// 	while (current!=NULL)
// 	{   i++;
// 		int data=current->data;
// 		current=current->next;
// 		array=realloc(array,i*sizeof(int));
// 		 array[i-1]=data;
// 	}
// 	return array;
// }
// int main() {
// struct Node* head= NULL;
// // Node 1
// head= insertAtBeginning(head, 3);
// head = insertAtBeginning(head, 2);
// head = insertAtBeginning(head, 1);
// int *array=arr(head);
// int size=sizeof(array)/sizeof(array[0]);
// for(int i=0;i<=size;i++){
// 	printf("\n %d ",array[i]);
// }
// return 0;
// }
// ------------------------------------------------QNO:4--------------------------------------------------
// Define a structure for a node in the linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct
Node));
if (newNode == NULL) {
fprintf(stderr, "Memory allocation failed\n");
exit(1);
}
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}
struct Node *deleteOddInd(struct Node *head){
struct Node* current = head->next;
struct Node* prev = head;
struct Node* newNode = NULL;
while (current != NULL && prev!=NULL){
    prev->next=current->next;
    prev=current->next;
    struct Node *temp=current;
    if (prev!=NULL){
    current= prev->next;}
    free(temp);
} 
  return head;  
}
// Function to print the linked list
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
int main() {
struct Node* head= NULL;
head= insertAtBeginning(head, 2);
head= insertAtBeginning(head, 3);
head= insertAtBeginning(head, 4);
head= insertAtBeginning(head, 5);
head = insertAtBeginning(head, 6);
head = insertAtBeginning(head, 7);
head = insertAtBeginning(head, 8);
head = insertAtBeginning(head, 9);
head=deleteOddInd(head);
printList(head);
}
