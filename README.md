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



c-hybrid-pqc-demo-with-unity/
│── include/ # Header files for the library
│ └── pq.h
│── src/ # Source files for the library
│ └── pq.c
│── tests/ # Unit tests with Unity
│ └── test_pq.c
│── demo/ # Demonstration programs
│ └── hybrid_handshake.c
│── unity/ # Unity unit testing framework
│── Makefile # Build and test automation


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


Expected output:

tests/test_pq.c:27:test_generate_keypair:PASS
tests/test_pq.c:28:test_encrypt_message:PASS
tests/test_pq.c:29:test_hybrid_shared_secret:PASS

-----------------------
3 Tests 0 Failures 0 Ignored 
OK

Demo Program

Run the hybrid handshake demo:

gcc -Iinclude -Wall -std=c11 demo/hybrid_handshake.c src/pq.c -o demo/hybrid_handshake
./demo/hybrid_handshake


Expected output (numbers will vary):

=== Hybrid Handshake Demo ===

Classical key: 42
PQC public key: 873
PQC private key: 129
Hybrid shared secret (classical + PQC): 915
Encrypting message 'HELLO PQC' with PQC key: 5970

Demo complete.

Learning Outcomes

This project will help you understand how liboqs is structured using standard C library design in the context of terminating post-quantum handshakes:

Library creation

Header/source separation

Unit testing with Unity

Simulation of cryptographic functions

Portfolio-ready GitHub presence

References

Unity Unit Testing Framework

Inspired by Post-Quantum Cryptography (PQC) concepts

License

MIT License
