#include "C:\Users\Jacoba\Documents\Coding\C\Projetos\Banco_De_Dados\include\view.h"
#include <stdio.h>
int show_options()
{  
    int first_option;
    do
    {
        printf("Choose an option:\n");
        printf("1 - Students\n2 - Subjects\n3 - Grades\n4 - Exit\n");
        scanf("%d", &first_option);

        if (first_option < STUDENTS || first_option > EXIT)
        {
            printf("Your answer %d is not valid.\n", first_option);
        }
        if (first_option == EXIT)
        {
            break;
        }

    } while (first_option < STUDENTS || first_option > EXIT);

    switch (first_option)
    {
    case STUDENTS:
        handleStudent();
        break;
    case SUBJECTS:
        handleSubject();
        break;
    case GRADES:
        handleGrade();
        break;
    case EXIT:
        return 0;
        break;
    default:

        break;
    }
    return 0;
}
