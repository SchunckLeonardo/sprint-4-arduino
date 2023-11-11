# Projeto IoT - Rastreamento Solar com Arduino

## Descrição

Este projeto de IoT visa otimizar a captação de energia solar por meio de um painel solar controlado por um servo motor. O sistema utiliza um sensor LDR para detectar a intensidade luminosa e direciona automaticamente o painel solar para a posição mais eficiente em relação à luz solar. Além disso, integra dados externos utilizando MQTT da Tago.io para obter informações sobre a luminosidade e utiliza a API da OpenWeather para verificar a velocidade do vento e as condições climáticas do dia.

## Arquitetura Proposta

A arquitetura deste projeto envolve quatro componentes principais:

1. **Dispositivo IoT (Arduino):** O Arduino é responsável por ler os dados do sensor LDR, controlar o servo motor para ajustar a posição do painel solar, e receber informações sobre a luminosidade por meio do MQTT da Tago.io.

2. **Tago.io MQTT:** A integração com o Tago.io permite que o Arduino receba dados em tempo real sobre a luminosidade, garantindo uma resposta dinâmica às condições de iluminação.

3. **OpenWeather API:** A API da OpenWeather é utilizada para verificar a velocidade do vento e as condições climáticas do dia, proporcionando informações adicionais para otimização do rastreamento solar.

4. **Sensor LDR:** O sensor LDR (Light Dependent Resistor) é utilizado para medir a intensidade luminosa e fornecer feedback ao Arduino para ajustar a posição do painel solar.

## Recursos Necessários

- **Dispositivo Arduino:** Um Arduino com servo motor, painel solar e sensor LDR.
- **Biblioteca Servo:** Uma biblioteca para controlar o servo motor.
- **Código Arduino:** Carregar o código fornecido neste projeto para o Arduino.
- **Configuração do Sensor LDR:** Posicionar o sensor LDR de forma a captar a luz solar adequadamente.
- **Tago.io MQTT:** Configurar a integração MQTT no Tago.io para enviar dados de luminosidade para o Arduino.
- **OpenWeather API Key:** Obter uma chave de API da OpenWeather para acessar informações climáticas.

## Uso

1. **Configuração do Arduino:**
   - Conecte o servo motor, o painel solar e o sensor LDR ao Arduino.
   - Carregue o código do Arduino fornecido neste projeto para o dispositivo.

2. **Configuração Tago.io MQTT:**
   - Configure a integração MQTT no Tago.io para enviar dados de luminosidade para o Arduino.

3. **Configuração OpenWeather API:**
   - Obtenha uma chave de API da OpenWeather e integre-a ao código Arduino para verificar a velocidade do vento e as condições climáticas.

4. **Posicionamento do Sensor LDR:**
   - Posicione o sensor LDR de modo a captar a luz solar de maneira eficiente.

5. **Execução:**
   - Inicie o Arduino e observe o movimento do servo motor conforme o sensor LDR detecta variações na intensidade luminosa.

6. **Integração com Tago.io:**
   - Receba em tempo real os dados de luminosidade por meio da integração MQTT do Tago.io.

7. **Verificação Automática:**
   - O sistema realizará ajustes automáticos na posição do painel solar sempre que a intensidade luminosa variar.

8. **Interrupção Automática:**
   - O movimento do servo motor será interrompido automaticamente quando a intensidade luminosa atingir o ponto máximo.

9. **Monitoramento Climático:**
   - Utilize as informações da OpenWeather API para otimizar o rastreamento solar considerando a velocidade do vento e as condições climáticas.

10. **Otimização Contínua:**
    - O Arduino continuará otimizando a posição do painel solar ao longo do dia, garantindo a máxima captação de energia solar.