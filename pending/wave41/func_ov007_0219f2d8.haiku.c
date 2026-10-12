#include "ffc/types.h"

extern void func_0201bcf4(uint32_t a, uint32_t b, uint8_t c);
extern void *func_02056aec(void);
extern void *func_0203c0a8(uint32_t a);
extern void *func_0203c094(uint32_t a);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b93b8;
extern uint32_t data_ov007_021c3288[];

void func_ov007_0219f2d8(uint8_t *p)
{
    if (*(uint32_t *)(p + 0x8c) == 1) {
        func_0201bcf4(data_020b93b8, 0x4f, *(p + 0x90));
        *(uint32_t *)(p + 0x80) = data_ov007_021c3288[0];
        *(uint32_t *)(p + 0x84) = data_ov007_021c3288[1];
        return;
    }

    **(uint32_t **)(p + 0x88) = 0;

    if (*(p + 0x90) == 0) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }

    {
        void *r7 = func_02056aec();
        void *sp0 = func_0203c0a8(0x1e);
        void *r4 = func_0203c094(0x1e);
        void *r6 = func_0203b6fc();
        func_02056bc0(r6, r4);
        func_02056bc0(r6, sp0);
        func_02056bc0(p + 0x14, r6);
        func_02056bc0(p + 0x14, r7);
    }
}
