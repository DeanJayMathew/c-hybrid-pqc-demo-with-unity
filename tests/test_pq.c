#include "unity.h"
#include "pq.h"

void setUp(void) {}
void tearDown(void) {}

void test_generate_keypair(void) {
    Keypair kp;
    generate_keypair(&kp);
    TEST_ASSERT_TRUE(kp.public_key >= 0);
    TEST_ASSERT_TRUE(kp.private_key >= 0);
}

void test_encrypt_message(void) {
    Keypair kp = {10, 5};
    int ciphertext = encrypt_message("HELLO", &kp);
    TEST_ASSERT_TRUE(ciphertext > 0);
}

void test_hybrid_shared_secret(void) {
    int secret = hybrid_shared_secret(5, 10);
    TEST_ASSERT_EQUAL(15, secret);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_generate_keypair);
    RUN_TEST(test_encrypt_message);
    RUN_TEST(test_hybrid_shared_secret);
    return UNITY_END();
}

