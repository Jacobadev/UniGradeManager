#ifndef VIEW_H
#define VIEW_H
enum FirstOptions { STUDENTS = 1, SUBJECTS, GRADES, EXIT };
enum StudentOptions { REGISTER_STUDENT = 1, EDIT_STUDENT, CHECK_STUDENT, REMOVE_STUDENT };
enum SubjectOptions { REGISTER_SUBJECT = 1, EDIT_SUBJECT, CHECK_SUBJECT, REMOVE_SUBJECT };
enum GradesOptions { REGISTER_GRADES = 1, EDIT_GRADES, CHECK_GRADES, REMOVE_GRADES };

//first options
int show_options();
int handleStudent();
int handleGrade();
int handleSubject();
//student options
int registerStudent();
int editStudent();
int checkStudent();
int removeStudent();
//
#endif