# Conversor de Ângulos entre Graus e Radianos

## Sobre o Conversor

Este projeto consiste em um conversor simples de ângulos entre graus e radianos, desenvolvido em C++. O conversor
permite que o usuário insira um valor em graus e obtenha o valor correspondente em radianos, ou vice-versa.

**Fórmulas Utilizadas:**

- Para converter graus em radianos:
  \[ \text{radianos} = \text{graus} \times \frac{\pi}{180} \]
    - Para converter radianos em graus:
      \[ \text{graus} = \text{radianos} \times \frac{180}{\pi} \]
    - Onde \(\pi\) (pi) é aproximadamente 3.14159.

# Build do Projeto

## Requisitos

- Um compilador C++ (como g++, clang++, etc.)
- CMake (instalado e configurado no sistema)
- Git (opcional, para clonar o repositório)
- Um terminal ou prompt de comando
- Um editor de texto ou IDE para visualizar e editar o código-fonte
- Acesso à internet 
- Conhecimento básico de C++ e do uso do terminal
- Permissões para executar comandos no terminal
- Espaço suficiente em disco para armazenar o código-fonte e os arquivos de build

## Passos para Build

1. Clone o repositório (se aplicável):
2. ```bash
   git clone <URL_DO_REPOSITORIO>
    cd <NOME_DO_DIRETORIO>
    ```
3. Crie um diretório de build:
4. ```bash
   mkdir build
   cd build
    ```
5. Gere os arquivos de build usando CMake:
6. ```bash
    cmake ..
    ```
7. Compile o projeto:
8. ```bash
    cmake --build .
    ```
9. Execute o programa:
10. ```bash
    ./conversor_angulos
    ```

## Observações

- Certifique-se de ter todas as dependências necessárias instaladas.
- Se você encontrar algum erro durante o processo de build, verifique as mensagens de erro para
identificar o problema.
- Consulte a documentação do CMake e do seu compilador para obter ajuda adicional, se necessário.