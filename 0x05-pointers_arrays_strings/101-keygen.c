#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Generates a random valid password for the program 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    size_t i;
    char password[PASSWORD_LENGTH + 1] = {0}; /* The generated password */
    const char *valid_chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; /* The set of valid characters for the password */
    const size_t num_valid_chars = sizeof(valid_chars) - 1; /* The number of valid characters in the set */
    
    srand(time(NULL)); /* Seed the random number generator with the current time */

      
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = valid_chars[rand() % num_valid_chars]; /* Generate a random password by selecting characters from the valid set */
    }
    
    printf("%s\n", password); /* Print the generated password to the console */
    
    return 0;
}

