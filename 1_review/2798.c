#include <stdio.h>

int main()
{
    int N, M, Nn[100];
    int sum = 0;
    int max = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Nn[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N ; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = Nn[i] + Nn[j] + Nn[k];
                if (sum > max && sum <= M)
                    max = sum;
            }
        }
    }

    printf("%d\n", max);

}