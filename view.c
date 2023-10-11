#include <stdio.h>
#include "view.h"

int show_options()
{

    do
    {
        printf("Choose an option:\n");
        printf("1 - Students\n2 - Subjects\n3 - Grades\n4 - Exit\n");
        scanf("%d", &first_option);

        if (first_option < REGISTER_SUBJECT || first_option > EXIT)
        {
            printf("Your answer %d is not valid.\n", first_option);
        }
        if (first_option == EXIT)
        {
            break;
        }

    } while (first_option < REGISTER_SUBJECT || first_option > EXIT);

    switch (first_option)
    {
    case REGISTER_SUBJECT:
        handleStudents();
        break;
case SUBJECTS:
        handleSubjects();
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

