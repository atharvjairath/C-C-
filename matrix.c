#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void
main (void)
{


        int choice;


        int a[10][10], b[10][10], c[10][10]; // arrays to store matrices
        int i, j, k;


        int x, y, z; // variables to store order of matrices

        printf ("\n MATRIX OPERATIONS"); // Menu
        printf ("\n 1. Addition");


        printf ("\n 2. Subtraction");


        printf ("\n 3. Multiplication");

        printf ("\n 4. Exit");


        printf ("\n Enter your choice:");


        scanf ("%d", &choice); // selecting an operation
        switch (choice)


        {


        case 1:


                printf ("\n Enter order of the matrices A and B:"); // scanning order of matrices
                scanf ("%d,%d", &x, &y);


                printf ("\n Enter matrix A:"); // scanning matrix A
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                scanf ("%d", &a[i][j]);


                }


                printf ("\n Enter matrix B:"); // scanning matrix B
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                scanf ("%d", &b[i][j]);


                }


                for (i = 0; i < x; i++) // calculating matrix A+B
                {


                        for (j = 0; j < y; j++)


                                c[i][j] = a[i][j] + b[i][j];


                }


                printf ("\n Matrix A is:"); // printing matrix A
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", a[i][j]);


                }


                printf ("\n Matrix B is:"); // printing matrix B
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", b[i][j]);


                }


                printf ("\n Matrix A+B is:"); // printing matrix A+B
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", c[i][j]);


                }


                break;


        case 2:


                printf ("\n Enter order of the matrices A and B:");


                scanf ("%d,%d", &x, &y);


                printf ("\n Enter matrix A:");


                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                scanf ("%d", &a[i][j]);


                }


                printf ("\n Enter matrix B:");


                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                scanf ("%d", &b[i][j]);


                }


                for (i = 0; i < x; i++) // calculating matrix A-B
                {


                        for (j = 0; j < y; j++)


                                c[i][j] = a[i][j] - b[i][j];


                }


                printf ("\n Matrix A is:");


                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", a[i][j]);


                }


                printf ("\n Matrix B is:");


                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", b[i][j]);


                }


                printf ("\n Matrix A-B is:"); // printing matrix A-B
                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                printf ("%d ", c[i][j]);


                }


                break;


        case 3:


                printf ("\n Enter order of the matrices A and B:");


                scanf ("%d,%d,%d", &x, &y, &z);


                printf ("\n Enter matrix A:");


                for (i = 0; i < x; i++)


                {


                        for (j = 0; j < y; j++)


                                scanf ("%d", &a[i][j]);


                }


                printf ("\n Enter matrix B:");


                for (i = 0; i < y; i++)


                {


                        for (j = 0; j < z; j++)


                                scanf ("%d", &b[i][j]);


                }


                for (i = 0; i < x; i++) // calculating matrix AxB
                {


                        for (j = 0; j < z; j++)


                        {


                                c[i][j] = 0;


                                for (k = 0; k < y; k++)


                                        c[i][j] += a[i][k] * b[k][j];


                        }


                }


                printf ("\n Matrix A is:");


                for (i = 0; i < x; i++)


                {

                        for (j = 0; j < y; j++)
                                printf ("%d ", a[i][j]);
                }
                printf ("\n Matrix B is:");
                for (i = 0; i < y; i++)


                {
                        for (j = 0; j < z; j++)
                                printf ("%d ", b[i][j]);


                }
                printf ("\n Matrix AxB is:"); // printing matrix AxB
                for (i = 0; i < x; i++)
                {
                        for (j = 0; j < z; j++)
                                printf ("%d ", c[i][j]);
                }
                break;

        case 4:
                exit (0);
                break;
        default:

                printf ("\n INVALID CHOICE");
                break;

        }


        getch ();


}
