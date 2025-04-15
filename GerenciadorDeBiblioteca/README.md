# 📚 Gerenciador de Biblioteca em C

![C][c_image] ![Status][status_image]
Projeto desenvolvido na disciplina **Prática Profissional: Ferramentas e Técnicas de Programação** do curso de **Análise e Desenvolvimento de Sistemas** na [USF][usf_site].

## :computer: Sobre o projeto

Sistema de gerenciamento de Livros com persistência em arquivo texto, desenvolvido como projeto acadêmico para praticar os conceitos da Linguagem de Programação C:

- Estruturas de dados em C
- Manipulação de arquivos
- CRUD completo
- Boas práticas de programação

## :wrench: Conceitos

- Structs e alocação de memória
- Persistência em arquivos texto
- Manipulação de strings em C
- Validação de entrada
- Modularização de código

## 🛠 Funcionalidades

### Implementadas
- :white_check_mark: **Persistência em Arquivo**  
  Carrega/Salva automaticamente em `biblioteca.txt`
- :white_check_mark: **CRUD Completo**  
  - `criarLivro()` - Adiciona novos registros
  - `listarLivros()` - Exibe todos registros cadastrados
  - `buscarLivro()` - Localiza registro por ID
  - `editarLivro()` - Modifica dados de registros existentes
  - `deletarLivro()` - Remove registros
- :white_check_mark: **Tratamento Básico de Erros**  
  Validação de opções inválidas no menu

  ### Em Desenvolvimento
- :white_square_button: Implementação completa das funções CRUD
- :white_square_button: Validação avançada de dados
- :white_square_button: Sistema de empréstimos de livros

## :art: Layout

Menu Principal:
*Interface do sistema em execução*

![alt text](https://github.com/Faculdade-ADS/blob/main/GerenciadorDeBiblioteca/MenuPrincipal.jpeg?raw=true)
![alt text](https://github.com/Faculdade-ADS/blob/main/GerenciadorDeBiblioteca/MenuPrincipal2.jpeg?raw=true)

## :open_file_folder: Como executar o projeto

```bash

# Clone o repositório
$ git clone https://github.com/paulorochadev/gerenciador-biblioteca-c.git

# Acesse a pasta do projeto
$ cd gerenciador-biblioteca-c

# Compile e execute (Linux/macOS)
$ make run

# Manualmente:
$ gcc src/*.c -o biblioteca && ./biblioteca

# Ou use um Compilador Online (copie e cole o Código):
Exemplo: [GDB Online][gdb_online_site]

```

:rocket: Tecnologias
- [C][c]

:scroll: Licença
Este projeto foi publicado em 2025 sob a licença [MIT](./LICENSE).

-------------

Desenvolvido com :green_heart: por [**Paulo Roberto Rocha**][linkdin_eu].

Gostou? Deixe uma estrelinha para ajudar o projeto :star:

[c_image]: https://img.shields.io/badge/C-17%2B-blue
[status_image]: https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow

[c]: https://www.c-language.org/
[gdb_online_site]: https://www.onlinegdb.com/
[usf_site]: https://www.usf.edu.br/
[linkdin_eu]: https://www.linkedin.com/in/paulo-rocha-b8556980/