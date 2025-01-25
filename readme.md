# Manipulação de Matriz em C

Este programa em linguagem C permite que o usuário preencha uma matriz 3x3, exiba a matriz preenchida e, em seguida, exiba a matriz com todos os seus elementos multiplicados por 5. Ele exemplifica conceitos fundamentais de manipulação de matrizes em C.

---

## Funcionalidades

1. **Preenchimento da Matriz:**
   - O programa solicita que o usuário insira os valores para cada posição da matriz 3x3.

2. **Exibição da Matriz Original:**
   - Após o preenchimento, a matriz é exibida no formato convencional 3x3.

3. **Multiplicação dos Elementos por 5:**
   - Cada elemento da matriz é multiplicado por 5.

4. **Exibição da Nova Matriz:**
   - A matriz resultante, com os elementos multiplicados, é exibida no formato 3x3.

---

## Código-Fonte

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, mat[3][3];
    
    // Preenchendo a matriz
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) {
            printf("Elemento[%d][%d]=", i, j);
            scanf("%d", &mat[i][j]);
        }

    printf("\n ----------Matriz----------\n");

    // Exibindo a matriz original
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    // Multiplicando os elementos da matriz por 5
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            mat[i][j] = mat[i][j] * 5;

    printf("\n ----------Matriz x5----------\n");

    // Exibindo a matriz multiplicada
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
```

---

## Estrutura do Programa

### Entrada de Dados

O programa utiliza dois loops `for` aninhados para iterar sobre cada posição da matriz e solicitar ao usuário que insira um valor para cada elemento. A matriz é preenchida com os valores fornecidos.

### Processamento

- Os elementos da matriz original são multiplicados por 5.
- O resultado da multiplicação é armazenado na própria matriz, substituindo os valores originais.

### Saída de Dados

- O programa exibe a matriz original no formato 3x3.
- Após a multiplicação, o programa exibe a nova matriz no mesmo formato.

---

## Exemplo de Execução

### Entrada:

```plaintext
Elemento[0][0]=1
Elemento[0][1]=2
Elemento[0][2]=3
Elemento[1][0]=4
Elemento[1][1]=5
Elemento[1][2]=6
Elemento[2][0]=7
Elemento[2][1]=8
Elemento[2][2]=9
```

### Saída:

```plaintext
----------Matriz----------
1 2 3 
4 5 6 
7 8 9 

----------Matriz x5----------
5 10 15 
20 25 30 
35 40 45 
```

---

## Requisitos para Execução

1. Um compilador de C, como GCC.
2. Um ambiente de desenvolvimento ou terminal para compilar e executar o programa.

---

## Como Compilar e Executar

1. Salve o código em um arquivo com a extensão `.c`, por exemplo, `matriz_multiplicada.c`.
2. Abra o terminal e navegue até o diretório onde o arquivo está salvo.
3. Compile o código com o seguinte comando:

   ```bash
   gcc matriz_multiplicada.c -o matriz_multiplicada
   ```

4. Execute o programa com o comando:

   ```bash
   ./matriz_multiplicada
   ```

---

## Considerações

- Certifique-se de inserir apenas números inteiros ao preencher a matriz.
- O programa utiliza uma matriz de tamanho fixo (3x3), mas pode ser modificado para aceitar matrizes de tamanhos diferentes.
- Possíveis melhorias incluem validação de entrada para garantir que apenas valores válidos sejam aceitos.

---

## Autor

Este programa foi criado como um exemplo prático de manipulação de matrizes em C, com foco em entrada, processamento e saída de dados.
