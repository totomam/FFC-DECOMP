#include "ffc/types.h"

extern void *func_ov002_02198688(void *obj, uint32_t idx);
extern uint32_t func_ov002_021a1958(void *obj, uint32_t idx);
extern uint32_t func_ov002_021aa820(const void *obj);
extern uint32_t func_ov002_021aa830(const void *obj);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aa770(const void *object);
extern void *func_02015ba4(void *unused, uint32_t index);
extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a16fc(void *object);
extern uint16_t func_ov002_021a170c(const void *object);
extern void func_ov002_02198dec(void *object);
extern void func_ov002_0219f4d8(void);
extern void func_0201cf34(void *a, void *b);
extern void *data_020b8e44;
extern void *data_020b93b8;

uint16_t func_ov002_021c6278(void *p0, uint32_t p1)
{
    uint32_t r4 = 0;
    uint32_t r5;
    uint32_t r6;
    uint32_t r7;
    uint32_t tmp;
    uint8_t buf[0x98];

    if (p1 < 0xd) {
        r6 = (uint32_t)func_ov002_02198688(*(void **)((char *)p0 + 0x24), 0);
        r7 = (uint32_t)func_ov002_02198688(*(void **)((char *)p0 + 0x24), 1);
        r5 = func_ov002_021a1958((void *)r6, 0);
        tmp = func_ov002_021a1958((void *)r7, 0);

        switch (p1) {
        case 0:
            if (r5 != 0) {
                r4 = func_0209a76c(100 * func_ov002_021aa820((void *)r5), func_ov002_021aa830((void *)r5));
            }
            break;
        case 1:
            if (r6 != 0) {
                r4 = func_0209a76c(func_ov002_021a16fc((void *)r6), 0);
            }
            break;
        case 2:
            if (r7 != 0) {
                r4 = func_0209a76c(func_ov002_021a16fc((void *)r7), 0);
            }
            break;
        case 3:
            if (r6 != 0) {
                r4 = func_0209a76c(func_ov002_021a170c((void *)r6), 0);
            }
            break;
        case 4:
            if (r7 != 0) {
                r4 = func_0209a76c(func_ov002_021a170c((void *)r7), 0);
            }
            break;
        case 5:
            if (r5 != 0) {
                uint32_t v = func_ov002_021aa770((void *)r5);
                func_02015ba4((void *)0, v);
            }
            break;
        case 6:
            if (r5 != 0) {
                uint32_t v = func_ov002_021aa770((void *)r5);
                func_02015c98((void *)0, v);
            }
            break;
        case 7:
            func_ov002_02198dec(*(void **)((char *)p0 + 0x20));
            func_ov002_0219f4d8();
            break;
        case 8:
            func_0201cf34(data_020b93b8, buf + 0xc);
            r4 = (uint16_t)tmp;
            break;
        case 9:
            r4 = 0x270f;
            break;
        case 10:
            r4 = 0x270f;
            break;
        case 11:
            r4 = (uint16_t)tmp;
            break;
        case 12:
            func_0201cf34(data_020b93b8, buf + 0xc);
            r4 = (uint16_t)tmp;
            break;
        default:
            break;
        }
    }
    return (uint16_t)r4;
}
