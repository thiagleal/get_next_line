# Get Next Line - Leitura de Arquivos em C

Get Next Line é um projeto desenvolvido como parte da jornada na 42 Lisboa. O objetivo é criar uma função em C que permita a leitura de arquivos linha por linha, de forma eficiente e segura. Essa função é útil para diversos tipos de aplicações que necessitam processar arquivos de texto de maneira incremental.

## 📚 Sobre o Projeto

Get Next Line é uma função modular que utiliza buffers para realizar a leitura de arquivos. O projeto é dividido em duas partes principais:

1. **Leitura de Arquivos**: Implementação da função `get_next_line`, que lê uma linha de um arquivo por vez.
2. **Manipulação de Buffers**: Gerenciamento eficiente de buffers para lidar com arquivos de diferentes tamanhos e formatos.

## 🏆 Nota do Projeto

![Nota do Projeto](https://github.com/user-attachments/assets/14a444f4-6454-49ae-9713-fd571eb3c417)

## 🚀 Funcionalidades

### 📄 Leitura de Arquivos
- `get_next_line`: Lê uma linha de um arquivo por vez, retornando um ponteiro para a linha lida.
- Gerenciamento eficiente de memória para evitar vazamentos.

### 🧠 Manipulação de Buffers
- Utilização de um buffer de tamanho configurável para otimizar a leitura.
- Tratamento de casos especiais, como arquivos vazios ou sem quebras de linha.

## 🖥️ Ambiente de Testes

O código foi testado em ambiente Linux, utilizando processadores baseados na arquitetura Intel. Caso utilize outro ambiente ou arquitetura, recomenda-se realizar testes adicionais para garantir a compatibilidade.

## ✅ Testes

O projeto inclui comandos no `Makefile` para facilitar a execução de testes. Siga os passos abaixo para testar a função:

1. **Clonar o repositório**

- Clone o repositório para sua máquina local: `git clone https://github.com/thiagleal/get_next_line`

2. **Adicionar a main de teste**  

- Certifique-se de incluir um arquivo chamado `main_gnl.c` dentro da pasta `src`. Esse arquivo deve conter os testes necessários para validar a função e deve incluir `#include "get_next_line.h"`.

3. **Criar o binário de teste** 

- Use o comando abaixo para compilar a função e criar o binário de teste: `make test`.

4. **Executar o teste** 

- Após a criação do binário, execute o teste com: `./test_gnl`

5. **Remover os arquivos de teste** 

- Para limpar os arquivos gerados pelos testes, use: `make fcleantest`

## 📝 Contribuição

Sinta-se à vontade para contribuir com melhorias ou novas funcionalidades para o projeto. Abra uma issue ou envie um pull request!
