#include "ffc/types.h"

extern int func_02087460(void);
extern int func_0208d2e8(void);
extern void func_0206047c(void *obj);
extern void func_02060548(void *obj, int v);
extern void func_02060574(void *obj, uint32_t v);
extern void *func_02056aec(void *obj);
extern uint32_t func_02060634(void *obj, int a, int b, int c, int d, int e);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *heap, uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_ov007_021c9708;
extern void *data_0213df20;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c4e94[2];

typedef struct { uint32_t a, b, c; } Blk3;

void func_ov007_021ab018(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t tmp;
    uint32_t cfgA[2];
    uint32_t cfgB[2];
    Blk3 blkA;
    Blk3 blkB;
    void *r6;
    void *r7;
    int r4;

    if (*(int32_t *)(self + 0xd8) == 1) {
        if (func_02087460() != 0 && func_0208d2e8() == 0) {
            if (data_ov007_021c9708 != 0) {
                func_0206047c(*(void **)((uint8_t *)data_0213df20 + 0x20));
                func_02060548(*(void **)((uint8_t *)data_0213df20 + 0x20), 3);
                {
                    void *o = *(void **)((uint8_t *)data_0213df20 + 0x20);
                    void *obj = data_ov007_021c9708;
                    void **vt = *(void ***)obj;
                    uint32_t v = ((uint32_t (*)(void *))vt[13])(obj);
                    func_02060574(o, v);
                }
            }
            r4 = 0;
            r7 = func_02056aec(self);
            tmp = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
            r6 = func_0205681c(0xb0);
            if (r6 != 0) {
                void *hd = func_020159c8(data_020b8e44, 0x34);
                cfgA[0] = 0x80;
                cfgA[1] = 0x60;
                func_02005988(&blkA, hd);
                r6 = func_02032d24(r6, cfgA[0], cfgA[1], &blkA, 4, 0);
                r4 = 1;
            }
            {
                uint32_t ret2 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
                func_02056bc0(self + 0x14, (void *)ret2);
            }
            func_02056bc0(self + 0x14, r6);
            func_02056bc0(self + 0x14, (void *)tmp);
            func_02056bc0(self + 0x14, r7);
            if (r4 != 0) {
                func_020059cc(&blkA);
            }
            return;
        }
        *(uint32_t *)(self + 0xb0) = data_ov007_021c4e94[0];
        *(uint32_t *)(self + 0xb4) = data_ov007_021c4e94[1];
        return;
    }

    r7 = 0;
    r4 = 0;
    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        void *hd = func_020159c8(data_020b8e44, 0x61);
        cfgB[0] = 0x80;
        cfgB[1] = 0x60;
        func_02005988(&blkB, hd);
        r6 = func_02032d24(r6, cfgB[0], cfgB[1], &blkB, 4, 0);
        r4 = 1;
    }
    func_02056bc0(self + 0x14, r6);
    if (r4 != 0) {
        func_020059cc(&blkB);
    }
    {
        void *ret = func_02056aec(self);
        func_02056bc0(self + 0x14, ret);
    }
}
