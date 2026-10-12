#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    int32_t used;
    int32_t size;
    int32_t pad;
} FfcBuf;

extern void *func_ov000_021653d4(int32_t size);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const uint8_t *d, int32_t e);
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02167f34(FfcBuf *b, const uint8_t *s);
extern void func_ov000_021653f4(void *p);
extern int32_t func_ov000_02167f08(FfcBuf *b, int32_t x);
extern const uint8_t data_ov000_0216ba44[];
extern const uint8_t data_ov000_0216ba80[];
extern const uint8_t *data_ov000_0216b96c[];
extern const uint8_t data_ov000_0216ba88[];
extern const uint8_t data_ov000_0216bac4[];

FfcBuf *func_ov000_02167164(const uint8_t **names, int32_t count)
{
    FfcBuf *b;
    uint8_t *tmp;
    int32_t total = 0;
    int32_t size = 0x400;
    int32_t i;
    int32_t err = 0x10;

    b = func_ov000_021653d4(err);
    if (b == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216ba44, err);
        return 0;
    }

    for (i = 0; i < 4; i++) {
        total += func_02092864(data_ov000_0216ba80) + 1;
        total += func_02092864(data_ov000_0216b96c[i]);
    }
    for (i = 0; i < count; i++) {
        total += func_02092864(data_ov000_0216ba80) + 1;
        total += func_02092864(names[i]);
    }

    if (total > size) {
        do {
            size += 0x400;
        } while (size < total);
    }

    tmp = func_ov000_021653d4(size);
    b->buf = tmp;
    if (tmp == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216ba44, size);
        return 0;
    }

    b->size = size;
    b->used = 0;
    *b->buf = 0;
    b->pad = 0;

    if (func_ov000_02167f34(b, data_ov000_0216ba88) == 0) {
        func_ov000_021653f4(b->buf);
        func_ov000_021653f4(b);
        return 0;
    }

    for (i = 0; i < 4; i++) {
        if (func_ov000_02167f08(b, 0x20) == 0 ||
            func_ov000_02167f34(b, data_ov000_0216ba80) == 0 ||
            func_ov000_02167f34(b, data_ov000_0216b96c[i]) == 0) {
            func_ov000_021653f4(b->buf);
            func_ov000_021653f4(b);
            return 0;
        }
    }

    for (i = 0; i < count; i++) {
        if (func_ov000_02167f08(b, 0x20) == 0 ||
            func_ov000_02167f34(b, data_ov000_0216ba80) == 0 ||
            func_ov000_02167f34(b, names[i]) == 0) {
            func_ov000_021653f4(b->buf);
            func_ov000_021653f4(b);
            return 0;
        }
    }

    if (func_ov000_02167f08(b, 0x3e) == 0 ||
        func_ov000_02167f34(b, data_ov000_0216bac4) == 0) {
        func_ov000_021653f4(b->buf);
        func_ov000_021653f4(b);
        return 0;
    }

    return b;
}
