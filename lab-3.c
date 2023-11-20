#include <stdio.h>
#include<stdlib.h>
#include<string.h>
// //QNO:1
// int main()
// {
//     int a =233;
//     int b =455;
//     printf("Before swapping: a=%d and b=%d\n",a,b);
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("Before swapping: a=%d and b=%d",a,b);
// }
// //QNO: 2

// int main() {
//     char str[100]; 
//     printf("Enter a string: ");
//     scanf("%s", str);
//     // Calculate the length of the string
//     int length = strlen(str);
//     // Pointer to the end of the string
//     char *endPtr = str + length - 1;
//     // printf("String in reverse: ");
//     // Print the string in reverse order
//     while (endPtr >= str) {
//         printf("%c\n", *endPtr);
//             endPtr--;
//     }
//     return 0;
// }

// //QNO:3
// #include <stdio.h>
// #include <string.h>
// int main() {
//     int n,i;
//     printf("Enter no of elements in array: ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr = arr;
//     while (i<=n-1){
//         printf("Enter element %d: ",i);
//         scanf("%d",ptr);
//         ptr++;
//         i++;
//     }
//     int *strtPtr=arr;
//     int *endPtr=arr + n-1;
//     printf("Array elements are: ");
//     printf("hhhhhhffffffffffffff");
//     while (strtPtr<=endPtr){
//         printf("%d, ",*strtPtr);
//         strtPtr++;
//     }
// }

// //Qno:4
// #include <stdio.h>
// #include <string.h>
// int main() {
//     int n,i;
//     printf("Enter no of elements in array: ");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr = arr;
//     while (i<=n-1){
//         printf("Enter element %d: ",i);
//         scanf("%d",ptr);
//         ptr++;
//         i++;
//     }
//     int *strtPtr=arr;
//     int *endPtr=arr + n-1;
//     printf("Array elements are: ");
//     while (strtPtr<=endPtr){
//         printf("%d, ",*strtPtr);
//         strtPtr++;
//     }
// }

// //Qno:5

// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);
//   printf("\nEnter elements of 1st matrix:\n");
// for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }
//   printf("Enter elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }
//   // adding two matrices
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] = a[i][j] + b[i][j];
//     }
//   // printing the result
//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }
//   return 0;
// }

