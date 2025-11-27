#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



struct student {
    int id;          
    char name[20];   
    double grade;     
};

int main(int argc, char *argv[]) {
	
    struct student stud = {10, "Suhyun", 4.3};
    struct student *stdPtr;
	
	stdPtr = &stud;

    stdPtr->id = 17;                  
    strcpy(stdPtr->name, "KIM");
    stdPtr->grade = 2.0;

    printf("ID    : %d\n", stdPtr->id);
    printf("name  : %s\n", stdPtr->name);
    printf("grade : %.6f\n", stdPtr->grade);

    return 0;
}

