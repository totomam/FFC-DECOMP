#include "ffc/types.h"

extern void func_0207b788(void *a);
extern void func_02077a7c(void *a, uint32_t b);
extern void func_02077aa4(void *a, void *b);
extern void func_02087620(void *object);
extern void func_0207e890(void *object);
extern void func_0207a054(void *object);
extern void func_0207be24(void *a, void *b);
extern uint32_t data_0213ecd0[];
extern uint8_t data_0213ecdc[];
extern uint8_t data_0213ed00[];
extern uint8_t data_0213ece8[];
extern uint8_t data_0213ee80[];
extern uint8_t data_0213f080[];
extern uint8_t data_0213f670[];

void func_0207b684(void *p0, void *p1) {
    int i = 0;
    if (data_0213ecd0[0] != 0) {
        func_0207b788(p1);
        return;
    }
    data_0213ecd0[0] = 1;
    func_02077a7c(data_0213ecdc, 0);
    while (i < 8) {
        func_02077aa4(data_0213ecdc, data_0213ed00 + i * 0x30);
        i++;
    }
    func_02087620(data_0213ece8);
    data_0213ecd0[2] = (uint32_t)data_0213ee80;
    for (i = 0; i < 4; i++) {
        uint8_t *r5 = data_0213f080 + i * (0x5f << 2);
        *(uint32_t *)(r5 + 280) &= ~1u;
        func_0207e890(r5 + 100);
        func_0207a054(r5);
        *(uint32_t *)(r5 + 336) = i;
        *(uint8_t *)(r5 + 300) = 0;
        *(uint32_t *)(r5 + 308) = 0;
        *(uint32_t *)(r5 + 312) = 0;
        *(uint32_t *)(r5 + 296) = 0;
    }
    func_0207b788(p1);
    func_0207be24(data_0213f670, p0);
}
