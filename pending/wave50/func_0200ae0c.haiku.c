#include "ffc/types.h"

extern uint32_t func_0203b9b4(uint32_t x);
extern void func_02057958(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0200ae7c(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020aafcc[2];
extern uint32_t data_020aafd4[2];

typedef struct {
    uint8_t pad[0x12];
    uint8_t f : 8;
} Flagged;

void func_0200ae0c(uint8_t *p) {
    uint32_t v = func_0203b9b4(1);
    *(uint32_t *)(p + 0x8c) = v;
    func_02057958();
    func_02056bc0(p + 0x48, *(void **)(p + 0x8c));
    ((Flagged *)(p + 0x48))->f = 1;
    ((Flagged *)(p + 0x14))->f = 1;
    {
        uint32_t r = func_0200ae7c(p, data_020aafcc[0], data_020aafcc[1], 1);
        func_02056bc0(p + 0x14, (void *)r);
    }
    {
        uint32_t a = data_020aafd4[0];
        uint32_t b = data_020aafd4[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
    }
}
