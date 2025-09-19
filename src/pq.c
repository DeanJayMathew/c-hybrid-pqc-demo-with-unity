#include "pq.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

void generate_keypair(Keypair *kp) {
    srand(time(NULL));
    kp->public_key = rand() % 1000;
    kp->private_key = rand() % 1000;
}

int encrypt_message(const char *message, Keypair *kp) {
    int len = strlen(message);
    return (len * kp->public_key) + kp->private_key;
}

int hybrid_shared_secret(int classical_key, int pqc_key) {
    return classical_key + pqc_key;
}

