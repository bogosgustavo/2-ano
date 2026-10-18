# 🎓 2º Ano — Engenharia de Computação

Exercícios, listas e trabalhos resolvidos durante o 2º ano do curso de Engenharia de Computação, organizados por disciplina.

![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)
![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)
![Assembly](https://img.shields.io/badge/Assembly-6E4C13?style=for-the-badge)
![VHDL](https://img.shields.io/badge/VHDL-543978?style=for-the-badge)
![License](https://img.shields.io/badge/licença-GPL--2.0-blue?style=for-the-badge)

---

## 📚 Disciplinas

| Pasta | Disciplina | Linguagem | O que tem aqui |
|---|---|---|---|
| [`algoritmos/`](algoritmos) | Algoritmos | C | Listas de exercícios, manipulação de arquivos e avaliações |
| [`estrutura-de-dados-1/`](estrutura-de-dados-1) | Estrutura de Dados I | — | Em breve |
| [`poo-java/`](poo-java) | Programação Orientada a Objetos | Java | Aulas, exercícios e trabalhos |
| [`oac-1/`](oac-1) | Organização e Arquitetura de Computadores I | Assembly | Exercícios e trabalhos |
| [`oac-2/`](oac-2) | Organização e Arquitetura de Computadores II | VHDL | Projeto de processador MIPS |

---

## 🗂️ Estrutura do repositório

```
2-ano/
├── algoritmos/
│   ├── listas/              Listas de exercícios (condicionais, repetição, vetores, matrizes, registros)
│   ├── arquivos/            Manipulação de arquivos, organizada por data da aula
│   │   ├── 02-06/
│   │   └── 09-06/
│   └── avaliacao-ed/        Avaliação (A1 a A6)
├── estrutura-de-dados-1/
├── poo-java/
│   ├── aulas/               Códigos feitos em aula (25-05 e 28-05)
│   ├── exercicios/
│   └── trabalhos/           Trabalho 1 (herança) e Trabalho 2 (biblioteca/livraria)
├── oac-1/
│   ├── exercicios/          exer-22, 42, 43, 44 e 45
│   └── trabalhos/           Trabalho 1 e Trabalho 2 (partes 1 e 2)
└── oac-2/
    └── trabalho-2/          Processador MIPS em VHDL (projeto do ModelSim)
```

---

## 🔎 Destaques

- **Algoritmos (C)** — da base (operadores, condicionais, laços `for`, `while` e `do while`) até vetores, matrizes, registros e leitura/escrita de arquivos de texto.
- **POO (Java)** — herança e polimorfismo (`Pessoa`, `Aluno`, `Professor`, `Funcionario`, `Chefe`), tratamento de exceções com exceção personalizada e um sistema de itens de biblioteca e livraria.
- **OAC I (Assembly)** — programas de baixo nível trabalhando direto com registradores.
- **OAC II (VHDL)** — componentes de um processador MIPS: ULA, controle da ULA, unidade de controle, banco de registradores, extensor de sinal e multiplexadores.

---

## ▶️ Como executar

### C (`algoritmos/`)

Precisa do [GCC](https://gcc.gnu.org/). Dentro da pasta do arquivo:

```bash
gcc "Lista Condicionais.c" -o programa
./programa          # no Windows: programa.exe
```

### Java (`poo-java/`)

Precisa do [JDK](https://adoptium.net/). Dentro da pasta do trabalho ou da aula:

```bash
javac *.java
java Principal
```

### Assembly (`oac-1/`)

Abra os arquivos `.asm` em um simulador MIPS, como o [MARS](https://dpetersanderson.github.io/) ou o QtSpim, e execute por lá.

### VHDL (`oac-2/`)

Abra o arquivo `oac-2/trabalho-2/trabalho 2.1.mpf` no **ModelSim** e compile os arquivos de `mips/mips/`. Os arquivos gerados na simulação (`work/`, `transcript`, `vsim.wlf`) não ficam no repositório, pois são recriados ao compilar.

---

## 📝 Observações

- Os arquivos compilados (executáveis, `.class`) não são versionados. Compile localmente seguindo as instruções acima.
- Este repositório é de estudo: o código reflete o aprendizado da época e pode não seguir as melhores práticas.

---

## 📄 Licença

Distribuído sob a licença **GPL-2.0**. Veja o arquivo [`LICENSE`](LICENSE) para mais detalhes.

---

<p align="center">Feito por <a href="https://github.com/bogosgustavo">Gustavo Bogos</a></p>
