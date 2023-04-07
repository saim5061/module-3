// #include <stdio.h>
// int main()
// {
//     int k;
//     for (k = -3; k < -5; k++)
//         printf("Hello ");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
//    printf("%d",i);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         a++;
//         continue;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         continue;
//         a++;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i = 0) {
//         printf("Hello\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float avg;
    printf("Input the 10 numbers: \n");
    for (i = 0; i <= 30; i = i + 1)
    {
        printf("Number-%d :\n",  i);
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = sum / 10.0;
    printf("The sum of 10 no is : %d\nThe Average is : %.2f\n",sum,avg);
    return 0;
}