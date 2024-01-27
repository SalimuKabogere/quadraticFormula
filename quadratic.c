//this solves the quadratic equations
//ax^2+bx+c=0


#include <stdio.h>
//import the math library
#include <math.h>

int main(){
    //declare the variables to be used

    int a,b,c;
    printf("enter the coefficient for the squared variable (a):\n");
    scanf("%d",&a);

    //validate the input of a so as it is not 0
    if (a!=0){
        printf("enter the coefficient for the linear variable:\n");
        scanf("%d",&b);

        printf("enter the constant for the equation:\n");
        scanf("%d",&c);

    //the discriminant of the equation

        int discriminant;
        discriminant=(b*b)-(4*a*c);

    //check for the nature of the roots
        if (discriminant>0){
            double root1=(-b+(sqrt(discriminant)))/(2.0*a);
            double root2=(-b-(sqrt(discriminant)))/(2.0*a);
            printf("the first root is: %.1f\n",root1);
            printf("the second root is: %.1f\n",root2);

        }else if(discriminant==0){
        //one real root, repeated roots
            double root3=(-b/(2*a));
            printf("the root is: %.1f\n",root3);
        }else{
        //complex roots
            double realPart=-b/(2.0*a);
            double imaginaryPart=(sqrt(-discriminant))/(2.0*a);
            printf("the real part solves to: %4f\n",realPart);
            printf("the imaginary part solves to: %.4fi\n",imaginaryPart);
            printf("root 1= %.4f + %.4fi\n",realPart,imaginaryPart);
            printf("root 2= %.4f - %.4fi\n",realPart,imaginaryPart);
        } 
    }else{
        float b,c;
        printf("enter the coefficient for the linear variable:\n");
        scanf("%d",&b);

        printf("enter the constant for the equation:\n");
        scanf("%d",&c);
        float root4=-b/c;
        printf("it is a linear equation\nSo it has one answer\n");
        printf("the answer is: %.2f",root4);
    }

    
    return 0;
}