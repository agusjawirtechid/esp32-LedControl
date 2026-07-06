# 💡 ESP32 WiFi Lamp Control

Kontrol 3 lampu menggunakan ESP32 melalui web browser tanpa aplikasi
tambahan.

## ✨ Fitur

-   🌐 ESP32 membuat WiFi Access Point sendiri.
-   💻 Kontrol melalui browser.
-   💡 Mengontrol 3 lampu (GPIO 4, GPIO 16, GPIO 17).
-   🔄 Tombol berubah otomatis **Hidupkan** ↔ **Matikan**.
-   ⚡ Menggunakan JavaScript `fetch()` sehingga halaman tidak perlu
    di-refresh.

------------------------------------------------------------------------

## 🔌 Wiring Diagram

```{=html}
<p align="center">
```
`<img src="assets/foto.jpg" alt="ESP32 Wiring Diagram" width="700">`{=html}`<br>`{=html}
`<em>`{=html}ESP32 dengan 3 LED pada GPIO 4, GPIO 16, dan GPIO
17.`</em>`{=html}
```{=html}
</p>
```

------------------------------------------------------------------------

## 🛠 Hardware

-   ESP32 DevKit
-   3× LED
-   3× Resistor 220Ω
-   Breadboard
-   Jumper Wire

------------------------------------------------------------------------

## 📍 GPIO

  Lampu      GPIO
  --------- ------
  Lampu 1     4
  Lampu 2     16
  Lampu 3     17

------------------------------------------------------------------------

## 📡 Cara Menggunakan

1.  Upload sketch ke ESP32.
2.  Hubungkan perangkat ke WiFi:
    -   **SSID:** `wifi lampu`
    -   **Password:** *(kosong)*
3.  Buka browser dan akses:

``` text
http://192.168.4.1
```

4.  Tekan tombol untuk mengontrol lampu.

------------------------------------------------------------------------

## 📂 Struktur Project

``` text
ESP32-WiFi-Lamp-Control/
├── assets/
│   └── foto.jpg
├── ESP32_WiFi_Lamp_Control.ino
├── README.md
└── LICENSE
```

------------------------------------------------------------------------

## 🚀 Teknologi

-   ESP32
-   Arduino IDE
-   HTML
-   JavaScript (Fetch API)
-   WebServer.h

------------------------------------------------------------------------

## 📜 License

Project ini menggunakan lisensi **MIT**.

Silakan digunakan, dimodifikasi, dan dipelajari.

------------------------------------------------------------------------

⭐ Jika project ini bermanfaat, jangan lupa berikan **Star** di GitHub!
