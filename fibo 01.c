/*Difficulty level: 4/9

Write a program that takes an integer input from the user and prints out the Fibonacci sequence up to that input number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two. If the input integer is less than or equal to 0, the program should print an error message.

Here's an example of what the program output should look like:

bash
Copy code
Enter an integer: 10
0 1 1 2 3 5 8
And another example:

mathematica
Copy code
Enter an integer: -5
Error: Input must be greater than 0.
Can you write a C program to solve this problem? Let me know if you need any help or guidance!*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, f1,f2,f3, fibo;

    scanf("%d",&num);
    f1 = 0, f2 = 1;

    if(num <= 0)
        printf("Input must be greater than 0\n");

    while(f1 <= num)
    {
        fibo = f1;
        f3 = f1+f2;
        f1 = f2;
        f2 = f3;

        printf("%d ",fibo);

    }

    return 0;
}
