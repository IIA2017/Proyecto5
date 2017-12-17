1. Descripci�n de las caracter�sticas de los componentes
Placa Waspmote
Waspmote es una plataforma modular opensource para construir redes de sensores inal�mbricas de muy bajo consumo. Creada por la empresa aragonesa Libelium la plataforma comprende de los siguientes elementos:
? La placa Waspmote con microcontrolador, memoria, bater�a, aceler�metro y sockets para a�adir m�dulos;
? API y compilador open source;
? Diferentes radios de comunicaci�n inal�mbrica con el protocolo Zigbee con alcances de hasta 40Km;
? Diversos m�dulos opcionales para a�adir comunicaci�n Bluetooth, GPRS y GPS
? Una gran variedad de placas de sensores para medir gases, eventos f�sicos y par�metros necesarios en el smart metering.
Figura 1. Componentes placa Waspmote
Waspmote usa el mismo IDE (compilador y librer�as principales) que Arduino (el mismo c�digo es compatible en ambas plataformas, s�lo ajustando peque�as cosas como el pinout y el esquema de E/S).
Arduino es una plataforma para crear �proyectos caseros� y asequibles, mientras que Waspmote es un dispositivo especialmente dise�ado para crear Redes Sensoriales Inal�mbricas que necesitan una larga durabilidad y est�n destinados a ser desplegados en un escenario real, como una ciudad.
Proyecto 5 Gasesboard |
P�gina 4 de 17
Placa de prototipado
Una placa de pruebas (en ingl�s: protoboard o breadboard) es un tablero con orificios que se encuentran conectados el�ctricamente entre s� de manera interna, habitualmente siguiendo patrones de l�neas, en el cual se pueden insertar componentes electr�nicos y cables para el armado y prototipado de circuitos electr�nicos y sistemas similares.
Figura 2. Placa de prototipado
Est� hecho de dos materiales, un aislante, generalmente un pl�stico, y un conductor que conecta los diversos orificios entre s�. Uno de sus usos principales es la creaci�n y comprobaci�n de prototipos de circuitos electr�nicos antes de llegar a la impresi�n mec�nica del circuito en sistemas de producci�n comercial.
Una placa de pruebas est� compuesta por bloques de pl�stico perforados y numerosas l�minas delgadas, de una aleaci�n de cobre, esta�o y f�sforo, que unen dichas perforaciones, creando una serie de l�neas de conducci�n paralelas. Las l�neas se cortan en la parte central del bloque para garantizar que dispositivos en circuitos integrados de tipo dual in-line package (DIP) puedan ser insertados perpendicularmente y sin ser tocados por el proveedor a las l�neas de conductores. En la cara opuesta se coloca un forro con pegamento, que sirve para sellar y mantener en su lugar las tiras met�licas.
Debido a las caracter�sticas de capacitancia (de 2 a 30 pF por punto de contacto) y resistencia que suelen tener las placas de pruebas est�n confinados a trabajar a relativamente baja frecuencia (inferior a 10 o 20 MHz, dependiendo del tipo y calidad de los componentes electr�nicos utilizados).
Los dem�s componentes electr�nicos pueden ser montados sobre perforaciones adyacentes que no compartan la tira o l�nea conductora e interconectados a otros dispositivos usando cables, usualmente unifilares. Uniendo dos o m�s placas es posible ensamblar complejos prototipos electr�nicos que cuenten con decenas o cientos de componentes.
Proyecto 5 Gasesboard |
P�gina 5 de 17
Mini USB Cable
Los cables de bus serie universal vienen en diferentes tama�os y especificaciones, incluyendo el Mini USB de 4 pines y otros con conectores de 5 pines. Los conectores no son intercambiables y est�n fabricados para funcionar con diferentes dispositivos. Los conectores mini USB se han desarrollado para su uso con dispositivos port�tiles m�s peque�os que las computadoras en los que los cables USB se originaron.
Los conectores USB Mini de 5 pines cumplen las especificaciones de los cables mini establecidos por el Foro de Implementadores USB. El conector de 4 pines mini USB es un conector no oficial que fue desarrollado por terceros espec�ficamente para su uso con c�maras digitales, de acuerdo con Cables To Go. El conector de 5 pines USB se puede utilizar con varias c�maras digitales, tel�fonos celulares y otros dispositivos electr�nicos peque�os. El diferente tama�o y n�mero de pines hacen que cada tipo de cable sea �nico e incompatibles con los dispositivos perif�ricos que aceptan s�lo el otro.
Ambos tipos de cables mini USB se basan en la funcionalidad original de anfitri�n y esclavo, lo que significa que un solo dispositivo, que es t�picamente una computadora, act�a como anfitri�n, mientras que el otro, que es t�picamente un perif�rico, act�a como un esclavo. El anfitri�n determina las acciones que se llevan a cabo y la informaci�n que se transfiere, en tanto que el dispositivo esclavo proporciona al anfitri�n informaci�n y completa solicitudes. Ambos tipos de cables mini USB son capaces de funcionar en el est�ndar USB 2.0.
GASESBOARD WASPMOTE
Descripci�n General
El Waspmote Gases Sensor Board ha sido dise�ado para monitorear par�metros ambientales tales como temperatura, humedad, presi�n atmosf�rica y 14 tipos de gases diferentes. Permite la inclusi�n de 7 sensores de gases al mismo tiempo, la regulaci�n de su poder a trav�s de un sistema de interruptores de estado s�lido y la amplificaci�n de la se�al de salida de cada uno de ellos a trav�s de una etapa de amplificaci�n no inversora controlada por un potenci�metro digital configurable a trav�s del Inter-Integrated Circuit Bus, I2C
Los gases que pueden ser monitoreados son:
�� Mon�xido de carbono - CO �� Di�xido de carbono - CO2
�� Oxigeno - O2 �� Metano - CH4
�� Hidr�geno molecular - H2 �� Amon�aco - NH3
�� Isobutano - C4H10 �� Etanol - CH3CH2OH
�� Tolueno - C6H5CH3 �� Sulfuro de hidr�geno - H2S
�� Di�xido de Nitr�geno - NO2 �� Ozono - O3
�� Compuestos Org�nicos Vol�tiles (VOC's) �� Hidrocarburos
Proyecto 5 Gasesboard |
P�gina 6 de 17
Placa real y especificaciones
Las caracter�sticas t�cnicas de la placa usada para dicha pr�ctica son:
? Peso: 20 gr
? Dimensiones: 73.5 x 51 x 1.3 mm
? Rango de temperatura: [-20 �C, 65 �C]
? Voltaje de alimentaci�n de la placa: 3.3 V y 5 V
? Voltaje de alimentaci�n del sensor: 5 V
? Corriente admitida m�xima (continua): 200 mA
? Corriente admitida m�xima (pico): 400 mA
A continuaci�n, se va a mostrar de forma te�rica el uso que tiene cada Socket de la placa, aunque no se han usado todos para dicha pr�ctica.
Figura 3. Placa Gasesboard
Socket 1
Oxigeno � O2
Socket 2
Di�xido de carbono � CO2
Socket 3
Di�xido de Nitr�geno � NO2
Socket 4
Amon�aco � NH3
Mon�xido de carbono � CO
Socket 5
Compuestos Org�nicos Vol�tiles (VOC�s)
Ozono � O3
Socket 6 y Socket 7
Socket 6 y Socket 7
Metano � CH4
Isobutano � C4H10
Etanol � CH3CH2OH
Tolueno � C6H5CH3
Sulfuro de hidr�geno � H2S
Hidrocarburos
Socket 8
Temperatura, humedad y presi�n
Tabla 1. Socket placa Gasesboard
Proyecto 5 Gasesboard |
P�gina 7 de 17
Caso pr�ctico
Se solicita medir:
? Temperatura ambiente
? Di�xido de carbono - CO2
? Metano - CH4
? Calidad del aire mediante la lectura del Di�xido de Nitr�geno - NO2
A continuaci�n, en la fotograf�a se puede ver la situaci�n de los sensores en su Socket correspondiente como se ha explicado en el apartado
Figura 4. Montaje real
Proyecto 5 Gasesboard |
P�gina 8 de 17
SENSOR CO2
Descripci�n
El �TGS4161� es un nuevo sensor s�lido de electrolito de CO2 que ofrece bajo consumo de energ�a. Este puede detectar un rango de 350 ~ 10.000 ppm de di�xido de carbono, por lo que es adecuado para aplicaciones de control de aire en interiores.
El elemento sensible al CO2 consiste en un electrolito s�lido formado entre dos electrodos, junto con un sustrato de calentador impreso (RuO2). Al monitorear el cambio en la fuerza electromotriz (EMF) generado entre los dos electrodos, es posible medir la concentraci�n de CO2.
La parte superior de la tapa del sensor contiene adsorbente (zeolita) con el fin de reducir la influencia de los gases de interferencia.
El sensor muestra una buena estabilidad a largo plazo y una buena durabilidad frente a los efectos de la alta humedad.
Figura 5: Sensor de CO2.
Especificaciones
A continuaci�n, se detallan las especificaciones del sensor CO2 utilizado. Especificaciones Gases CO2
Rango de medida
350 a 10000 ppm Voltaje a 350 ppm 220 a 490 mV
Sensibilidad
44 a 72 mV (Variaci�n entre el voltaje a 350 ppm y a 3500 ppm) Voltaje de alimentaci�n 5 V � 0.2 V DC
Temperatura de operaci�n
-10 a +50 �C Tiempo de respuesta 1.5 minutos
Consumo medio
50 mA
Tabla 2: Especificaciones Sensor CO2
Proyecto 5 Gasesboard |
P�gina 9 de 17
SENSOR DE CH4
Descripci�n
El TGS2611 es un sensor de gas de tipo semiconductor que combina una sensibilidad muy alta al gas metano con bajo consumo de energ�a y larga vida �til.
Este sensor est� disponible en dos modelos que tienen diferentes carcasas externas pero id�ntica sensibilidad al gas metano. Ambos modelos pueden satisfacer los requisitos de est�ndares de rendimiento como UL1484 y EN50194.
? El TGS2611-C00 posee un tama�o peque�o y una respuesta de gas r�pida, por lo que es adecuado para verificadores de fuga de gas.
? El TGS2611-E00 utiliza material de filtro en su carcasa que elimina la influencia de gases de interferencia como el alcohol, lo que da lugar a una respuesta altamente selectiva al gas metano. Esta caracter�stica hace que el sensor sea ideal para detectores de fugas de gas residenciales que requieren durabilidad y resistencia contra gases de interferencia.
Figura 6: sensor de CH4.
Especificaciones
A continuaci�n, se detallan las especificaciones del sensor CH4 utilizado. Especificaciones Gases CH4 , H2
Rango de medida
500 a 10000 ppm Resistencia a 5000 ppm 0.68 a 6.8 kO
Sensibilidad
0.6 � 0.06 (ratio entre la resistencia a 9000 y a 3000 ppm) Voltaje de alimentaci�n 5 V � 0.2 V DC
Temperatura de operaci�n
-10 a +40 �C Tiempo de respuesta 30 segundos
Resistencia m�nima a la carga
0.45 kO Consumo medio 61 mA
Tabla 3: Especificaciones sensor CH4.
Proyecto 5 Gasesboard |
P�gina 10 de 17
SENSOR DE NO2
Descripci�n
El MiCS-2714 es un sensor cuya resistencia var�a ante peque�as variaciones de NO2. A diferencia del resto de sensores que operan a una tensi�n de 5V, este sensor se alimenta a trav�s de un regulador de tensi�n de 18V, con un consumo de aproximadamente 26 mA.
Figura 7: Sensor de NO2.
Especificaciones
A continuaci�n, se detallan las especificaciones del sensor NO4 utilizado. Especificaciones Gases NO2
Rango de medida
0.05 a 5 ppm Resistencia al aire 0.8 a 8 kO (normalmente 2.2 kO)
Sensibilidad
6 a 100 (normalmente 55, ratio entre la resistencia a 0.25 ppm y en aire) Voltaje de alimentaci�n 1.7 � 2.5 V DC
Temperatura de operaci�n
-30 a +85 �C Tiempo de respuesta 30 segundos
Consumo medio
26 mA (a lo largo de todo el ciclo de suministro de energ�a en un segundo)
Tabla 4. Especificaciones sensor NO2.
Proyecto 5 Gasesboard |
P�gina 11 de 17
SENSOR DE TEMPERATURA
Descripci�n
El BME280 es un sensor digital de temperatura, humedad y presi�n.
Figura 8: Sensor de Temperatura
Especificaciones
A continuaci�n, se detallan las especificaciones del sensor de temperatura utilizado. Especificaciones Rango de medida -40 a +85 �C
Rango de precisi�n
0 a +65 �C Exactitud � 1 (rango de 0 a +65 �C)
Tiempo de respuesta
1.65 s (63% de respuesta de 30 a 125 �C) Consumo 1 �A
Tabla 5. Especificaciones sensor temperatura
Proyecto 5 Gasesboard |
P�gina 12 de 17
XBEE PRO S1
Los XBee�s son peque�os chips azules capaces de comunicarse de forma inal�mbrica unos con otros. Pueden hacer cosas simples, como reemplazar un par de cables en una comunicaci�n serial.
�Qu� es realmente un XBee? � De acuerdo a Digi, los m�dulos XBee son soluciones integradas que brindan un medio inal�mbrico para la interconexi�n y comunicaci�n entre dispositivos. Estos m�dulos utilizan el protocolo de red llamado IEEE 802.15.4 para crear redes FAST POINT-TO-MULTIPOINT (punto a multipunto); o para redes PEER-TO-PEER (punto a punto). Fueron dise�ados para aplicaciones que requieren de un alto tr�fico de datos, baja latencia y una sincronizaci�n de comunicaci�n predecible.
Existen muchos tipos diferentes de m�dulos, pero una de las ventajas de estos XBee, es que todos, independiente del modelo o serie, tienen los pines similares. Alimentaci�n, tierra y los pines de comunicaci�n (TX/RX) se encuentran en el mismo lugar, haciendo que los chips sean totalmente intercambiables para la mayor�a de las aplicaciones m�s simples, aunque de las caracter�sticas m�s avanzadas no son siempre compatibles.
La diferencia fundamental entre un XBee regular y un XBee PRO (nuestro caso) se centra en dos aspectos: Hardware y distancia de comunicaci�n.
? Hardware: el XBee PRO es un poco m�s largo
? Comunicaci�n: la versi�n Pro tiene un mayor alcance (1,6 Km l�nea vista), pero para ello tiene un mayor consumo de potencia.
El criterio para tomar la decisi�n de cual usar es la distancia que uno requiera comunicar dos XBee. Los dos modelos se pueden mezclar dentro de la misma red y normalmente trabajan a la frecuencia de 2.4 GHz.
Antena de 2.4 GHz
Descripci�n
2.4GHz 4dbi Wifi Antena M�dulo Para Router Inal�mbrico Bluetooth Laptop Component
Introducci�n del producto:
1.Frequnecy: 2400MHz - 2500MHz 2.Gain: 5-6dBi 3.Impedance: 50 ohmios 4.Longitud Total: 195m m (antena plegable) 5. Direcci�n Gain: omni 6. Manera Conjunta: Orificio interno SMA 7.Distancia Gain: 1-70M 8.Technical Especificaci�n: cable coaxial de la se�al SMA 9.SMA Material del cable: Cable RG1.13 10.Outlet: interfaz de 20CM a IPEX
Proyecto 5 Gasesboard |
P�gina 13 de 17
Campos de aplicaci�n:
1.M�dulo WIFI 2. Tarjeta de red 3. Ordenador de escritorio 4.PAD 5.Model avi�n de control remoto 6.Bluetooth 7. Monitorizaci�n de redes 8.Wireless 9. Hogar inteligente 10.Conector de red 11.Router inal�mbrico 12.Optical 13.Interchanger 14.Laptop
Figura 9. Placa completa con antena y Xbee pro S1
Proyecto 5 Gasesboard |
P�gina 14 de 17
Led Rojo y Led Verde
Un led comienza a emitir cuando se le aplica una tensi�n de 2-3 voltios. En polarizaci�n inversa se utiliza un eje vertical diferente al de la polarizaci�n directa para mostrar que la corriente absorbida es pr�cticamente constante con la tensi�n hasta que se produce la ruptura.
El led es un diodo formado por un chip semiconductor dopado con impurezas que crean una uni�n PN. Como en otros diodos, la corriente fluye f�cilmente del lado p, o �nodo, al n, o c�todo, pero no en el sentido opuesto.
Los portadores de carga (electrones y huecos) fluyen a la uni�n desde dos electrodos puestos a distintos voltajes. Cuando un electr�n se recombina con un hueco, desciende su nivel de energ�a y el exceso de energ�a se desprende en forma de un fot�n. La longitud de onda de la luz emitida, y por tanto el color del led, depende de la anchura en energ�a de la banda prohibida correspondiente a los materiales que constituyen la uni�n pn.
Figura 10. Funcionamiento LED
A continuaci�n, podemos ver las caracter�sticas y materiales que debe tener el Led para emitir los dos colores de nuestro caso pr�ctico.
COLOR
LONGITUD DE ONDA
VOLTAJE
MATERIAL
ROJO
610 < ? < 760
1.63 < ?V < 2.03
? Arseniuro de galio aluminio (AlGaAs)
? Fosfuro de galio y ars�nico (GaAsP)
? Fosfuro de aluminio-galio-indio (AlGaInP)
? Fosfato de galio (GaP)
VERDE
500 < ? < 570
1.971 < ?V < 4.0
? Fosfato de galio (GaP)
? Fosfuro de aluminio-galio-indio (AlGaInP)
? Fosfuro de galio-aluminio (AlGaP)
Tabla 6. Caracter�sticas del LED
Proyecto 5 Gasesboard |
P�gina 15 de 17
2. Pasos para el desarrollo del proyecto
A continuaci�n se enumera el proceso seguido durante el desarrollo de la pr�ctica:
1-Verificaci�n del material que ha sido entregado
2-Comprobaci�n de las caracter�sticas de cada componente, usando el datasheet.
3-Montaje de la placa waspmote y placa Gasesboard waspmote y realzar la identificaci�n de la placa con el software de waspmote en el ordenador. En este paso se encontraron dificultades con los drivers para la detecci�n de la placa por parte del ordenador.
4-Montaje individual y testeo de cada sensor ya que cada uno dispone de una calibraci�n distinta. Teniendo en cuenta que la placa tiene 6 huecos y los sensores 4 patillas, debiendo conectar los sensores en los 4 huecos exteriores.
Figura 11. Colocaci�n de sensores
5-Unificaci�n de los c�digos de todos los sensores, montaje de todos los sensores juntos en la placa Gasesboard y prueba de funcionamiento.
6-Montaje de placa de prototipado compuesta por led y bot�n.
7-Interconexi�n de la placa de prototipado con las placas waspmote y Gasesboard.
8-Pruebas de funcionamiento de todo el sistema.
Proyecto 5 Gasesboard |
P�gina 16 de 17
Programaci�n de la placa
Todos los c�digos necesarios para el funcionamiento de GasesBoard v3.0 se han encontrado dentro del software �Waspmote-pro-ide�, seleccionando para cada caso el sensor del que se dispone.
Cabe destacar en para el sensor de CO2 se ha tenido que recalibrar el sensor asignado valores intermedios de voltaje para concentraci�n (partes por mill�n, PPM) de CO2 en el aire.
A continuaci�n se muestra el nombre de los c�digos para cada sensor dentro del software waspnote:
? Ga_v30_01_BME280_sensor_reading. Para el sensor de temperatura, presi�n y humedad
? Ga_v30_03_CO2_sensor_reading. Para el sensor de CO2
? Ga_v30_07_CH4_sensor_reading. Para el sensor de CH4
? Ga_v30_09_NO2_sensor_reading. Para el sensor de NO2
Una vez que se comprueba el funcionamiento de todos los c�digos por separado se unen en un mismo script y se incluye la funci�n de encendido y apagado del LED seg�n los niveles indicados de concentraci�n de cada gas.
En el siguiente enlace de GitHiub se encuentra el c�digo de este proyecto.
https://github.com/IIA2017/Proyecto5
3. Configuraciones de salida de los sensores
Figura 12. Sistema completo
Proyecto 5 Gasesboard |
P�gina 17 de 17
A continuaci�n, se muestra una captura del software waspmote donde se puede comprobar el correcto funcionamiento de los 4 sensores.
Figura 13. Funcionamiento sensores
En los v�deos adjuntos en la carpeta de Google Drive de la asignatura se muestra el funcionamiento correcto del sistema.
4. Ampliaci�n
No se ha podido realizar al no disponer de una segunda placa para realizar la comunicaci�n entre ambas.
Para la configuraci�n del m�dulo Xbee PRO S1 es necesario establecer los par�metros de configuraci�n en la tarjeta emisora y la receptora, para ello se utilizan los c�digos localizados en los ejemplos del software waspmote -pro-ide:
? _802_01_configure_XBee_parameters. Configuraci�n del m�dulo.
? _802_02_send_packets. Env�o de paquetes de datos.
? _802_03_receive_packets. Recepci�n de paquetes de datos.