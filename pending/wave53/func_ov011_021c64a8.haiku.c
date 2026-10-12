#include "ffc/types.h"

extern int func_ov011_021c5f74(uint32_t p);
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02047650(uint32_t a);
extern uint32_t func_02056aec(void *self);
extern uint32_t func_0203c044(uint32_t a);
extern uint32_t func_0203c058(uint32_t a);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b744(void);
extern uint32_t func_ov011_021c5fd0(uint32_t p);
extern uint32_t data_020b93b8;

void func_ov011_021c64a8(uint8_t *self, uint32_t p)
{
    uint32_t i;
    for (i = 0; i < 2; i++) {
        uint32_t v = *(uint32_t *)(self + 0xcc + i * 4);
        if (v == p) {
            uint32_t a, b, c, d, e, f;
            uint8_t *q;
            uint32_t r2 = (func_ov011_021c5f74(p) == 1) ? 1 : 0;
            func_0201bcf4(data_020b93b8, 1, r2);
            func_02047650(1);
            *(*(uint32_t **)(self + 0xb8)) = 0;
            a = func_02056aec(self);
            b = func_0203c044(30);
            c = func_0203c058(30);
            d = func_0203b6fc();
            func_02056bc0((void *)d, (void *)c);
            func_02056bc0((void *)d, (void *)b);
            e = func_0203b744();
            f = func_ov011_021c5fd0(p);
            q = self + 0x14;
            func_02056bc0(q, (void *)f);
            func_02056bc0(q, (void *)e);
            func_02056bc0(q, (void *)d);
            func_02056bc0(q, (void *)a);
            return;
        }
    }
}
