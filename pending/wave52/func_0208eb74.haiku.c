#include "ffc/types.h"

typedef struct {
    uint16_t key;
    uint8_t x2;
    uint8_t x3;
    uint8_t x4;
    uint8_t flags;
    uint32_t v8;
} G;

extern int func_0208eb30(void);
extern void func_0208ec74(uint16_t v, void *p);
extern void func_0208ec18(void *p);
extern void func_0208ec4c(void *p);
extern void func_0208ecb0(uint16_t v, void *p);
extern uint8_t data_021440c0[];

int func_0208eb74(void) {
    uint8_t a[8];
    uint8_t b[8];
    int r5 = 1;
    G *g;
    uint8_t *h;
    uint8_t r3;

    if (func_0208eb30() == 0) {
        return 0;
    }
    g = (G *)0x02fffc30;
    if ((((uint32_t)g->flags << 0x1e) >> 0x1f) == 1) {
        return 0;
    }
    func_0208ec74(*(uint16_t *)(data_021440c0 + 6), a);
    func_0208ec18(b);
    h = (uint8_t *)0x08000000;
    r3 = h[0xb2];
    if (r3 == 0x96) {
        if (g->key != *(uint16_t *)(h + 0xbe)) {
            goto fail;
        }
    }
    if (r3 != 0x96) {
        if (((G *)0x02fffc30)->key != *(uint16_t *)0x0801fffe) {
            goto fail;
        }
    }
    if (g->v8 == *(uint32_t *)(h + 0xac)) {
        goto done;
    }
    if (!(g->flags & 1)) {
        goto done;
    }
fail:
    g->flags |= 2;
    r5 = 0;
done:
    func_0208ec4c(b);
    func_0208ecb0(*(uint16_t *)(data_021440c0 + 6), a);
    return r5;
}
