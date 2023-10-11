#ifndef VIEW_H
#define VIEW_H
int first_option, students_option;
enum FirstOptions { STUDENTS = 1, SUBJECTS, GRADES, EXIT };
enum StudentOptions { REGISTER_STUDENT = 1, EDIT_STUDENT, CHECK_STUDENT, REMOVE_STUDENT };
enum SubjectOptions { REGISTER_SUBJECT = 1, EDIT_SUBJECT, CHECK_SUBJECT, REMOVE_SUBJECT };
enum GradesOptions { REGISTER_GRADES = 1, EDIT_GRADES, CHECK_GRADES, REMOVE_GRADES };


int show_options();
int handleStudents();
int handleGrade();
int handleSubject();


#endif