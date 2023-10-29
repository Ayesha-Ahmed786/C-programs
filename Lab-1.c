//  #include <stdio.h>
//  #include<stdlib.h>
// // Qno:1
// int main(){
//     char ID[10];
//     int Hours;
//     float amount;
//     printf("Enter your Employee ID AND total worked hours And amount received per hour: ");
//     scanf("%s %d %f",ID,&Hours,&amount);
//     printf("ID: %s Salary: %.2f",ID,Hours*amount);
//     return 0;
// }

// // Qno:2
// int main(){
//     float height,width;
//     printf("Enter height AND width of rectangle: ");
//     scanf("%f %f",&height,&width);
//     printf("Perimeter of rectangle: %f\n",2*(height+width));
//     printf("Area of rectangle: %f",height*width);
//     return 0;
// }

// // Qno:3
// int main(){
//     float height;
//     printf("Enter your height in cms: ");
//     scanf("%f",&height);
//     if (height<150){
//         printf("Dwarf");
//     }
//     else if(height==150){
//         printf("Average");
//     }
//     else if(height>=165){
//         printf("Tall");
//     }
// }

// // Qno:4
// void decimal_to_binary(int n){
//     if (n==0){return;}
//     decimal_to_binary(n/2);
//     printf("%d",n%2);
// }
// int main(){
//     int decNum;
//     printf("Enter a decimal number: ");
//     scanf("%d",&decNum);
//     if (decNum==0){
//         printf("Binary: 0\n");
//     }
//     else{
//         printf("Binary: ");
//         decimal_to_binary(decNum);
//         return 0;
//     }
// }

// // Qno:5
// int Fibonacci(int length,int a, int b);
// int main(){
//     int a=1,b=1;
//     int length=8;
//     printf("Fibonacci Series: %d %d",a,b);
//     Fibonacci(length,a,b); 
// }

// int Fibonacci(int length,int a,int b){
//     length --;
//     if (length==1){return 0;}
//     int c=a+b;
//     a=b; b=c;
//     printf(" %d",c);
//     Fibonacci(length,a,b);
// } 