#include "main.h"
/**
 * cap_string - capitalize first letter of a word in a string
 * @str: pointer to a string
 * Return: str
 */
char *cap_string(char *str)
{
    int cap_next = 1; 
    char *result = str; /* save the starting address of the string */

    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) /**
        *this checks if its lowercase or uppercase
        */
        {
            if (cap_next) /*checks if next letter should be capitalized*/
            {
                if (*str >= 'a' && *str <= 'z') /*checks if lowercase*/
                {
                    *str = *str - 'a' + 'A'; /*capitalize lowercase letter*/
                }
                cap_next = 0; /*ensures next characters are not capitalized*/
            }
        } 
        else /*executed if character was not alphabetic*/
        {
            cap_next = 1;
        }
        str++;
    }
    return (result);
}