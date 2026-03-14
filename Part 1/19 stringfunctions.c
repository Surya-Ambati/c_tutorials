#include<string.h>
#include<stdio.h>
#include<ctype.h>

//constant - old way of defining constants
#define RATEPERSFT 5000
#define FAVCOUNTRY "INDIA"

/* below operations are not possible in string
name1 = name2 - assignment
name1 == name2 -comparison
operator +,- 
*/

int main(){

    const float PI = 3.14159; // modern way of defining constant

    char str[] = "surya";
    int lenght = strlen(str);

    printf("lenght of string - %d\n", lenght);

    char new_var[20];
    strcpy(new_var, str); //(destination, source)
    printf("new name %s\n", new_var);

    char ncpy_var[4];
    strncpy(ncpy_var, str, 3);
    printf("strncpy new name %s\n", ncpy_var);

    printf("combined string %s\n",strcat(str, ncpy_var));
    printf("string contatination %s\n", strncat(str, str, 4));

    printf("updated string - %s\n", str);

    char apple[] = "apple";
    char capple[] = "india";

    printf("comparing result - %s\n", strcmp(apple, capple)==0?"equal":"noteql");
    printf("n comparing result - %s\n", strncmp(apple, capple, 3)==0?"equal":"noteql");

    char country[] = "India is great country";
    char *result = strchr(country, 'n');
    printf("rest of string:  %s\n", result);

    char *results = strstr(country, "is");
    printf("rest of string in country - %s\n", results);

    char tok[] ="India-is-beatiful-country"; //India\0is\0beatiful\0country\0
    char *token = strtok(tok, "-");

    while(token != NULL){
        printf("token element - %s\n", token);
        token = strtok(NULL, "-");
    }

    char c = 'i';
    printf("is upper result - %s\n", isupper(c)?"Upper":"Lower");
}





































/*
 * ==============================================================================
 * C STRING AND CHARACTER UTILITIES REFERENCE
 * ==============================================================================
 * HEADER: <string.h> (String Manipulation) - ex: string -"surya"
 * ------------------------------------------------------------------------------
 * Function    | Purpose
 * ------------|-----------------------------------------------------------------
 * strlen()    | Find string length (excluding null terminator)
 * strcpy()    | Copy source string to destination
 * strncpy()   | Copy up to N characters (safer than strcpy)
 * strcat()    | Append (concatenate) source string to destination
 * strncat()   | Append up to N characters (safer than strcat)
 * strcmp()    | Compare two strings (returns 0 if equal) // 0,1,-1
 * strncmp()   | Compare first N characters of two strings
 * strchr()    | Find first occurrence of a character in a string -- return pointer to first occurance
 * strstr()    | Find first occurrence of a substring in a string -- return pointer
 * strtok()    | Split a string into tokens based on delimiters   -- return pointer
 * ------------------------------------------------------------------------------
 * HEADER: <ctype.h> (Character Analysis & Testing) - char : 's','u,'r','y','a'
 * ------------------------------------------------------------------------------
 * Function    | Checks if character is a...
 * ------------|-----------------------------------------------------------------
 * isalpha()   | Letter (A-Z or a-z)
 * isdigit()   | Numeric digit (0-9)
 * islower()   | Lowercase letter
 * isupper()   | Uppercase letter
 * ispunct()   | Punctuation mark (e.g., !, ., ,)
 * isalnum()   | Alphanumeric (Letter or Digit)
 * isspace()   | Whitespace (Space, Tab, Newline)
 * ==============================================================================
 */