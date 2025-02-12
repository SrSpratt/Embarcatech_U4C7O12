# Embarcatech_U4C7O12
## Unidade 4 - Capítulo 7  
### CONTROLE DE SERVOMOTOR COM PWM - U4C7O12 
#### Autor:
* Roberto Vítor Lima Gomes Rodrigues

#### Vídeo de funcionamento
Execução (no simulador e na placa) e explicação do código:
* https://youtu.be/5vmGSrMwXG4
 * obs.: Na placa, foi feita a execução controlando a intensidade do LED azul, como sugerido na atividade, enquanto no simulador foi feita a execução controlando as posições do servomotor.
 * obs-I.: No vídeo é demonstrado código, execução no simulador e na placa.

#### Instruções de compilação
Certifique-se de que você tem o ambiente configurado conforme abaixo:
* Pico SDK instalado e configurado.
* VSCode com todas as extensões configuradas, CMake e Make instalados.
* Clone o repositório e abra a pasta do projeto, a extensão Pi Pico criará a pasta build
* Clique em Compile na barra inferior, do lado direito (ao lado esquerdo de RUN | PICO SDK)
* Clique em diagram.json
* Dê play

#### Manual do programa
Ao executar o programa, o servomotor será ajustado das seguintes formas:
* Primeiro será ajustada a posição do servomotor em aproximadamente 180º, por 5 segundos (largura de pulso 2400 microssegundos)
* Em seguida, será ajustada a posição do servomotor em aproximadamente 90º, por 5 segundos (largura de pulso 1470 microssegundos)
* Depois, será ajustada a posição do servomotor em aproximadamente 0º, por 5 segundos (largura de pulso 500 microssegundos)
* Por fim, o servomotor fará um movimento de 180º em sentido horário e depois retornará à posição de 0º (com ajuste de 5microssegundos de largura de pulso).

* Obs.: documentei todo o código com doxygen, então ao passar o cursor do mouse em cima de qualquer uma das funções, será mostrada uma pequena descrição da implementação.
