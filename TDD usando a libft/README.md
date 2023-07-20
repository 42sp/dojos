# Dojo de TDD usando o libft

> 📋 Resumo do desafio: Em grupos de pelo menos 3 pessoas, desenvolva a função ft_atoi utilizando o ciclo do TDD

## Precisamos falar sobre testes...

😅 Eu, você e o mundo todo sabemos: Testar qualquer coisa que já esteja minimamente pronta é um porre. É aí que entra a mágica de escrever testes ANTES de escrever seu código de negócio. Essa técnica se chama TDD, Test Driven Development.

Como estou com preguiça de explicar o TDD, pedi ao ChatGPT que explicasse:

> Olá! Você poderia me explicar os passos do TDD de forma bem resumida, por favor?

> ChatGPT: Claro! O TDD (Test-Driven Development), ou Desenvolvimento Orientado a Testes, é uma abordagem de desenvolvimento de software que enfatiza a criação de testes antes da implementação do código. Os passos do TDD podem ser resumidos da seguinte forma:
>
> 1. **Escrever um teste**: O primeiro passo é escrever um teste automatizado para a funcionalidade que você deseja adicionar ou corrigir. O teste deve ser bem simples, focando apenas no requisito mais básico da funcionalidade.
>
> 2. **Executar o teste e ver falhar**: Inicialmente, o teste irá falhar, pois a funcionalidade ainda não foi implementada. 
>
> 3. **Escrever a implementação mínima**: Agora é hora de escrever a quantidade mínima de código necessária para fazer o teste passar. Não se preocupe em fazer a implementação completa ainda. 
>
> 4. **Executar todos os testes**: Certifique-se de que todos os testes, incluindo os antigos, estão sendo executados para garantir que a nova funcionalidade não quebrou nada no código existente.
>
    5. **Refatorar o código**: Após os testes passarem, você pode refatorar o código para melhorar sua estrutura, legibilidade e eficiência, mantendo os testes sempre verdes (passando).
>
    7. **Repetir**: Repita esses passos para adicionar novas funcionalidades ou corrigir bugs. Escreva um novo teste, verifique se ele falha, implemente a funcionalidade mínima, execute todos os testes e, se necessário, refatore o código.
>
> O ciclo de repetição do TDD **(escrever teste -> implementar a funcionalidade mínima -> refatorar)** é uma parte essencial da prática. Ele ajuda a garantir que o código seja confiável, mantenha-se testável e evolua de maneira mais segura ao longo do tempo.

## O desafio!

👉🏾O seu desafio vai ser implementar utilizar TDD para desenvolver a função `ft_atoi`.

🙌🏾O repositório já tem um esqueleto básico com, inclusive, um teste implementado no arquivo de testes `test_ft_atoi.c` para você utilizar como base para escrever os demais:

```
MU_TEST(test_atoi_convert_1_char_to_1_integer)

{
    // ARRANGE
    char *c = "1";
    int expected_result = 1;
    char actual_result;
    
    // ACT

    actual_result = ft_atoi(c);

    // ASSERT
    mu_assert_int_eq(expected_result, actual_result);
}
```

😜 Para rodar os testes, é só usar a linha de comando abaixo:

`gcc ./src/ft_isalpha.c ./tests/test_ft_isalpha.c -lrt -lm -o test_program && ./test_program`

Bora? 🚀