🔥 Smart Fire Detection System

Bu proje, sıcaklık ve gaz sensörlerinden alınan verileri birlikte değerlendirerek yangın riskini tespit eden basit bir gömülü sistem prototipidir.

🛠️ Donanım

* Arduino Uno
* DHT11 (sıcaklık sensörü)
* MQ-2 (gaz/duman sensörü)
* Buzzer
* Kırmızı LED

⚙️ Nasıl Çalışır?

* DHT11 ile sıcaklık, MQ-2 ile gaz yoğunluğu okunur
* Sensör verileri belirlenen eşik değerlerle karşılaştırılır

Sistem iki farklı durumda çalışır:

**1. Gaz Sızıntısı (Uyarı Modu)**

* Sadece gaz değeri threshold'u aşarsa
* LED yakılır (sessiz uyarı)

**2. Yangın (Alarm Modu)**

* Hem sıcaklık hem gaz değeri eşik üstündeyse

* LED + buzzer aktif olur

* Sensör verileri UART (Serial) üzerinden anlık olarak izlenebilir

📖 Teknik Notlar

* Basit bir sensor fusion mantığı kullanıldı (AND koşulu)
* Karar mekanizması if-else yapısı ile kuruldu
* Sistem deterministik ve hızlı tepki verecek şekilde tasarlandı

⚠️ Limitasyonlar

* Sensörler kalibre edilmediği için ölçümler hassas değildir
* Sabit threshold kullanıldığı için ortam koşullarına adaptif değildir

💡 Geliştirme Fikirleri

* Adaptive threshold
* Sensör kalibrasyonu
* ESP8266 ile uzaktan bildirim (IoT entegrasyonu)
* Röle ile otomatik müdahale sistemi

🎥 Proje Demo

Projenin çalışma videosunu aşağıdan izleyebilirsiniz.



https://github.com/user-attachments/assets/633bbb7a-b0dc-49af-93b6-7b49733193ba

