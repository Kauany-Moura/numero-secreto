# 🎯 Jogo de Adivinhação em C

Um simples e divertido **jogo de adivinhação** feito em linguagem C!  
O objetivo é tentar descobrir o número secreto gerado aleatoriamente pelo computador, com diferentes níveis de dificuldade e sistema de pontuação.  

---

## 🕹️ Como funciona

O programa sorteia um **número secreto entre 0 e 99**.  
Você deve tentar adivinhar qual é esse número dentro de um número limitado de tentativas — que varia conforme o **nível de dificuldade** escolhido.

---

## ⚙️ Níveis de dificuldade

| Nível | Nome     | Tentativas |
|-------|-----------|------------|
| 1     | Fácil     | 20         |
| 2     | Médio     | 15         |
| 3     | Difícil   | 6          |

---

## 📈 Sistema de Pontuação

- Você começa com **1000 pontos**.  
- A cada erro, perde pontos proporcionalmente à **diferença entre o chute e o número secreto**.  
- Ou seja, quanto mais próximo o chute, **menos pontos são perdidos**.

---

## 🧠 Lógica do jogo

1. Geração de número aleatório (`rand()` com `time(0)` como semente)  
2. Escolha do nível de dificuldade  
3. Loop de tentativas com:
   - Verificação de chute negativo  
   - Comparação com o número secreto  
   - Cálculo da pontuação  
4. Exibição do resultado final  

---

## 💻 Como compilar e executar


