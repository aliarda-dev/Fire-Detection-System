🔥 Smart Fire Detection System
Bu proje, Akdeniz Üniversitesi Elektrik-Elektronik Mühendisliği bünyesindeki gömülü sistemler çalışmalarıma temel teşkil eden, Sensor Fusion (Sensör Füzyonu) tabanlı akıllı yangın algılama teknolojilerinin bir prototipidir. Çalışma kapsamında, ortamdaki sıcaklık ve gaz verilerinin eş zamanlı işlenerek sistemin tepki süresinin ve çalışma kararlılığının optimize edilmesi amaçlanmıştır.

🛠️ Sistem Mimarisi ve Donanım Bileşenleri
Mikrokontrolcü: Arduino Uno

Algılama Birimi: DHT11 (Sıcaklık/Nem Sensörü), MQ-2 (Gaz/Duman Sensörü)

İkaz Birimi: Aktif Buzzer, Kırmızı LED

Yazılım Mimarisi: C Programlama, Low-level Hardware Access

⚙️ Teknik Çalışma Prensibi
Sistem, güvenlik kritik (safety-critical) bir yaklaşımla, verilerin çapraz kontrolü üzerine kurulu şu mantıkla çalışır:

Veri Füzyonu (Data Fusion): DHT11 üzerinden sıcaklık, MQ-2 üzerinden ise gaz yoğunluğu verileri anlık olarak toplanarak dijital ortamda işlenir.

Kademeli İkaz Mekanizması: Sistem, çevresel verileri analiz ederek durumu iki ayrı seviyede sınıflandırır:

Gaz Sızıntısı (Uyarı Modu): Sadece gaz yoğunluğu eşik değerin üzerine çıktığında, sistem sadece görsel uyarı (LED) vererek sızıntıya karşı ikazda bulunur.

Yangın (Alarm Modu): Sıcaklık ve gaz değerlerinin eş zamanlı olarak eşik değerleri aşması durumunda sistem yangını teyit eder; sesli (Buzzer) ve görsel (LED) alarm mekanizmasını devreye sokar.

Hata Ayıklama & Loglama: Seri haberleşme protokolü (UART) üzerinden anlık durum raporu sunularak sistemin çevresel verileri izlenir.

📖 Mühendislik Kazanımları ve Analiz
Sensör Füzyonu (Sensor Fusion): Çoklu fiziksel parametrelerin (ısı ve gaz) mantıksal birleşimiyle sistem kararlılığının artırılması.

Gömülü Yazılım Mimarisi: main() ve init() kullanımıyla kütüphane bağımsız, düşük seviyeli donanım erişimi.

Algoritmik Düşünce: Şartlı durum yapıları (if-else) ile hızlı karar destek mekanizması tasarımı.

💡 Gelecek Vizyonu (Scalability)
Bu proje, akıllı bina otomasyonu sistemlerinde yangın güvenliğinin temelini simüle etmektedir. İleri aşamada sistemin Wi-Fi modülü (ESP8266) ile entegre edilerek, yangın anında bulut üzerinden mobil bildirim göndermesi ve otomatik yangın söndürme rölelerini tetiklemesi hedeflenmektedir.

🎥 Proje Demo
