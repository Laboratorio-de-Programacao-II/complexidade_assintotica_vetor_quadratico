#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <N>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        fprintf(stderr, "Erro: N deve ser maior que zero.\n");
        return 1;
    }

    srand(42);

    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        fprintf(stderr, "Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        v[i] = rand();

    int duplicatas = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j])
                duplicatas++;
        }
    }

    printf("N=%d  duplicatas=%d\n", n, duplicatas);

    free(v);
    return 0;
}
