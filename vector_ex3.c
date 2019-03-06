//Make a routine that receives as a parameter
// a 5-position array containing a student's grades throughout the year and returns the student's average.
#include<stdio.h>

#define nb_students 4
#define nb_grades 5

void main(){
    int i, j;

    double grades[nb_students][nb_grades] = {{1.2, 3.2, 4.5, 5.0, 4.1},
                                            {3.2, 1.2, 4.5, 5.0, 4.1},
                                            {5.0, 3.2, 4.5, 1.2, 4.1},
                                            {4.5, 5.0, 4.1, 1.2, 3.2}};
    double average[nb_students] = {0.0, 0.0, 0.0, 0.0};

    for (j = 0; j<nb_students; j ++)
    {
        for (i = 0; i<nb_grades; i ++)
        {
            printf("%.2lf ", grades[j][i]);
            average[j]+=grades[j][i];
        }
        average[j]/=nb_grades;
        printf("\n%lf\n", average[j]);
    }

 return;
}

/* THE OUTPUT

gitpod /workspace/partdois $ ./vector_ex3
1.20 3.20 4.50 5.00 4.10
3.600000
3.20 1.20 4.50 5.00 4.10
3.600000
5.00 3.20 4.50 1.20 4.10
3.600000
4.50 5.00 4.10 1.20 3.20
3.600000
gitpod /workspace/partdois $

*/