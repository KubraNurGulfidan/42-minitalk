# ft_minitalk

## Proje Hakkında (TR)
Bu proje, iki süreç (process) arasında UNIX sinyalleri kullanarak küçük bir haberleşme programı yazılmasını içerir. `SIGUSR1` ve `SIGUSR2` sinyalleri üzerinden bir sunucu (server) ve bir istemci (client) arasında veri aktarımı sağlanır.

### Teknik Detaylar
- **Sinyal Yönetimi**: `sigaction` ve `signal` yapıları kullanılarak sinyallerin yakalanması ve işlenmesi.
- **Bit Manipülasyonu**: Karakterlerin (ASCII) bitlere ayrılarak gönderilmesi ve sunucu tarafında tekrar birleştirilmesi.
- **Prosesler Arası Haberleşme (IPC)**: PID (Process ID) üzerinden hedeflenen sürece veri iletimi.
- **Bonus Özellikler**: Unicode karakter desteği ve sunucudan istemciye gönderilen "mesaj alındı" onayı (acknowledgment).

### Kullanım
- Projeyi derlemek için:
  ```bash
  make
- Sunucuyu başlatın:
  ```bash
  ./server
- İstemciden mesaj gönderin:
  ```bash
  ./client [SERVER_PID] "Mesajınız"
  

##  About the Project (EN)
The objective of this project is to create a small data exchange program using UNIX signals between two processes. Data transfer is achieved between a server and a client using SIGUSR1 and SIGUSR2 signals.

### Technical Details
- **Signal Management**: Catching and processing signals using sigaction and signal structures.
- **Bit Manipulation**: Breaking down characters (ASCII) into bits for transmission and reassembling them on the server side.
- **Inter-Process Communication (IPC)**: Transmitting data to the target process using PID (Process ID).
- **Bonus Features**: Unicode character support and acknowledgment signals sent from server to client.

### Usage
- To compile the project:
  ```bash
  make
- Start the server:
  ```bash
  ./server
- Send a message from the client:
  ```bash
  ./client [SERVER_PID] "Your message"
