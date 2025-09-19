#include <stdio.h>
#include "pq.h"

// -------------------------------
// Demo: Hybrid Classical + PQC Handshake
// -------------------------------

int main() {
    printf("=== Hybrid Handshake Demo ===\n\n");

    // Step 1: Classical key (fake)
    int classical_key = 42;
    printf("Classical key: %d\n", classical_key);

    // Step 2: PQC keypair
    Keypair pqc;
    generate_keypair(&pqc);
    printf("PQC public key: %d\n", pqc.public_key);
    printf("PQC private key: %d\n", pqc.private_key);

    // Step 3: Combine for hybrid shared secret
    int hybrid_secret = hybrid_shared_secret(classical_key, pqc.public_key);
    printf("Hybrid shared secret (classical + PQC): %d\n\n", hybrid_secret);

    // Step 4: Encrypt a message with PQC key
    const char *message = "HELLO PQC";
    int ciphertext = encrypt_message(message, &pqc);
    printf("Encrypting message '%s' with PQC key: %d\n", message, ciphertext);

    printf("\nDemo complete.\n");
    return 0;
}

