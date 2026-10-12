#include "ffc/types.h"

extern void *func_ov002_02198688(void *obj, uint32_t idx);
extern uint32_t func_ov002_021a1958(void *obj, uint32_t idx);
extern uint32_t func_ov002_021aa820(const void *obj);
extern uint32_t func_ov002_021aa830(const void *obj);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aa770(const void *object);
extern char *func_02015ba4(void *unused, uint32_t index);
extern char *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a16fc(void *object);
extern uint16_t func_ov002_021a170c(const void *object);
extern void func_ov002_02198dec(void *object);
extern uint32_t func_ov002_0219f4d8(void);
extern void func_0201cf34(void *a, void *b);
extern void *data_020b8e44;
extern void *data_020b93b8;

uint32_t func_ov002_021c6278(char *p0, uint32_t p1)
{
    uint32_t r4 = 0;
    uint32_t r5, r6, r7, tmp;
    uint32_t buf[0x26];

    if (p1 < 0xd) {
        r6 = (uint32_t)func_ov002_02198688(*(void **)(p0 + 0x24), 0);
        r7 = (uint32_t)func_ov002_02198688(*(void **)(p0 + 0x24), 1);
        r5 = func_ov002_021a1958((void *)r6, 0);
        tmp = func_ov002_021a1958((void *)r7, 0);
        switch (p1) {
        case 0:
            if (r5 != 0)
                r4 = func_0209a76c(100 * func_ov002_021aa820((void *)r5), func_ov002_021aa830((void *)r5));
            break;
        case 1:
            if (r6 != 0) r4 = func_ov002_021a16fc((void *)r6);
            break;
        case 2:
            if (r6 != 0) r4 = func_ov002_021a170c((void *)r6);
            break;
        case 3: case 4: case 5: case 6:
            if (r5 != 0) {
                char *p = func_02015ba4(data_020b8e44, func_ov002_021aa770((void *)r5));
                char *b = p + *(uint32_t *)(p + 0x98) - 6; uint32_t h = *(uint16_t *)(b + p1 * 2);
                if (h != 0) {
                    char *q = func_02015c98(data_020b8e44, h);
                    uint32_t o = *(uint32_t *)(q + 0x10);
                    if (o != 0) r4 = (uint32_t)(q + o);
                    r4 = *(uint16_t *)r4;
                } else r4 = 0x270f;
            }
            break;
        case 7:
            if (r5 != 0) {
                char *p = func_02015ba4(data_020b8e44, func_ov002_021aa770((void *)r5));
                uint32_t h = *(uint16_t *)(p + 0x4e);
                if (h != 0) {
                    char *q = func_02015c98(data_020b8e44, h);
                    uint32_t o = *(uint32_t *)(q + 0x10);
                    if (o != 0) r4 = (uint32_t)(q + o);
                    r4 = *(uint16_t *)r4;
                } else r4 = 0x270f;
            }
            break;
        case 8:
            if (tmp != 0)
                r4 = func_0209a76c(100 * func_ov002_021aa820((void *)tmp), func_ov002_021aa830((void *)tmp));
            break;
        case 9:
            if (r7 != 0) r4 = func_ov002_021a16fc((void *)r7);
            break;
        case 10:
            if (r7 != 0) r4 = func_ov002_021a170c((void *)r7);
            break;
        case 11:
            func_ov002_02198dec(*(void **)(p0 + 0x20));
            r4 = func_ov002_0219f4d8();
            break;
        case 12:
            func_0201cf34(data_020b93b8, buf);
            r4 = (buf[7] << 8) >> 16;
            break;
        }
    }
    return r4;
}
