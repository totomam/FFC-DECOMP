#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201cf34(uint32_t a, void *buf);
extern void func_0201ce70(uint32_t a, void *buf);
extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021ca06c(uint8_t *p)
{
    uint16_t buf[0x98 / 2];
    uint32_t i = 0;
    int32_t flag;
    uint32_t n;
    uint16_t *src;
    void *r;
    int32_t *q;

    func_0201cf34(data_020b93b8, buf);
    flag = 0;
    n = 0;
    while (i < n) {
        if (flag) {
            src = *(uint16_t **)(p + 0x90);
        } else {
            src = (uint16_t *)(p + 0x8a);
        }
        buf[i] = src[i];
        i++;
        flag = (*(uint32_t *)(p + 0x88) & 1) != 0;
        if (flag) {
            n = *(uint32_t *)(p + 0x8c);
        } else {
            n = (*(uint8_t *)(p + 0x88) >> 1) & 0x7f;
        }
    }
    func_0201ce70(data_020b93b8, buf);
    r = func_02056aec(p);
    func_02056bc0(p + 0x14, r);
    q = *(int32_t **)(p + 0x98);
    if (q != 0) {
        *q = 1;
    }
}
