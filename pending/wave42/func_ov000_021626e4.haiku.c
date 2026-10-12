#include "ffc/types.h"

extern int func_ov000_0215b594(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_02084ca4(void *src, void *dst, uint32_t len);
extern int func_02092a04(const void *a, const void *b, uint32_t n);
extern int func_ov000_0215ed88(uint8_t a, uint32_t b, uint32_t c, uint16_t d, void *e, int f);
extern const uint8_t data_ov000_0216b100[];

typedef struct {
    uint8_t magic[4];
    uint32_t type;
    uint8_t f8;
    uint8_t f9;
    uint16_t f10;
    uint32_t f12;
    uint32_t f16;
} Blk;

void func_ov000_021626e4(uint8_t *base, int size)
{
    Blk b;
    uint8_t out[0x80];
    int off = 0;

    if (func_ov000_0215b594() != 4) {
        if (func_ov000_0215b594() != 5) {
            return;
        }
        if (func_ov000_02163350()[0x14] != 2) {
            if (func_ov000_02163350()[0x14] != 3) {
                return;
            }
        }
    }
    if (size < 0x14) {
        return;
    }
    do {
        func_02084ca4(base, &b, 0x14);
        if (func_02092a04(b.magic, data_ov000_0216b100, 4) != 0) {
            break;
        }
        if (b.type != 0x5a) {
            break;
        }
        func_02084ca4(base + 0x14, out, b.f9);
        if (func_ov000_0215ed88(b.f8, b.f16, b.f12, b.f10, out, b.f9 >> 2) == 0) {
            break;
        }
        off += b.f9 + 0x14;
    } while (off + 0x14 <= size);
}
