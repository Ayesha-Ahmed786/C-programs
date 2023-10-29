#include <stdio.h>
#include <ctype.h>
#include <string.h>
// QNo:1 Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.

// //Using "for" loop.
// int main(){
//     int sum,i,num;
//     printf("How many numbers: ");scanf("%d",&num);
//     for(i=1;i<=2*num-1;i+=2){
//         printf("%d ",i);
//     }}

// //Using "while" loop.
// int main(){
//     int i=1;int sum,num;
//     printf("How many numbers: ");scanf("%d",&num);
//     while (i<=2*num-1){
//         printf("%d ",i);
//         i+=2;
// }}

// //Using "do-while" loop.
// int main(){
//     int i=1;int sum,num;
//     printf("How many numbers: ");scanf("%d",&num);
//     do {
//          printf("%d ",i);
//          i+=2;}
//     while (i<=2*num-1)
// }
// //QNo:2 Write a C program to make the following pattern as a pyramid with an asterisk.  
// int main(){
// int i,j,k,lines;
// printf("Enter no of lines: ");
// scanf("%d",&lines);
// for (i=1;i<-lines;i++){
// for (j-lines-1;j>=i;j--){
// printf(" ");
// }
// for (k=1;k<i+1;k++){
//     printf("* ");
// }
// printf("\n");
// }
// return 0;
// }

// //QNO:3 Write a C program to compare two strings without using string library functions.
// int main() {
// int len1=0,len2=0,i,j;
// char str1[20]="";
// char str2[20]="";
// printf("Input str1: "); scanf("%s", str1);
// printf("Input str2: ");scanf("%s",str2);
// for (len1=0;str1[len1]!='\0'; len1++);
// for (len2=0;str2[len2]!='\0'; len2++);
// if (len1!=len2){
// printf("Both strings are not equal");
// }
// else{
// for(i=0;i<=len1-1;i++){
// if (str1[i]!=str2[i]) {
// printf("Both strings are not equal");
// return 0;
// }}
// printf("Both strings are equal");
// }
// return 0;
// }

// //Qno:4 Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.
// int main(){
//     int i;
//     char sen[]="I am Ayesha Ahmed";
//     int len_sen=strlen(sen);
//     for (i=0;i<=len_sen-1;i++){
//         if (sen[i]>='a' && sen[i]<='z'){
//             sen[i]-=32;}
//         else if (sen[i]>='A'&& sen[i]<='Z'){
//             sen[i]+=32;
//         }
//     }
//     printf("%s",sen);
// }

// //Qno:5 Write a C program to print all unique elements in an array.
// int main(){
//     int i,j;
//     char sen[]="I am Ayesha Ahmed";
//     for (i=0;sen[i]!='\0';i++){
//         int count=0;
//         for (j=i+1;sen[j]!='\0';j++){
//             if (tolower(sen[i])==tolower(sen[j])){
//                 count+=1;
//             }
//         }
//     if (count==0 && sen[i]!=' '){
//         printf("%c\n",sen[i]);}  
//     }
// }
  
// //Qno:6 Write a C program to add two distances in inch-feet system using structures.
// struct distance{
//     int feet;
//     float inch;
// };
// int main(){
//     struct distance d1;
//     struct distance d2;
//     printf("Enter distance_1 in feet: ");
//     scanf("%d",&d1.feet);
//     printf("Enter distance_1 in inch: ");
//     scanf("%f",&d1.inch);
//     printf("Enter distance_2 in feet: ");
//     scanf("%d",&d2.feet);
//     printf("Enter distance_2 in inch: ");
//     scanf("%f",&d2.inch);
//     int res_feet=d1.feet+d2.feet;
//     int res_inch=d1.inch+d2.inch;
//     printf("Sum of distances in feet is: %d\nSum of distances in inch is: %f",res_feet,res_inch);
// }
