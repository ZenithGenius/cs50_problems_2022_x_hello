#include <stdio.h>
#include <cs50.h>
int main()
{
    //We have a variable called "name" which takes an input using the function "get_string" from the cs50.h library

    string name = get_string("What's your name?\n");

    //The users name is stored in "name" and printed out using the printf function in the stdio.h library

    printf("Hello, %s\n", name);
    
    //Using the variable name could be bypassed but is good for code design and if the data is to be re-used
}