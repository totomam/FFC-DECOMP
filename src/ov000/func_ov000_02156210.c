#include "ffc/types.h"

extern void func_02086b04(char *buf, int size, const char *fmt, int a, int b);
extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov000_02156b84(void *ctx, const void *tbl, const uint8_t *text, uint32_t v);
extern uint32_t func_02093bb4(const uint16_t *text);
extern int func_ov000_02156aec(void *ctx, const void *tbl, const uint8_t *text);
extern const char data_ov000_02169cec[];
extern const char data_ov000_02169cf8[];
extern const char data_ov000_02169d00[];
extern const char data_ov000_02169d08[];
extern const char data_ov000_02169d10[];
extern const char data_ov000_02169d18[];
extern const char data_ov000_02169d20[];
extern const char data_ov000_02169d28[];
extern const char data_ov000_02169d30[];
extern const char data_ov000_02169d38[];
extern const char data_ov000_02169d40[];
extern const char data_ov000_02169d48[];
extern const char data_ov000_02169d50[];
extern const char data_ov000_02169d58[];
extern const char data_ov000_02169d60[];
extern const char data_ov000_02169d68[];
extern const char data_ov000_02169d80[];
extern const char data_ov000_02169d8c[];

uint32_t func_ov000_02156210(void *ctx, uint8_t *base, int flag)
{
    char buf[0x21];

    func_02086b04(buf, 0x21, data_ov000_02169cec, 5, 3);
    if (func_ov000_02156b84(ctx, data_ov000_02169cf8, (uint8_t *)buf, func_02092864((uint8_t *)buf))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d00, base, func_02092864(base))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d08, base + 0xe, func_02092864(base + 0xe))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d10, base + 0x41, func_02092864(base + 0x41))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d18, base + 0x6f, func_02092864(base + 0x6f))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d20, base + 0x15, func_02092864(base + 0x15))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d28, base + 0x1a, func_02092864(base + 0x1a))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d30, base + 0x1d, func_02092864(base + 0x1d))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d38, base + 0x1f, func_02092864(base + 0x1f))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d40, base + 0x2c, func_02092864(base + 0x2c))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d48, base + 0x2f, func_02092864(base + 0x2f))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d50, base + 0x34, func_02092864(base + 0x34))) {
        return 0;
    }
    if (func_ov000_02156b84(ctx, data_ov000_02169d58, base + 0x7e,
                            func_02093bb4((const uint16_t *)(base + 0x7e)) * 2)) {
        return 0;
    }
    if (flag == 1) {
        if (func_ov000_02156b84(ctx, data_ov000_02169d60, base + 0x4e, func_02092864(base + 0x4e))) {
            return 0;
        }
    }

    func_02086b04(buf, 0x21, data_ov000_02169d68, 5, 3);
    if (func_ov000_02156aec(ctx, data_ov000_02169d80, (uint8_t *)buf)) {
        return 0;
    }
    if (func_ov000_02156aec(ctx, data_ov000_02169d8c, base + 0x15)) {
        return 0;
    }
    return 1;
}
