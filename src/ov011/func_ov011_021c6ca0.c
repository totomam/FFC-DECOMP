#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203c044(int id);
extern void *func_0203c058(int id);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);

void func_ov011_021c6ca0(uint8_t *p)
{
    void *r4;
    void *r6;
    uint8_t *q;

    r4 = func_0203b6fc();
    **(uint32_t **)(p + 0xb8) = 0;
    if (*(uint32_t *)(p + 0xcc) != 1) {
        **(uint32_t **)(p + 0xb8) = 1;
    }
    func_02056bc0(r4, func_0203c044(15));
    func_02056bc0(r4, func_0203c058(15));
    r6 = func_02056aec(p);
    q = p + 0x14;
    func_02056bc0(q, r4);
    func_02056bc0(q, r6);
}
