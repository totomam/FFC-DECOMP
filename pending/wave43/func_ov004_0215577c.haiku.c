#include "ffc/types.h"

extern void *data_0213e098;
extern void *func_02055054(void *a);
extern void *func_0209a978(uint32_t a, void *b);
extern void *func_020215a4(int a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203c058(uint32_t a);
extern void *func_0203c044(uint32_t a);
extern void *func_0203c0a8(uint32_t a);
extern void *func_0203c094(uint32_t a);
extern void *func_0203b6fc(void);
extern void *func_02056aec(void *a);

void func_ov004_0215577c(uint8_t *p)
{
    void *r7;
    uint32_t r4 = 0x78;
    void *n;
    void *r6;

    n = func_02055054(data_0213e098);
    n = func_0209a978(r4, n);
    n = func_020215a4(r4 - 0x79, n);
    func_02056bc0(p + 0x14, n);

    if (*(int32_t *)(p + 0xb0) != 4) {
        r7 = func_0203c058(r4);
        r4 = (uint32_t)func_0203c044(r4);
    } else {
        r7 = func_0203c0a8(r4);
        r4 = (uint32_t)func_0203c094(r4);
    }

    r6 = func_0203b6fc();
    func_02056bc0(r6, (void *)r4);
    func_02056bc0(r6, r7);
    func_02056bc0(p + 0x14, r6);
    func_02056bc0(p + 0x14, func_02056aec(p));
}
