#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i = i + 1)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 10; i = i + 1)
//     {
//         printf("%d\n", i);
//         if (i == 5)
//         {
//             continue;
//             deoa r na deoa same
//         }
//     }
//     return 0;
// }