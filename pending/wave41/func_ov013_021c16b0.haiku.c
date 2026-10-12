#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020559d4(void *p);
extern void func_020696f8(uint32_t x);
extern uint32_t func_ov013_021c0d64(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4b5c;
extern Pair data_ov013_021c4b64;
extern Pair data_ov013_021c4b6c;

void func_ov013_021c16b0(uint8_t *p) {
    func_020559d4(p + 0x80);
    if (*(uint32_t *)(p + 0xf8)) {
        *(Pair *)(p + 0xb8) = data_ov013_021c4b5c;
        return;
    }
    if (p[0xe8]) {
        func_020696f8(*(uint32_t *)(p + 0xf0));
        func_02056bc0(p + 0x14, (void *)func_ov013_021c0d64(*(uint32_t *)(p + 0xf0)));
        *(Pair *)(p + 0xb8) = data_ov013_021c4b64;
        return;
    }
    if (p[0xe9]) {
        *(Pair *)(p + 0xb8) = data_ov013_021c4b6c;
    }
}
