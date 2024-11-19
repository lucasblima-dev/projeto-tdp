#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int criarfilesF(char **tasksNF, int ntasksNF) {
    FILE *reportNF = fopen("relatorioNF.txt", "w");
    if (!reportNF) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    // Escrevendo as tarefas feitas no arquivo
    fprintf(reportNF, "Tarefas nao feitas:\n");
    for (int i = 0; i < ntasksNF; i++) {
        fprintf(reportNF, "%s\n", tasksNF[i]);
    }

    fclose(reportNF);
    return 0;
}

/*
tasksNF -> tarefas não feitas
ntasksNF -> num de tarefas não feitas
*/