[EN] Portuguese below
# Task: Practical exercise of Grade A

## Team
- Gustavo Deves Bueno
- Leonardo Trevisol  
- Pedro Henrique Bassani

## Prerequisites and Dependencies

- You need access to Visual Studio Code and the C/C++ Extension Pack.
- Recommended for Windows. (Not yet tested on Linux or Mac).

## General Comments

- The Objective:

  The objective of this assignment is to develop a C/C++ program that simulates a virtual sticker album application, with data persistence using tab-delimited text files (.csv).
The project reinforces concepts such as data input/output, structures (classes/structs), collections (arrays/lists), selection commands (if/else), loops (while/for), functions/methods, and file handling (read/write).
<br>

- The Description:

  You must implement a Virtual Sticker Album System (no GUI required, console is fine).
  At startup, the program should load data from three files:
    - usuarios.csv (users),
    - figurinhas.csv (stickers),
    - trocas.csv (trades).
  
  Then, display an initial menu with:

    1- New Album → register user and password.

    2- Access Album → login and open the album management menu.

    3- Exit Application → save all updates back to the files.
<br>

- Functional Requirements (checklist):

  - [x] Create user.

  - [x] Login and load album.

  - [x] Browse pages and display sticker states.

  - [x] List unpasted stickers.

  - [x] Paste stickers.

  - [x] Mark stickers for trade.

  - [x] Propose trades.

  - [x] Review trades (accept/reject).

  - [x] Open sticker pack (3 random stickers).

  - [x] Save changes before exit.
<br>

- Main Screens and Options (functional flow):

  <b>Initial Screen</b>

    (1) Create a new user (new album).

    (2) Access album (login → load user data → open “Manage Album”).

    (3) Exit and save changes to files.

  <b>Manage Album</b>

    (1) View Album → browse pages (each page = category, up to 10 stickers).

    (2) Manage Collection → show unpasted stickers and open collection actions.

    (3) Open Sticker Pack → randomly get 3 stickers, add to collection.

    (4) Back.

  <b>Manage Collection</b>

    (1) Paste sticker → mark as “pasted” if available.

    (2) Make sticker available for trade.

    (3) Propose trade → choose partner, sticker you want, sticker you offer.

    (4) Review trades → accept or reject received proposals; apply exchange if accepted.

    (5) Back.
<br>

 - Expected Input/Output:

    - Input: menu options, sticker numbers, login credentials.

    - Output: album pages, collection lists, new stickers from packs, confirmation of trades, etc.

    - Files: all data persists between runs.

## Adjustments and Improvements

The task below is currently completed and it is ready to use:

- [x] Exercise GA

## References and/or Credits
>
> Credits to professor ROSSANA BAPTISTA QUEIROZ,  
>for providing the GA exercise for the appropriate learning and support in the course.
>
<br>

[PT-BR]
## Tarefa: Trabalho prático do Grau A

## Equipe
- Gustavo Deves Bueno
- Leonardo Trevisol  
- Pedro Henrique Bassani

## Pré requisitos e dependências

- Você precisa ter acesso ao Visual Studio Code e a extensão C/C++ Extension Pack
- Indicado para Windows. (Não testado ainda em Linux e Mac)

## Comentários gerais

- O Objetivo:

O objetivo deste trabalho é desenvolver um programa em C/C++ que simule um aplicativo de álbum de figurinhas virtual, com persistência de dados utilizando arquivos de texto tabulados (.csv).
O projeto reforça conceitos como entrada/saída de dados, estruturas (classes/structs), coleções (vetores/listas), comandos de seleção (if/else), laços (while/for), funções/métodos e manipulação de arquivos (leitura/escrita).

<br>

- A Descrição:

Você deve implementar um Sistema de Álbum de Figurinhas Virtual (não é necessário GUI, o console é suficiente).
Na inicialização, o programa deve carregar os dados de três arquivos:
  - usuarios.csv (usuários),

  - figurinhas.csv (figurinhas),

  - trocas.csv (trocas).

Em seguida, exibir um menu inicial com:

1- Novo Álbum → cadastrar usuário e senha.

2- Acessar Álbum → login e abrir o menu de gerenciamento do álbum.

3- Sair do Aplicativo → salvar todas as atualizações de volta nos arquivos.

<br>

Requisitos Funcionais (checklist):

 - [x] Criar usuário.

 - [x] Login e carregar álbum.

 - [x] Folhear páginas e exibir estados das figurinhas.

 - [x] Listar figurinhas não coladas.

 - [x] Colar figurinhas.

 - [x] Marcar figurinhas para troca.

 - [x] Propor trocas.

 - [x] Revisar trocas (aceitar/recusar).

 - [x] Abrir pacote de figurinhas (3 figurinhas aleatórias).

 - [x] Salvar alterações antes de sair.

<br>

Principais Telas e Opções (fluxo funcional):

<b>Tela Inicial</b>

(1) Criar um novo usuário (novo álbum).

(2) Acessar álbum (login → carregar dados do usuário → abrir “Gerenciar Álbum”).

(3) Sair e salvar alterações nos arquivos.

<b>Gerenciar Álbum</b>

(1) Ver Álbum → folhear páginas (cada página = categoria, até 10 figurinhas).

(2) Gerenciar Coleção → mostrar figurinhas não coladas e abrir ações da coleção.

(3) Abrir Pacote de Figurinhas → sortear 3 figurinhas aleatórias, adicionar à coleção.

(4) Voltar.

<b>Gerenciar Coleção</b>

(1) Colar figurinha → marcar como “colada” se disponível.

(2) Disponibilizar figurinha para troca.

(3) Propor troca → escolher parceiro, figurinha desejada e figurinha ofertada.

(4) Revisar trocas → aceitar ou recusar propostas recebidas; aplicar a troca se aceita.

(5) Voltar.

<br>

Entradas/Saídas Esperadas:

Entrada: opções de menu, números de figurinhas, credenciais de login.

Saída: páginas do álbum, listas da coleção, novas figurinhas de pacotes, confirmações de colagem e trocas, etc.

Arquivos: todos os dados persistem entre execuções.


## Ajustes e melhorias

Atualmente a tarefa abaixo está concluida e pronta para uso:

- [x] Trabalho GA

## Referências e/ou créditos
>
> Créditos a professora ROSSANA BAPTISTA QUEIROZ,
>por disponibilizar o exercício GA para o devido conhecimento e auxílio da matéria.
>
