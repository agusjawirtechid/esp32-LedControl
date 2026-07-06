# 💡 Kontrol Lampu ESP32 via Web

Project sederhana untuk mengontrol **3 lampu LED** menggunakan **ESP32**
melalui browser menggunakan **HTML**, **JavaScript**, dan **WebServer
Arduino**.

------------------------------------------------------------------------

## ✨ Fitur

-   🌐 ESP32 membuat WiFi Access Point sendiri.
-   💻 Kontrol lampu langsung dari browser.
-   💡 Mengontrol 3 lampu (GPIO 4, GPIO 16, GPIO 17).
-   🔄 Tombol otomatis berubah **Hidupin** ↔ **Matiin**.
-   ⚡ Menggunakan `fetch()` sehingga halaman tidak perlu dimuat ulang.

------------------------------------------------------------------------

## 🔌 Rangkaian

![Rangkaian ESP32](assets/foto.jpg)

------------------------------------------------------------------------

## 🛠 Perangkat yang Digunakan

-   ESP32 DevKit
-   3 LED
-   3 Resistor 220Ω
-   Breadboard
-   Kabel Jumper

------------------------------------------------------------------------

## 📍 Pin GPIO

  Lampu      GPIO
  --------- ------
  Lampu 1     4
  Lampu 2     16
  Lampu 3     17

------------------------------------------------------------------------

## 🚀 Cara Menggunakan

1.  Buka project menggunakan Arduino IDE.
2.  Upload sketch ke ESP32.
3.  Sambungkan perangkat ke WiFi berikut:

``` text
SSID     : wifi lampu
Password : (kosong)
```

4.  Buka browser lalu akses:

``` text
http://192.168.4.1
```

5.  Tekan tombol **Hidupin** atau **Matiin** untuk mengontrol lampu.

------------------------------------------------------------------------

## 📂 Struktur Project

``` text
ESP32-WiFi-Lamp-Control/
├── assets/
│   └── foto.jpg
├── main.ino
├── README.md
└── LICENSE
```

------------------------------------------------------------------------

## 📚 Teknologi

-   ESP32
-   Arduino IDE
-   HTML
-   JavaScript (Fetch API)
-   WebServer.h

------------------------------------------------------------------------

## 📜 Lisensi

Project ini menggunakan lisensi **MIT**.

Silakan digunakan, dipelajari, maupun dimodifikasi sesuai kebutuhan.

------------------------------------------------------------------------

⭐ Jika project ini bermanfaat, jangan lupa berikan **Star** pada
repository ini.
