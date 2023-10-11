#include "view.h"
int handleStudents()
{
    do
    {
        printf("Students Menu:\n");
        printf("1 - Register Student\n2 - Edit Student\n3 - Check Student\n4 - Remove Student\n");
        scanf("%d", &students_option);

        if (students_option < 1 || students_option > 4)
        {
            printf("Your answer %d is not valid.\n", students_option);
        }

    } while (students_option < 1 || students_option > 4);

    switch (students_option)
    {
    case REGISTER_STUDENT:
        registerStudent();
        break;
    case EDIT_STUDENT:
        editStudent();
        break;
    case CHECK_STUDENT:
        checkStudent();
        break;
    case REMOVE_STUDENT:
        removeStudent();
        break;
    default:

        break;
    }
}
int handleSubject()
{
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
    case REGISTER_SUBJECT:
        registerSubject();
        break;
    case EDIT_SUBJECT:
        editSubject();
        break;
    case CHECK_SUBJECT:
        checkSubject();
        break;
    case REMOVE_SUBJECT:
        removeSubject();
        break;
    default:

        break;
    }
}

int handleGrade()
{
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
    case REGISTER_GRADES:
        registerGrades();
        break;
    case EDIT_GRADES:
        editGrades();
        break;
    case CHECK_GRADES:
        checkGrades();
        break;
    case REMOVE_GRADES:
        removeGrade();
        break;
    default:

        break;
    }
}
