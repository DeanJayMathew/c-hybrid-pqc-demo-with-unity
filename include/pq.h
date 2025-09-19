#ifndef PQ_H
#define PQ_H

typedef struct {
    int public_key;
    int private_key;
} Keypair;

void generate_keypair(Keypair *kp);
int encrypt_message(const char *message, Keypair *kp);
int hybrid_shared_secret(int classical_key, int pqc_key);

#endif

