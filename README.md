# 📡 Minitalk

The purpose of this project is to learn how to work with **UNIX signals** and code a small data exchange program.

---

## 📚 About

`Minitalk` is a simple message-passing system between two processes using **only UNIX signals** (`SIGUSR1` and `SIGUSR2`).  
It consists of a **server** and a **client**, where the client sends a string to the server bit by bit using signals.

This project emphasizes process communication, signal handling, and bit-level manipulation in C.

---

## 🛠️ Technologies Used

- **C Language** – Core programming language  
- **UNIX Signals** – Using `SIGUSR1` and `SIGUSR2` to transmit data  
- **Signal Handlers** – With `signal()` or `sigaction()`  
- **Bit Manipulation** – Sending characters bit by bit  
- **Makefile** – To build both server and client executables  
- **POSIX** – System-level programming concepts
