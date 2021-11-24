    #include <stdio.h>
    union book
    {
        int serialno;
        char name[50];
        char title[60];
    } s[10];
    int main()
    {
        int i;
        printf("Enter information of students:\n");
        // storing information
        for(i=0; i<10; ++i)
        {
            s[i].serialno = i+1;
            printf("\nFor serialno number%d,\n",s[i].serialno);
            printf("Enter name: ");
            scanf("%s",s[i].name);
            printf("Enter content: ");
            scanf("%s",&s[i].title);
            printf("\n");
        }
        printf("Displaying Information:\n\n");
        // displaying information
        for(i=0; i<10; ++i)
        {
            printf("\nserial number: %d\n",i+1);
            printf("Name: ");
            puts(s[i].name);
            puts(s[i].title);
            printf("\n");
        }
        return 0;
    } 
