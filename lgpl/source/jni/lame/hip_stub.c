/*
 * hip_stub.c - Stub implementations for HIP decoder functions
 * We only need the encoder, not the decoder, but LAME references these
 */

#include <stddef.h>
#include <stdarg.h>

 /* Provide stub implementations to satisfy linker */
void hip_decode_exit(void* hip) {
    /* Stub - we don't use the decoder */
}

void* hip_decode_init(void) {
    /* Stub - return NULL since we don't decode */
    return NULL;
}

void hip_set_errorf(void* hip, void (*func)(const char*, va_list)) {
    /* Stub - we don't use the decoder */
}

void hip_set_debugf(void* hip, void (*func)(const char*, va_list)) {
    /* Stub - we don't use the decoder */
}

void hip_set_msgf(void* hip, void (*func)(const char*, va_list)) {
    /* Stub - we don't use the decoder */
}

int hip_decode1_unclipped(void* hip, unsigned char* buffer, size_t len, short pcm_l[], short pcm_r[]) {
    /* Stub - return 0 samples decoded */
    return 0;
}

/* Additional stubs that might be needed */
int hip_decode1(void* hip, unsigned char* buffer, size_t len, short pcm_l[], short pcm_r[]) {
    return 0;
}

int hip_decode1_headers(void* hip, unsigned char* buffer, size_t len, short pcm_l[], short pcm_r[], void* mp3data) {
    return 0;
}

int hip_decode1_headersB(void* hip, unsigned char* buffer, size_t len, short pcm_l[], short pcm_r[], void* mp3data, int* enc_delay, int* enc_padding) {
    return 0;
}

int hip_decode(void* hip, unsigned char* buffer, size_t len, short pcm_l[], short pcm_r[]) {
    return 0;
}