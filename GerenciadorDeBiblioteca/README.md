# 📚 Gerenciador de Biblioteca em C

- Projeto desenvolvido na disciplina **Prática Profissional: Ferramentas e Técnicas de Programação**
- Curso de **Análise e Desenvolvimento de Sistemas** na [USF][usf_site].
- Tarefa Prática

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
**Persistência em Arquivo**:
- :white_check_mark: Carrega/Salva automaticamente em `biblioteca.txt`

**Tratamento Básico de Erros**:
- :white_check_mark: Validação de opções inválidas no menu

### Em Desenvolvimento
**CRUD Completo**:
- :white_square_button: `criarLivro()` - Adiciona novos registros
- :white_square_button: `listarLivros()` - Exibe todos registros cadastrados
- :white_square_button: `buscarLivro()` - Localiza registro por ID
- :white_square_button: `editarLivro()` - Modifica dados de registros existentes
- :white_square_button: `deletarLivro()` - Remove registros

## :art: Layout

Menu Principal (*Interface do sistema em execução*)

![alt text][menu_image]
![alt text][menu_image2]

## :open_file_folder: Como executar o projeto

```bash

# Se quiser, pode fazer o Clone do repositório inteiro (Faculdade-ADS)
$ git clone https://github.com/paulorochadev/Faculdade-ADS.git

# Acesse a pasta do projeto
$ cd GerenciadorDeBiblioteca

# Para facilitar, use um Compilador Online (copie e cole o Código)

```
Exemplo: [GDB Online][gdb_online_site]


## :rocket: Tecnologias

- [C][c]

## :scroll: Licença

Este projeto foi publicado em 2025 sob a licença [MIT](./LICENSE).

-------------

Desenvolvido com :green_heart: por [**Paulo Roberto Rocha**][linkdin_eu].

Gostou? Deixe uma estrelinha para ajudar o projeto :star:

[menu_image]: https://github.com/paulorochadev/Faculdade-ADS/blob/main/GerenciadorDeBiblioteca/assets/MenuPrincipal.jpeg?raw=true
[menu_image2]: https://github.com/paulorochadev/Faculdade-ADS/blob/main/GerenciadorDeBiblioteca/assets/MenuPrincipal2.jpeg?raw=true

[c]: https://www.c-language.org/
[gdb_online_site]: https://www.onlinegdb.com/
[usf_site]: https://www.usf.edu.br/
[linkdin_eu]: https://www.linkedin.com/in/paulo-rocha-b8556980/