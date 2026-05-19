# Caixa ATX

## Integrantes do Grupo

* Arthur Maziviero Faria RM: 573928
* Tommaso Nagliatti RM: 572147

---

# Descrição do Sistema

O projeto **Caixa ATX** consiste em um sistema bancário simples desenvolvido na linguagem C, executado via terminal.

O sistema simula funcionalidades básicas de um caixa eletrônico (ATM), permitindo autenticação de usuários, depósitos, saques e visualização de extrato bancário.

O objetivo principal do projeto foi aplicar conceitos fundamentais de programação estruturada, utilização de funções, estruturas condicionais, repetição, vetores e manipulação de strings em C.

---

# Funcionalidades Implementadas

## Login de Usuário

* Sistema de autenticação utilizando nome e senha;
* Limite máximo de 3 tentativas de acesso;
* Bloqueio após exceder o número permitido de tentativas.

## Depósito

* Permite adicionar saldo à conta;
* Atualiza automaticamente o saldo atual.

## Saque

* Permite realizar retiradas do saldo disponível;
* Impede saques maiores que o saldo atual;
* Exibe mensagem de saldo insuficiente.

## Extrato Bancário

* Armazena movimentações realizadas;
* Exibe apenas as últimas 3 operações efetuadas.

## Interface no Terminal

* Limpeza automática da tela;
* Navegação por menu utilizando switch-case;
* Pausas para melhor visualização das mensagens.

---

# Instruções de Compilação e Execução

## Requisitos

* Compilador GCC instalado;
* Sistema operacional Windows, Linux ou MacOS.

---

## Compilar o Código

### Windows

```bash
gcc main.c -o caixa.exe
```

### Linux / MacOS

```bash
gcc main.c -o caixa
```

---

## Executar o Programa

### Windows

```bash
caixa.exe
```

### Linux / MacOS

```bash
./caixa
```

---

# Histórico de Commits

## Arthur Maziviero Faria

### 18/05/2026

* Implementando novas funções e corrigindo erros no código. Também foi corrigido para deixar todas as funções dentro da main.

### 13/05/2026

* Criando o switch case e incluindo a biblioteca `string.h` para interpretação de espaços.
* Definindo as funções `saque` e `deposito`.
* Merge branch 'main' do GitHub.
* Criando o repositório.
* Initial commit.

---

## Tommaso Nagliatti

### 16/05/2026

* Erros de switch corrigidos e adicionada a opção de extrato.
* Criação da separação de arquivos com funções.

### 14/05/2026

* Criação do `.gitignore` e finalização do código.
* Resolução de conflitos de merge.
* Remoção de binários.
* Adição do `data_base` e da função `main`.

---

# Tecnologias Utilizadas

* Linguagem C
* Biblioteca `stdio.h`
* Biblioteca `string.h`
* Biblioteca `stdlib.h`
* Git e GitHub para versionamento

---

# Estrutura do Projeto

```bash
CP_2_DSA/
│
├── main.c
├── README.md
└── .gitignore
```

---

# Objetivo Acadêmico

Este projeto foi desenvolvido para fins acadêmicos na disciplina de Data Structures and Algorithms, visando praticar:

* Estruturas condicionais;
* Estruturas de repetição;
* Vetores;
* Funções;
* Manipulação de strings;
* Modularização;
* Versionamento com Git/GitHub.
