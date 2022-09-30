#include <stdio.h>
#include <math.h>

int main ()
{   char P[31], R[91];
    int i = 0, ind = 0;
    int dif1, dif2, dif3, dif4, dif5, plus;

    scanf("%s", P);

    while (P[i] != '\0')
    {   if (P[i] != 'a' && P[i] != 'e' && P[i] != 'i' && P[i] != 'o' && P[i] != 'u')
        {   R[ind] = P[i];

            dif1 = fabs(P[i] - 'a');
            dif2 = fabs(P[i] - 'e');
            dif3 = fabs(P[i] - 'i');
            dif4 = fabs(P[i] - 'o');
            dif5 = fabs(P[i] - 'u');

            if (dif1 < dif2 && dif1 < dif3 && dif1 < dif4 && dif1 < dif5)
                R[ind+1] = 'a';
            else if (dif2 < dif1 && dif2 < dif3 && dif2 < dif4 && dif2 < dif5)
                R[ind+1] = 'e';
            else if (dif3 < dif1 && dif3 < dif2 && dif3 < dif4 && dif3 < dif5)
                R[ind+1] = 'i';
            else if (dif4 < dif1 && dif4 < dif2 && dif4 < dif3 && dif4 < dif5)
                R[ind+1] = 'o';
            else if (dif5 < dif1 && dif5 < dif2 && dif5 < dif3 && dif5 < dif4)
                R[ind+1] = 'u';
            else if (dif1 == dif2)
                R[ind+1] = 'a';
            else if (dif2 == dif3)
                R[ind+1] = 'e';
            else if (dif3 == dif4)
                R[ind+1] = 'i';
            else if (dif4 == dif5)
                R[ind+1] = 'o';

            plus = 1;

            if (P[i] == 'z')
            {   R[ind+2] = 'z';                
            } else
            {   while (P[i] + plus == 'a' || P[i] + plus == 'b' || P[i] + plus == 'c' || P[i] + plus == 'd' || P[i] + plus == 'u' || P[i] + plus == 'w' || P[i] + plus == 'y')
                {   plus++; }

                R[ind+2] = P[i] + plus;                
            }

            ind += 3;
        } else
        {   R[ind] = P[i];
            ind++;
        }

        i++;
    }
    R[ind] = '\0';

    printf("%s", R);

    return 0;
}