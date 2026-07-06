#include <WiFi.h>
#include <WebServer.h>

const char* ssd = "wifi lampu";
const char* password = "";
const int lampu = 4;
const int lampu2 = 16;
const int lampu3 = 17;

WebServer server(80);

String halamanWeb = R"rawliteral(
<button id="btn1" onclick="toggle(1)">hidupin</button>
<button id="btn2" onclick="toggle(2)">hidupin</button>
<button id="btn3" onclick="toggle(3)">hidupin</button>

<script>
    function toggle(nomor) {
        let btn = document.getElementById("btn" + nomor)

        if (btn.innerHTML == "hidupin") {
            fetch("/on" + nomor);
            btn.innerHTML = "matiin";
        }

        else {
            fetch("/off" + nomor);
            btn.innerHTML = "hidupin";
        }
    }
</script>
)rawliteral";

void handleWeb() {
    server.send(200, "text/html", halamanWeb);
}
//lampu di d4 nya
void handleOn1() {
    digitalWrite(lampu, HIGH);
    server.send(200, "text/plain", "udah");
}
void handleOff1() {
    digitalWrite(lampu, LOW);
    server.send(200, "text/plain", "udah");
}
//lampu di d16 nya
void handleOn2() {
    digitalWrite(lampu2, HIGH);
    server.send(200, "text/plain", "udah");
}
void handleOff2() {
    digitalWrite(lampu2, LOW);
    server.send(200, "text/plain", "udah");
}

//lampu di d17 nya
void handleOn3() {
    digitalWrite(lampu3, HIGH);
    server.send(200, "text/plain", "udah");
}
void handleOff3() {
    digitalWrite(lampu3, LOW);
    server.send(200, "text/plain", "udah");
}

void setup() {
    pinMode(lampu, OUTPUT);
    digitalWrite(lampu, LOW);
    
    pinMode(lampu2, OUTPUT);
    digitalWrite(lampu2, LOW);
    
    pinMode(lampu3, OUTPUT);
    digitalWrite(lampu3, LOW);

    WiFi.softAP(ssd, password);
    Serial.begin(115200);
    Serial.println(WiFi.softAPIP());

    server.on("/", handleWeb);
    server.on("/on1", handleOn1);
    server.on("/off1", handleOff1);

    server.on("/on2", handleOn2);
    server.on("/off2", handleOff2);

    server.on("/on3", handleOn3);
    server.on("/off3", handleOff3);
    server.begin();
}

void loop() {
    server.handleClient();
}

//jangan lupa star
