
#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    const int letters_count = 53;
    string letters = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char password[6] = "\0\0\0\0\0\0";

    for (int fifth = 0; fifth < letters_count; fifth++)
    {
    for (int fourth = 0; fourth < letters_count; fourth++)
    {
    for (int third = 0; third < letters_count; third++)
    {
    for (int second = 0; second < letters_count; second++)
    {
    for (int first = 1; first < letters_count; first++)
       {
         password[0] = letters[first];
         password[1] = letters[second];
         password[2] = letters[third];
         password[3] = letters[fourth];
         password[4] = letters[fifth];
      if (strcmp(crypt(password, salt), hash) == 0)
         {
          printf("%s\n", password);
                            return 0;
     }
     }
     }
     }
     }
     }
          printf("Password couldn't be cracked!");
          return 2;

}