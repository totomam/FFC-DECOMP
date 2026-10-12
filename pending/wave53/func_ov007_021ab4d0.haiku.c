#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_02056c9c(void *obj, uint32_t x);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02005858(void *a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02005560(void *a, void *b, uint32_t c);
extern void func_0205f52c(void *obj, S s);
extern void func_0205f3e0(void *obj, uint32_t x);
extern void func_0205f498(void *obj);
extern void func_020055a4(void *obj, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c5018[];
extern uint8_t data_ov007_021c5268[];
extern uint32_t data_0213df20;

uint8_t *func_ov007_021ab4d0(uint8_t *out, uint32_t unused, S s)
{
    uint8_t buf[0x44];
    uint32_t i;

    func_02056c9c(out, 0);
    *(uint8_t **)out = data_ov007_021c5018;
    for (i = 1; i <= 0x14; i++) {
        func_02091b10(buf, data_ov007_021c5268, i);
        if (i == 1) {
            void *p = func_0205681c(0x54);
            if (p != 0) {
                p = func_02005858(p, data_0213df20, buf, 1, 0);
            }
            *(void **)(out + 0x80) = p;
        } else {
            func_02005560(*(void **)(*(uint8_t **)(out + 0x80) + 0x50), buf, 1);
        }
    }
    func_0205f52c(*(void **)(*(uint8_t **)(*(uint8_t **)(out + 0x80) + 0x50) + 0x94), s);
    func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(out + 0x80) + 0x50) + 0x94), 0);
    func_0205f498(*(void **)(*(uint8_t **)(*(uint8_t **)(out + 0x80) + 0x50) + 0x94));
    func_020055a4(*(void **)(*(uint8_t **)(out + 0x80) + 0x50), 0);
    func_02056bc0(out + 0x48, *(void **)(out + 0x80));
    return out;
}
