# Exercícios de C

Aqui ficam as atividades da faculdade que fiz para treinar e estudar a linguagem C. Começou só com laços de repetição, mas agora o repositório reúne tudo o que já vi na matéria: decisões, repetições, funções e outros assuntos.

## O que tem em cada pasta

- decisao: exercícios com if, else, else if e switch
- repeticao: o for fica em um arquivo e o while e o do-while ficam juntos em outro
- funcoes: exercícios que separam o código em funções, com parâmetros e retorno
- outros: o que não coube nas pastas acima

Cada arquivo .c é um exercício independente, com um main próprio. Dá pra abrir qualquer um e rodar sem depender dos outros.

## Como executar

Você precisa ter o gcc instalado. No Windows, eu uso o MSYS2.

Para compilar um exercício:

    gcc nome_do_arquivo.c -o nome_do_arquivo

Para rodar no Windows:

    nome_do_arquivo.exe

No Linux ou macOS:

    ./nome_do_arquivo

Se quiser ver os avisos do compilador, adicione a flag -Wall na hora de compilar.

## Sobre o código

Como são exercícios de estudo, os programas são simples e priorizam mostrar o conceito, não a performance. Se você está aprendendo C também, fique à vontade para clonar, mexer e quebrar o código para ver o que acontece.
