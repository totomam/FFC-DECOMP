#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern void *func_0203b6fc(void);
extern uint32_t func_0203c0a8(uint32_t x);
extern uint32_t func_0203c094(uint32_t x);
extern void *func_02061000(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *data_0213df20;

void func_ov007_0219e598(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint32_t *p = *(uint32_t **)(s + 0x84);
    uint32_t m = p[1] & (p[1] ^ p[2]);
    if (m & 0x1c0b) {
        if (m & 8) {
            **(uint8_t **)(s + 0x80) = 1;
        }
        *(uint32_t *)(s + 0x88) = 0;
        *(uint32_t *)(s + 0x8c) = 0xf;
    }
    if (*(uint32_t *)(s + 0x88) != 0) {
        (*(uint32_t *)(s + 0x88))--;
        return;
    }
    if (*(uint8_t *)(s + 0x91) != 0 ||
        (**(uint8_t **)(s + 0x80) != 0 && *(uint8_t *)(s + 0x90) != 0)) {
        uint32_t a = func_0203c0a8(*(uint32_t *)(s + 0x8c));
        uint32_t b = func_0203c094(*(uint32_t *)(s + 0x8c));
        void *t = func_0203b6fc();
        func_02056bc0(t, (void *)b);
        func_02056bc0(t, (void *)a);
        func_02056bc0(s + 0x14, t);
    } else {
        void *t = func_02061000(*(void **)((uint8_t *)data_0213df20 + 0x24),
                                *(uint32_t *)(s + 0x8c), 0, 0);
        func_02056bc0(s + 0x14, t);
    }
    {
        void *n = func_02056aec(self);
        func_02056bc0(s + 0x14, n);
    }
}
