#include "ffc/types.h"

extern void func_ov011_021c9f70(uint8_t *p);
extern void func_0201b7dc(void *p);
extern void func_020212a4(int x);
extern uint32_t func_0203b750(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);
extern void *data_020b93b8;

void func_ov011_021ca00c(uint8_t *p)
{
    if (*(int32_t *)(p + 0x94) == 1) {
        *(int32_t *)(p + 0x94) = 0;
        func_ov011_021c9f70(p);
        return;
    }
    func_0201b7dc(data_020b93b8);
    ((uint8_t *)data_020b93b8)[0x29] = 1;
    func_020212a4(0x1e);
    func_02056bc0(p + 0x14, (void *)func_0203b750());
    func_02056bc0(p + 0x14, func_02056aec(p));
    {
        uint32_t *obj = *(uint32_t **)(p + 0x98);
        if (obj != 0) {
            *obj = 0;
        }
    }
}
