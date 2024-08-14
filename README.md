## Introdução
> Arduino é uma plataforma de prototipagem eletrônica open-source, ou seja, uma plataforma de criação de circuitos eletrônicos ou sistemas antes da produção em larga escala ou final. Sua estrtutura consiste em uma placa de hardware e um ambiente de desenvolvimento programável (IDE). A placa Arduino possui um microcontrolador (pequeno computador), que através de entradas e saídas digitais e analógicas é capaz de controlar diversos dispositivos eletrônicos, como sensores, motores e LEDs. Já a IDE do Arduino permite programar a placa utlizando-se da linguagem C/C++, que executa diversos comandos, estabelecendo instruções para o dispositivo entender e executar de acordo com os parâmetros desejados.

### Componentes Básicos

1) LEDs (Light Emitting Diodes) -> Pequenas lâmpadas que acendem quando corrente elétrica passa por elas, indicando o estado de um sistema.
2) Resistores -> É o componente que limita a quantidade de corrente elétrica, utilizado para proteger outros componentes de receberem muita corrente e se queimarem.
3) Botões (Push Buttons) -> Dispositivos de entrada que permitem ao usuário interagir com o Arduino, enviando sinais de alta ou baixa (on/off).
4) Sensores ->  Dispositivos que detectam mudanças no ambiente e enviam essa informação ao Arduino. Tipos: Sensor de temperatura: Detecta mudanças de temperatura, 
Sensor de luz (LDR): Detecta a quantidade de luz ambiente, Sensor de ultrassom: Mede distâncias.
5) Motores -> Dispositivos que convertem energia elétrica em movimento. Tipos: Servo motor (Controla posição e ângulo), Motor DC (Gira em alta velocidade e pode ser controlado com um transistor),
Motor de passo (Gira em passos discretos, ideal para controle preciso de posição).
6) Displays -> Dispositivos de saída que mostram informações ao usuário. Tipos: Display de 7 segmentos, mostra números e alguns caracteres) e LCD (Liquid Crystal Display), mostrar texto e gráficos.
7) Potenciômetros -> Resistores ajustáveis que permitem variar a resistência manualmente.
8) Buzzer -> Um pequeno alto-falante que emite sons quando alimentado com uma corrente elétrica.
9) Fios Jumper (Jumper Wires) -> Fios usados para conectar componentes.
10) Protoboard -> Uma placa usada para montar circuitos temporários sem a necessidade de solda.
11) Transistores -> Componentes que podem atuar como interruptores ou amplificadores de correntes.
12) Capacitores -> Armazenadores e liberadores de energia elétrica, usados para estabilizar a alimentação e filtrar ruídos.

![Imagemf](https://github.com/user-attachments/assets/ba4cafe4-18e3-4ba7-be9a-47c13b7ac4e3)


```r
#Rodar no terminal do R
install.packages("languageserver")
install.packages("httpgd")
```

### Estatística
A estatística é a ciência que objetiva coletar, organizar, analisar e interpretar dados. Ela é dividida em 3 partes: **Descritiva, Inferencial e Probabilística.**

- Descritiva é aquela relacionada a descrição dos dados, representada pelas medidas de: centralidade (Média, moda e mediana), posição (Amplitude e Quartis), dispersão (Variância e Desvio Padrão).
- Probabilistica é aquela relacionada a conceitos de probabilidades (espaço amostral, eventos) e distribuições de probabilidade discretas e contínuas (Binomial, Poisson, Exponencial e Normal).
- Inferencial é aquela relacionada a estimação de parâmetros, intervalo de confiança e testes de hipóteses.

