#include <stdio.h>

typedef struct bateria {
    float P, C;
} TBateria;

int main (void) {
    int N;
    float D, P, C, tempo = 0;
    int i;
    TBateria bateria[1000];

    scanf("%d %f", &N, &D);
    
    for (i = 0; i < N; i++) {
        scanf("%f %f", &P, &C);
        bateria[i].P = P;
        bateria[i].C = C;
    }

    for (i = 0; i < N; i++) {
        if (i == 0) 
            tempo += (bateria[i+1].P - bateria[i].P) * (bateria[i+1].P - bateria[i].P) / bateria[i].C;
        else if (i == N-1)
        {
            if (tempo + ((10 - bateria[i].P) * (10 - bateria[i].P) / bateria[i].C) < ((10 - bateria[i-1].P) * (10 - bateria[i-1].P) / bateria[i-1].C))
                tempo += (10 - bateria[i].P) * (10 - bateria[i].P) / bateria[i].C;
            else
            {   tempo -= (bateria[i].P - bateria[i-1].P) * (bateria[i].P - bateria[i-1].P) / bateria[i-1].C;
                tempo += (10 - bateria[i-1].P) * (10 - bateria[i-1].P) / bateria[i-1].C;
            }
        } else
        {   if (tempo + ((bateria[i+1].P - bateria[i].P) * (bateria[i+1].P - bateria[i].P) / bateria[i].C) < ((bateria[i+1].P - bateria[i-1].P) * (bateria[i+1].P - bateria[i-1].P) / bateria[i-1].C))
                tempo += (bateria[i+1].P - bateria[i].P) * (bateria[i+1].P - bateria[i].P) / bateria[i].C;
            else
            {   tempo -= (bateria[i].P - bateria[i-1].P) * (bateria[i].P - bateria[i-1].P) / bateria[i-1].C;
                tempo += (bateria[i+1].P - bateria[i-1].P) * (bateria[i+1].P - bateria[i-1].P) / bateria[i-1].C;
            }
        }
    }


    printf("%.3f", tempo);

}