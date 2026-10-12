/* cflags: -lang c++ */
#include "ffc/types.h"

struct P2 { uint32_t a, b; };
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(P2);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8(uint32_t);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14(uint32_t, uint32_t);
};
extern "C" {
extern void func_02056c9c(void *obj, uint32_t zero);
extern void *func_0203b81c(uint32_t n);
extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_0201f680(void *a, uint32_t b);
extern void func_02086ad4(void *object, uint32_t first, ...);
extern Obj *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c55b4[];
extern void *data_020b8e44;
extern void *data_020b93b8;
extern char data_ov007_021c5630[];
extern P2 data_ov007_021c5518[];

void *func_ov007_021aea84(void *a, void *b);
}
void *func_ov007_021aea84(void *a, void *b)
{
    uint32_t buf[16];
    void *node;
    void *t8;
    int i;
    uint32_t off = 0x144;

    i = 0;
    func_02056c9c(a, 0);
    *(void **)a = (void *)data_ov007_021c55b4;
    t8 = func_0203b81c(10);
    node = a;
    node = (uint8_t *)node + 0x48;

    for (; i < 5; i++) {
        uint8_t *p = (uint8_t *)b + i * 4;
        if (*(uint32_t *)(p + 0x68) != 0) {
            void *q = func_02015ba4(data_020b8e44, *(uint32_t *)(p + 0x68));
            uint16_t r4 = *(uint16_t *)((uint8_t *)q + 0x40);
            uint32_t r3 = func_0201f680(data_020b93b8, *(uint32_t *)(p + 0x20c));
            Obj *obj;
            uint32_t flag;

            func_02086ad4(buf, (uint32_t)data_ov007_021c5630, (uint32_t)r4, r3);
            obj = func_0203b95c(buf, t8, 2, 1);
            flag = 1;
            if (*(uint32_t *)(p + off) == 0x14) {
                flag = 0;
            }
            obj->v14(flag + 1, 0);
            obj->v3(data_ov007_021c5518[i]);
            obj->v8(2);
            func_02056bc0(node, obj);
            obj->v10();
        }
    }

    func_02056bc0((uint8_t *)a + 0x48, t8);
    return a;
}
