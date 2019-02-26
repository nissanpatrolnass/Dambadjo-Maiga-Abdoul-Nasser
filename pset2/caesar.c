p=get_string("plaintext: ");

printf("cyphertext: ");
for(int i=0; i<strlen(p); i++)

if(isalpha(p[i]))
{
    if(islower(p[i]))


        {
            printf("%c",(((p[i]- 97)+ k)%26)+ 97);
        }
    if(isupper(p[i]))
        {
            printf("%c",(((p[i]- 65)+ k)%26)+ 65);
        }
}
else
        {
            printf("%c",p[i]);
        }
    printf("\n");
    }
}
