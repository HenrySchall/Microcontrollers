## Arduino
> Arduino é uma plataforma de prototipagem eletrônica open-source, ou seja, uma plataforma de criação de circuitos eletrônicos ou sistemas antes da produção em larga escala. Sua estrututura consiste em uma placa de hardware e um ambiente de desenvolvimento programável (IDE). A placa Arduino possui um microcontrolador, que através de entradas e saídas digitais e analógicas é capaz de controlar diversos dispositivos eletrônicos, como sensores, motores e LEDs. A IDE do Arduino permite programar a placa utlizando-se da linguagem C/C++, que eprocessa as instruções para o dispositivo entender e executar de acordo com os parâmetros desejados.

### Componentes Básicos

1) LEDs (Light Emitting Diodes) -> Pequenas lâmpadas que acendem quando corrente elétrica passa por elas, indicando o estado de um sistema.
   - Cátodo = -
   - Ânodo = +
   - Geralmente abastecido com uma alimentação de 1,8 ou 3 volts

2) Resistores -> É o componente que limita a quantidade de corrente elétrica, utilizado para proteger outros componentes de receberem muita corrente e se queimarem.
   - Não tem polaridade
   - Utiliza-se apenas no terminal positivo
   - Cada resistor possui um padrão, os mais fáceis de achar são de 480ohm ou 330ohm, utilizar um frequência menor que a ideal diminui a vida útil do componente e maior que a ideal diminui a luminosidade (caso de LED)

4) Botões (Push Buttons) -> Dispositivos de entrada que permitem ao usuário interagir com o Arduino, enviando sinais de alta ou baixa (on/off).
   - Terminais verticais são identicos
   - Terminais Paralelos são paralelos 

5) Sensores ->  Dispositivos que detectam mudanças no ambiente e enviam essa informação ao Arduino. Tipos:
  - Sensor de temperatura: Detecta mudanças de temperatura, 
  - Sensor de luz (LDR): Detecta a quantidade de luz ambiente,
  - Sensor de ultrassom: Mede distâncias.

5) Motores -> Dispositivos que convertem energia elétrica em movimento. Tipos:
  - Servo motor (Controla posição e ângulo),
  - Motor DC (Gira em alta velocidade e pode ser controlado com um transistor),
  - Motor de passo (Gira em passos discretos, ideal para controle preciso de posição).

6) Displays -> Dispositivos de saída que mostram informações ao usuário. Tipos:
  - Display de 7 segmentos, mostra números e alguns caracteres)
  - LCD (Liquid Crystal Display), mostrar texto e gráficos.

7) Potenciômetros -> Resistor ajustável, que permitem variar a resistência manualmente. Tipos:
  - Logaritmico
  - Linear

8) Buzzer -> Um pequeno alto-falante que emite sons quando alimentado com uma corrente elétrica.

9) Fios Jumper (Jumper Wires) -> Fios usados para conectar componentes.

10) Protoboard -> Uma placa usada para montar circuitos temporários sem a necessidade de solda.

11) Transistores -> Componentes que podem atuar como interruptores ou amplificadores de correntes.

12) Capacitores -> Armazenadores e liberadores de energia elétrica, usados para estabilizar a alimentação e filtrar ruídos.

#### Conceitos Básicos

1) Carga Elétrica -> É a propriedade das partículas subatômicas, que causam as forças elétricas, podendo ser positivas (prótons) ou negativas (elétrons). Unidade: Coulomb (C),

2) Tensão Elétrica (Diferença de Potencial) -> É a diferença de potencial elétrica entre dois pontos, essa diferença que permite a corrente elétrica fluir. Por este motivo quando utiliza-se o multímetro para verificar a tensão em determinado ponto de um circuito, usa-se sempre duas ponteiras, comumente a vermelha e a preta. A preta vai no ponto referencial, onde será medida a tensão de referencia, geralmente negativa, terra ou ground (GND). A vermelha vai no ponto positivo da tensão, local onde realmente queremos saber quantos volts temos a partir do referencial. Unidade: Volt (V).

##### Tensão Contínua (DC) X Tensão Alternada (AC)
- Corrente Contínua (DC) flui em uma única direção (comumente + -> -)
- Corrente Alternada (AC) alterna sua direção periodicamente (+ -> - ou - -> +)

3) Corrente Elétrica -> É o fluxo ordenado de cargas elétricas através de um condutor, ou seja, é o fluxo de elétrons gerado pela tensão aplicada. Para exemplificar, podemos dizer que a tensão tensão elétrica "empurra" os elétrons pelos condutores de um circuito, e esse fluxo é dado o nome de corrente elétrica. Unidade: Ampere (A).
   
4) Resistência Elétrica -> É a oposição ao fluxo de corrente em um material, ou seja, é responsável por enfraquecer o fluxo de cargas elétricas. Todo material condutor apresenta alguma resistência ao movimento dos elétrons, materiais como borracha, porcelana e o próprio ar tem uma alta resistência à passagem de corrente elétrica, por isso são chamados de isolantes. Já os metais a corrente flui de forma mais fácil por ter uma baixa resistência, sendo chamados de condutores. Unidade: Ohm (Ω)

5) Potência Elétrica -> É a taxa na qual a energia elétrica é convertida em outra forma de energia (calor, luz). Unidade: Watt (W)

6) Capacitância -> É a capacidade de um componente (capacitor) armazenar energia elétrica sob a forma de campo elétrico. Unidade: Farad (F)
