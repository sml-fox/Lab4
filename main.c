#include <stdio.h>
#include <math.h>
#define x1 0.75
#define x2 0.012
#define dx 9
#define a 2.65
#define b 1.48

    main()
    {
        float  x,k;
        for (x = x1; x<x2; x+=dx) {
            k = (sin(exp(2)) / pow(b, x)+a);
            printf("\ny=%f x=%f", k, x);
            printf("%f", k);
        }
    }