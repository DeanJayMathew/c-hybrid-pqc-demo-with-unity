🔹 README.md Draft
# C Hybrid PQC Demo with Unity

A professional C library demonstrating **hybrid classical + post-quantum cryptography (PQC)**, complete with **modular library structure, unit tests, and a working demo program**. This project 
is designed to showcase clean **C project organization**, **unit testing with Unity**, and a simple **PQ crypto use case**.

--- 

## Features

- Memory-safe code: Zero leaks confirmed with Valgrind / AddressSanitizer

<img width="505" height="115" alt="Screenshot 2025-09-20 at 00 29 32" src="https://github.com/user-attachments/assets/397f7851-f28c-4d30-bedd-abc3abe84d49" />

- Modular C library design (`.h` / `.c`)  
- PQC-inspired keypair generation and encryption simulation  
- Hybrid classical + PQC handshake demonstration  
- Unit testing using [Unity](https://github.com/ThrowTheSwitch/Unity)  
- Demo program simulating a hybrid handshake for real-world style use  
- Build system via **Makefile**

---

## Project Structure

<img width="343" height="237" alt="Screenshot 2025-09-20 at 00 31 34" src="https://github.com/user-attachments/assets/c34ed64d-a15c-481a-b507-1764f3197f79" />


**Key takeaways for developers and recruiters:**

1. **Library structure in C** — separates interface (`.h`) and implementation (`.c`) files.  
2. **Unit testing professional workflow** — automated tests using Unity for function correctness.  
3. **Post-quantum crypto use case** — simulates hybrid classical + PQC handshake, illustrating cryptographic reasoning.

---

## Build & Test

Compile the library and run unit tests:

```bash
make
make test

--- 
Expected output:

tests/test_pq.c:27:test_generate_keypair:PASS
tests/test_pq.c:28:test_encrypt_message:PASS
tests/test_pq.c:29:test_hybrid_shared_secret:PASS

-----------------------
3 Tests 0 Failures 0 Ignored 
OK
