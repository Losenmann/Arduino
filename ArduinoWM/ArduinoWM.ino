#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#import "index.h"
 
const char* ssid = "...";        // Для SSID точки доступа
const char* password = "...";      // Для пароля к точке доступа
 
int ledPin = 2;           // Контакт GPIO2 на ESP8266
ESP8266WebServer server(80);
//WiFiServer server(80);          // Порт веб-сервера
 
void setup() {
  Serial.begin(115200);
  delay(10);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

// подключаемся к WiFi-сети:
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");     // Подключение к
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");   // Подключение к WiFi  выполнено

// Запускаем сервер:
  server.begin();
  Serial.println("Server started");   // Сервер запущен

// печатаем IP-адрес:
  Serial.print("Use this URL to connect: ");  // Используем этот URL для подключения:
  
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
  
  server.begin();
  server.on("/", handleRoot);
  Serial.println("HTTP server started");
}
void loop() {
  server.handleClient();
}

void handleRoot() {
  String s = MAIN_page;
  server.send(200, "text/html", s);
}
/*
void loop() {
// Проверяем, подключен ли клиент:
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

// Ждем, когда клиент отправит какие-нибудь данные:
  Serial.println("new client");     // Новый клиент
  while(!client.available()){
    delay(1);
  }

// Считываем первую строчку запроса:
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

// Обрабатываем запрос:
  int value = LOW;
  if (request.indexOf("/LED=ON") != -1) {
    digitalWrite(ledPin, LOW);
    value = HIGH;
  }
  if (request.indexOf("/LED=OFF") != -1){
    digitalWrite(ledPin, HIGH);
    value = LOW;
  }

// Выставляем значение на ledPin в соответствии с запросом:
// digitalWrite(ledPin, value);

// Возвращаем ответ:
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");  // Тип контента: text/html

  client.println("");       // Не забываем это...
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");

  client.print("Led pin is now: ");   // Контакт светодиода теперь в состоянии:

  if(value == HIGH) {
    client.print("On");     // Вкл
  } else {
    client.print("Off");      // Выкл
  }
  client.println("<br><br>");
  client.println("Click <a href=\"/LED=ON\">here</a> turn the LED on pin 2 ON<br>");  // Кликните тут, чтобы включить светодиод на контакте 2
  client.println("Click <a href=\"/LED=OFF\">here</a> turn the LED on pin 2 OFF<br>");  // Кликните тут, чтобы выключить светодиод на контакте 2
  client.println("<label>Верхний порог температуры</label><input maxlength=60 name=uptemp type=text value="">");
  client.println("<a href=\"/CE\"\"><button>Cold Enumerator</button></a><br>");
  client.println("<a href=\"/HE\"\"><button>Hot Enumerator</button></a><br>");
  client.println("</html>");

  delay(1);
  Serial.println("Client disconnected");    // Клиент отключен
  Serial.println("");
}
*/
