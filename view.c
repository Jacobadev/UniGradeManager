#include <stdio.h>
#include "view.h"

int show_options()
{

    do
    {

        printf("Choose an option\n 1 - Students\n2. Subject\n3. Grades\n4. Exit\n");
        scanf("%d", &first_option);
        if (first_option < 1 || first_option > 4)
            printf("Your answer: %d, is not valid", first_option);

    } while (first_option < 1 || first_option > 4);

    switch (first_option)
    {
    case 1:
        do
        {
            printf("1 - Register Student\n2 - Edit Student\n3 - To check a student\n4 - Remove an student");
            scanf("%d", &students_option);
        } while (students_option < 1 || students_option > 4);
        switch (students_option)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("eae pai");
        }
        break;

    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    default:

        break;
    }
    return 0;
}
