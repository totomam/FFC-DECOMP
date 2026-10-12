#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern void *func_0203b81c(uint32_t n);
extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_0201f680(void *a, uint32_t b);
extern void func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c55b4[];
extern void *data_020b8e44;
extern void *data_020b93b8;
extern char data_ov007_021c5630[];
extern char data_ov007_021c5518[];

void *func_ov007_021aea84(void *a, void *b)
{
    uint32_t buf[16];
    void *t8;
    void *node;
    uint32_t i;

    node = (uint8_t *)a + 0x48;
    func_02056c9c(a, 0);
    *(void **)a = (void *)data_ov007_021c55b4;
    t8 = func_0203b81c(10);

    for (i = 0; i < 5; i++) {
        uint8_t *p = (uint8_t *)b + i * 4;
        if (*(uint32_t *)(p + 0x68) != 0) {
            void *q = func_02015ba4(data_020b8e44, *(uint32_t *)(p + 0x68));
            uint16_t r4 = *(uint16_t *)((uint8_t *)q + 0x40);
            uint32_t r3 = func_0201f680(data_020b93b8, *(uint32_t *)(p + 0x20c));
            void *obj;
            uint32_t flag = 1;
            uint32_t *tab = (uint32_t *)(data_ov007_021c5518 + i * 8);
            void **vt;

            func_02086ad4(buf, (uint32_t)data_ov007_021c5630, (uint32_t)r4, r3);
            obj = func_0203b95c(buf, t8, 2, 1);
            if (*(uint32_t *)(p + 0x144) == 0x14) {
                flag = 0;
            }
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, flag + 1, 0);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t, uint32_t))vt[0xc / 4])(obj, tab[0], tab[1]);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t))vt[0x20 / 4])(obj, 2);
            func_02056bc0(node, obj);
            vt = *(void ***)obj;
            ((void (*)(void *))vt[0x28 / 4])(obj);
        }
    }

    func_02056bc0(node, t8);
    return a;
}
