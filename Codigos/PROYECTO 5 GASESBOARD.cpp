1. Descripción de las características de los componentes
Placa Waspmote
Waspmote es una plataforma modular opensource para construir redes de sensores inalámbricas de muy bajo consumo. Creada por la empresa aragonesa Libelium la plataforma comprende de los siguientes elementos:
? La placa Waspmote con microcontrolador, memoria, batería, acelerómetro y sockets para añadir módulos;
? API y compilador open source;
? Diferentes radios de comunicación inalámbrica con el protocolo Zigbee con alcances de hasta 40Km;
? Diversos módulos opcionales para añadir comunicación Bluetooth, GPRS y GPS
? Una gran variedad de placas de sensores para medir gases, eventos físicos y parámetros necesarios en el smart metering.
Figura 1. Componentes placa Waspmote
Waspmote usa el mismo IDE (compilador y librerías principales) que Arduino (el mismo código es compatible en ambas plataformas, sólo ajustando pequeñas cosas como el pinout y el esquema de E/S).
Arduino es una plataforma para crear “proyectos caseros” y asequibles, mientras que Waspmote es un dispositivo especialmente diseñado para crear Redes Sensoriales Inalámbricas que necesitan una larga durabilidad y están destinados a ser desplegados en un escenario real, como una ciudad.
Proyecto 5 Gasesboard |
Página 4 de 17
Placa de prototipado
Una placa de pruebas (en inglés: protoboard o breadboard) es un tablero con orificios que se encuentran conectados eléctricamente entre sí de manera interna, habitualmente siguiendo patrones de líneas, en el cual se pueden insertar componentes electrónicos y cables para el armado y prototipado de circuitos electrónicos y sistemas similares.
Figura 2. Placa de prototipado
Está hecho de dos materiales, un aislante, generalmente un plástico, y un conductor que conecta los diversos orificios entre sí. Uno de sus usos principales es la creación y comprobación de prototipos de circuitos electrónicos antes de llegar a la impresión mecánica del circuito en sistemas de producción comercial.
Una placa de pruebas está compuesta por bloques de plástico perforados y numerosas láminas delgadas, de una aleación de cobre, estaño y fósforo, que unen dichas perforaciones, creando una serie de líneas de conducción paralelas. Las líneas se cortan en la parte central del bloque para garantizar que dispositivos en circuitos integrados de tipo dual in-line package (DIP) puedan ser insertados perpendicularmente y sin ser tocados por el proveedor a las líneas de conductores. En la cara opuesta se coloca un forro con pegamento, que sirve para sellar y mantener en su lugar las tiras metálicas.
Debido a las características de capacitancia (de 2 a 30 pF por punto de contacto) y resistencia que suelen tener las placas de pruebas están confinados a trabajar a relativamente baja frecuencia (inferior a 10 o 20 MHz, dependiendo del tipo y calidad de los componentes electrónicos utilizados).
Los demás componentes electrónicos pueden ser montados sobre perforaciones adyacentes que no compartan la tira o línea conductora e interconectados a otros dispositivos usando cables, usualmente unifilares. Uniendo dos o más placas es posible ensamblar complejos prototipos electrónicos que cuenten con decenas o cientos de componentes.
Proyecto 5 Gasesboard |
Página 5 de 17
Mini USB Cable
Los cables de bus serie universal vienen en diferentes tamaños y especificaciones, incluyendo el Mini USB de 4 pines y otros con conectores de 5 pines. Los conectores no son intercambiables y están fabricados para funcionar con diferentes dispositivos. Los conectores mini USB se han desarrollado para su uso con dispositivos portátiles más pequeños que las computadoras en los que los cables USB se originaron.
Los conectores USB Mini de 5 pines cumplen las especificaciones de los cables mini establecidos por el Foro de Implementadores USB. El conector de 4 pines mini USB es un conector no oficial que fue desarrollado por terceros específicamente para su uso con cámaras digitales, de acuerdo con Cables To Go. El conector de 5 pines USB se puede utilizar con varias cámaras digitales, teléfonos celulares y otros dispositivos electrónicos pequeños. El diferente tamaño y número de pines hacen que cada tipo de cable sea único e incompatibles con los dispositivos periféricos que aceptan sólo el otro.
Ambos tipos de cables mini USB se basan en la funcionalidad original de anfitrión y esclavo, lo que significa que un solo dispositivo, que es típicamente una computadora, actúa como anfitrión, mientras que el otro, que es típicamente un periférico, actúa como un esclavo. El anfitrión determina las acciones que se llevan a cabo y la información que se transfiere, en tanto que el dispositivo esclavo proporciona al anfitrión información y completa solicitudes. Ambos tipos de cables mini USB son capaces de funcionar en el estándar USB 2.0.
GASESBOARD WASPMOTE
Descripción General
El Waspmote Gases Sensor Board ha sido diseñado para monitorear parámetros ambientales tales como temperatura, humedad, presión atmosférica y 14 tipos de gases diferentes. Permite la inclusión de 7 sensores de gases al mismo tiempo, la regulación de su poder a través de un sistema de interruptores de estado sólido y la amplificación de la señal de salida de cada uno de ellos a través de una etapa de amplificación no inversora controlada por un potenciómetro digital configurable a través del Inter-Integrated Circuit Bus, I2C
Los gases que pueden ser monitoreados son:
•• Monóxido de carbono - CO •• Dióxido de carbono - CO2
•• Oxigeno - O2 •• Metano - CH4
•• Hidrógeno molecular - H2 •• Amoníaco - NH3
•• Isobutano - C4H10 •• Etanol - CH3CH2OH
•• Tolueno - C6H5CH3 •• Sulfuro de hidrógeno - H2S
•• Dióxido de Nitrógeno - NO2 •• Ozono - O3
•• Compuestos Orgánicos Volátiles (VOC's) •• Hidrocarburos
Proyecto 5 Gasesboard |
Página 6 de 17
Placa real y especificaciones
Las características técnicas de la placa usada para dicha práctica son:
? Peso: 20 gr
? Dimensiones: 73.5 x 51 x 1.3 mm
? Rango de temperatura: [-20 ºC, 65 ºC]
? Voltaje de alimentación de la placa: 3.3 V y 5 V
? Voltaje de alimentación del sensor: 5 V
? Corriente admitida máxima (continua): 200 mA
? Corriente admitida máxima (pico): 400 mA
A continuación, se va a mostrar de forma teórica el uso que tiene cada Socket de la placa, aunque no se han usado todos para dicha práctica.
Figura 3. Placa Gasesboard
Socket 1
Oxigeno – O2
Socket 2
Dióxido de carbono – CO2
Socket 3
Dióxido de Nitrógeno – NO2
Socket 4
Amoníaco – NH3
Monóxido de carbono – CO
Socket 5
Compuestos Orgánicos Volátiles (VOC’s)
Ozono – O3
Socket 6 y Socket 7
Socket 6 y Socket 7
Metano – CH4
Isobutano – C4H10
Etanol – CH3CH2OH
Tolueno – C6H5CH3
Sulfuro de hidrógeno – H2S
Hidrocarburos
Socket 8
Temperatura, humedad y presión
Tabla 1. Socket placa Gasesboard
Proyecto 5 Gasesboard |
Página 7 de 17
Caso práctico
Se solicita medir:
? Temperatura ambiente
? Dióxido de carbono - CO2
? Metano - CH4
? Calidad del aire mediante la lectura del Dióxido de Nitrógeno - NO2
A continuación, en la fotografía se puede ver la situación de los sensores en su Socket correspondiente como se ha explicado en el apartado
Figura 4. Montaje real
Proyecto 5 Gasesboard |
Página 8 de 17
SENSOR CO2
Descripción
El “TGS4161” es un nuevo sensor sólido de electrolito de CO2 que ofrece bajo consumo de energía. Este puede detectar un rango de 350 ~ 10.000 ppm de dióxido de carbono, por lo que es adecuado para aplicaciones de control de aire en interiores.
El elemento sensible al CO2 consiste en un electrolito sólido formado entre dos electrodos, junto con un sustrato de calentador impreso (RuO2). Al monitorear el cambio en la fuerza electromotriz (EMF) generado entre los dos electrodos, es posible medir la concentración de CO2.
La parte superior de la tapa del sensor contiene adsorbente (zeolita) con el fin de reducir la influencia de los gases de interferencia.
El sensor muestra una buena estabilidad a largo plazo y una buena durabilidad frente a los efectos de la alta humedad.
Figura 5: Sensor de CO2.
Especificaciones
A continuación, se detallan las especificaciones del sensor CO2 utilizado. Especificaciones Gases CO2
Rango de medida
350 a 10000 ppm Voltaje a 350 ppm 220 a 490 mV
Sensibilidad
44 a 72 mV (Variación entre el voltaje a 350 ppm y a 3500 ppm) Voltaje de alimentación 5 V ± 0.2 V DC
Temperatura de operación
-10 a +50 ºC Tiempo de respuesta 1.5 minutos
Consumo medio
50 mA
Tabla 2: Especificaciones Sensor CO2
Proyecto 5 Gasesboard |
Página 9 de 17
SENSOR DE CH4
Descripción
El TGS2611 es un sensor de gas de tipo semiconductor que combina una sensibilidad muy alta al gas metano con bajo consumo de energía y larga vida útil.
Este sensor está disponible en dos modelos que tienen diferentes carcasas externas pero idéntica sensibilidad al gas metano. Ambos modelos pueden satisfacer los requisitos de estándares de rendimiento como UL1484 y EN50194.
? El TGS2611-C00 posee un tamaño pequeño y una respuesta de gas rápida, por lo que es adecuado para verificadores de fuga de gas.
? El TGS2611-E00 utiliza material de filtro en su carcasa que elimina la influencia de gases de interferencia como el alcohol, lo que da lugar a una respuesta altamente selectiva al gas metano. Esta característica hace que el sensor sea ideal para detectores de fugas de gas residenciales que requieren durabilidad y resistencia contra gases de interferencia.
Figura 6: sensor de CH4.
Especificaciones
A continuación, se detallan las especificaciones del sensor CH4 utilizado. Especificaciones Gases CH4 , H2
Rango de medida
500 a 10000 ppm Resistencia a 5000 ppm 0.68 a 6.8 kO
Sensibilidad
0.6 ± 0.06 (ratio entre la resistencia a 9000 y a 3000 ppm) Voltaje de alimentación 5 V ± 0.2 V DC
Temperatura de operación
-10 a +40 ºC Tiempo de respuesta 30 segundos
Resistencia mínima a la carga
0.45 kO Consumo medio 61 mA
Tabla 3: Especificaciones sensor CH4.
Proyecto 5 Gasesboard |
Página 10 de 17
SENSOR DE NO2
Descripción
El MiCS-2714 es un sensor cuya resistencia varía ante pequeñas variaciones de NO2. A diferencia del resto de sensores que operan a una tensión de 5V, este sensor se alimenta a través de un regulador de tensión de 18V, con un consumo de aproximadamente 26 mA.
Figura 7: Sensor de NO2.
Especificaciones
A continuación, se detallan las especificaciones del sensor NO4 utilizado. Especificaciones Gases NO2
Rango de medida
0.05 a 5 ppm Resistencia al aire 0.8 a 8 kO (normalmente 2.2 kO)
Sensibilidad
6 a 100 (normalmente 55, ratio entre la resistencia a 0.25 ppm y en aire) Voltaje de alimentación 1.7 ± 2.5 V DC
Temperatura de operación
-30 a +85 ºC Tiempo de respuesta 30 segundos
Consumo medio
26 mA (a lo largo de todo el ciclo de suministro de energía en un segundo)
Tabla 4. Especificaciones sensor NO2.
Proyecto 5 Gasesboard |
Página 11 de 17
SENSOR DE TEMPERATURA
Descripción
El BME280 es un sensor digital de temperatura, humedad y presión.
Figura 8: Sensor de Temperatura
Especificaciones
A continuación, se detallan las especificaciones del sensor de temperatura utilizado. Especificaciones Rango de medida -40 a +85 ºC
Rango de precisión
0 a +65 ºC Exactitud ± 1 (rango de 0 a +65 ºC)
Tiempo de respuesta
1.65 s (63% de respuesta de 30 a 125 ºC) Consumo 1 µA
Tabla 5. Especificaciones sensor temperatura
Proyecto 5 Gasesboard |
Página 12 de 17
XBEE PRO S1
Los XBee´s son pequeños chips azules capaces de comunicarse de forma inalámbrica unos con otros. Pueden hacer cosas simples, como reemplazar un par de cables en una comunicación serial.
¿Qué es realmente un XBee? – De acuerdo a Digi, los módulos XBee son soluciones integradas que brindan un medio inalámbrico para la interconexión y comunicación entre dispositivos. Estos módulos utilizan el protocolo de red llamado IEEE 802.15.4 para crear redes FAST POINT-TO-MULTIPOINT (punto a multipunto); o para redes PEER-TO-PEER (punto a punto). Fueron diseñados para aplicaciones que requieren de un alto tráfico de datos, baja latencia y una sincronización de comunicación predecible.
Existen muchos tipos diferentes de módulos, pero una de las ventajas de estos XBee, es que todos, independiente del modelo o serie, tienen los pines similares. Alimentación, tierra y los pines de comunicación (TX/RX) se encuentran en el mismo lugar, haciendo que los chips sean totalmente intercambiables para la mayoría de las aplicaciones más simples, aunque de las características más avanzadas no son siempre compatibles.
La diferencia fundamental entre un XBee regular y un XBee PRO (nuestro caso) se centra en dos aspectos: Hardware y distancia de comunicación.
? Hardware: el XBee PRO es un poco más largo
? Comunicación: la versión Pro tiene un mayor alcance (1,6 Km línea vista), pero para ello tiene un mayor consumo de potencia.
El criterio para tomar la decisión de cual usar es la distancia que uno requiera comunicar dos XBee. Los dos modelos se pueden mezclar dentro de la misma red y normalmente trabajan a la frecuencia de 2.4 GHz.
Antena de 2.4 GHz
Descripción
2.4GHz 4dbi Wifi Antena Módulo Para Router Inalámbrico Bluetooth Laptop Component
Introducción del producto:
1.Frequnecy: 2400MHz - 2500MHz 2.Gain: 5-6dBi 3.Impedance: 50 ohmios 4.Longitud Total: 195m m (antena plegable) 5. Dirección Gain: omni 6. Manera Conjunta: Orificio interno SMA 7.Distancia Gain: 1-70M 8.Technical Especificación: cable coaxial de la señal SMA 9.SMA Material del cable: Cable RG1.13 10.Outlet: interfaz de 20CM a IPEX
Proyecto 5 Gasesboard |
Página 13 de 17
Campos de aplicación:
1.Módulo WIFI 2. Tarjeta de red 3. Ordenador de escritorio 4.PAD 5.Model avión de control remoto 6.Bluetooth 7. Monitorización de redes 8.Wireless 9. Hogar inteligente 10.Conector de red 11.Router inalámbrico 12.Optical 13.Interchanger 14.Laptop
Figura 9. Placa completa con antena y Xbee pro S1
Proyecto 5 Gasesboard |
Página 14 de 17
Led Rojo y Led Verde
Un led comienza a emitir cuando se le aplica una tensión de 2-3 voltios. En polarización inversa se utiliza un eje vertical diferente al de la polarización directa para mostrar que la corriente absorbida es prácticamente constante con la tensión hasta que se produce la ruptura.
El led es un diodo formado por un chip semiconductor dopado con impurezas que crean una unión PN. Como en otros diodos, la corriente fluye fácilmente del lado p, o ánodo, al n, o cátodo, pero no en el sentido opuesto.
Los portadores de carga (electrones y huecos) fluyen a la unión desde dos electrodos puestos a distintos voltajes. Cuando un electrón se recombina con un hueco, desciende su nivel de energía y el exceso de energía se desprende en forma de un fotón. La longitud de onda de la luz emitida, y por tanto el color del led, depende de la anchura en energía de la banda prohibida correspondiente a los materiales que constituyen la unión pn.
Figura 10. Funcionamiento LED
A continuación, podemos ver las características y materiales que debe tener el Led para emitir los dos colores de nuestro caso práctico.
COLOR
LONGITUD DE ONDA
VOLTAJE
MATERIAL
ROJO
610 < ? < 760
1.63 < ?V < 2.03
? Arseniuro de galio aluminio (AlGaAs)
? Fosfuro de galio y arsénico (GaAsP)
? Fosfuro de aluminio-galio-indio (AlGaInP)
? Fosfato de galio (GaP)
VERDE
500 < ? < 570
1.971 < ?V < 4.0
? Fosfato de galio (GaP)
? Fosfuro de aluminio-galio-indio (AlGaInP)
? Fosfuro de galio-aluminio (AlGaP)
Tabla 6. Características del LED
Proyecto 5 Gasesboard |
Página 15 de 17
2. Pasos para el desarrollo del proyecto
A continuación se enumera el proceso seguido durante el desarrollo de la práctica:
1-Verificación del material que ha sido entregado
2-Comprobación de las características de cada componente, usando el datasheet.
3-Montaje de la placa waspmote y placa Gasesboard waspmote y realzar la identificación de la placa con el software de waspmote en el ordenador. En este paso se encontraron dificultades con los drivers para la detección de la placa por parte del ordenador.
4-Montaje individual y testeo de cada sensor ya que cada uno dispone de una calibración distinta. Teniendo en cuenta que la placa tiene 6 huecos y los sensores 4 patillas, debiendo conectar los sensores en los 4 huecos exteriores.
Figura 11. Colocación de sensores
5-Unificación de los códigos de todos los sensores, montaje de todos los sensores juntos en la placa Gasesboard y prueba de funcionamiento.
6-Montaje de placa de prototipado compuesta por led y botón.
7-Interconexión de la placa de prototipado con las placas waspmote y Gasesboard.
8-Pruebas de funcionamiento de todo el sistema.
Proyecto 5 Gasesboard |
Página 16 de 17
Programación de la placa
Todos los códigos necesarios para el funcionamiento de GasesBoard v3.0 se han encontrado dentro del software “Waspmote-pro-ide”, seleccionando para cada caso el sensor del que se dispone.
Cabe destacar en para el sensor de CO2 se ha tenido que recalibrar el sensor asignado valores intermedios de voltaje para concentración (partes por millón, PPM) de CO2 en el aire.
A continuación se muestra el nombre de los códigos para cada sensor dentro del software waspnote:
? Ga_v30_01_BME280_sensor_reading. Para el sensor de temperatura, presión y humedad
? Ga_v30_03_CO2_sensor_reading. Para el sensor de CO2
? Ga_v30_07_CH4_sensor_reading. Para el sensor de CH4
? Ga_v30_09_NO2_sensor_reading. Para el sensor de NO2
Una vez que se comprueba el funcionamiento de todos los códigos por separado se unen en un mismo script y se incluye la función de encendido y apagado del LED según los niveles indicados de concentración de cada gas.
En el siguiente enlace de GitHiub se encuentra el código de este proyecto.
https://github.com/IIA2017/Proyecto5
3. Configuraciones de salida de los sensores
Figura 12. Sistema completo
Proyecto 5 Gasesboard |
Página 17 de 17
A continuación, se muestra una captura del software waspmote donde se puede comprobar el correcto funcionamiento de los 4 sensores.
Figura 13. Funcionamiento sensores
En los vídeos adjuntos en la carpeta de Google Drive de la asignatura se muestra el funcionamiento correcto del sistema.
4. Ampliación
No se ha podido realizar al no disponer de una segunda placa para realizar la comunicación entre ambas.
Para la configuración del módulo Xbee PRO S1 es necesario establecer los parámetros de configuración en la tarjeta emisora y la receptora, para ello se utilizan los códigos localizados en los ejemplos del software waspmote -pro-ide:
? _802_01_configure_XBee_parameters. Configuración del módulo.
? _802_02_send_packets. Envío de paquetes de datos.
? _802_03_receive_packets. Recepción de paquetes de datos.