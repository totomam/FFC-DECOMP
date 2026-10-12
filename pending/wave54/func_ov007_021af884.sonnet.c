#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(uint32_t a);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void *func_ov001_0218ebcc(void *a, void *b, void *c);
extern void *func_ov001_0218dde0(void *a, uint32_t b);
extern void *func_ov007_021af9d8(void *self, uint32_t a, uint32_t b);
extern void *func_02056b10(void *owner);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5a74[2];

void func_ov007_021af884(uint8_t *self, uint32_t id)
{
    uint8_t *p;
    void *r4;
    void *r6;
    void *obj;

    p = self;
    if (id == *(uint32_t *)(p + 0xc0)) {
        **(uint32_t **)(p + 0xd4) = 1;
        r4 = func_02056aec();
        obj = func_0203b708(0x1e);
        p += 0x14;
        func_02056bc0(p, obj);
        func_02056bc0(p, r4);
        return;
    }
    if (id == *(uint32_t *)(p + 0xc4)) {
        **(uint32_t **)(p + 0xd4) = 2;
        r4 = func_02056aec();
        obj = func_0203b708(0x1e);
        p += 0x14;
        func_02056bc0(p, obj);
        func_02056bc0(p, r4);
        return;
    }
    if (id == *(uint32_t *)(p + 0xc8)) {
        **(uint32_t **)(p + 0xd4) = 3;
        r4 = func_02056aec();
        obj = func_0203b708(0x1e);
        p += 0x14;
        func_02056bc0(p, obj);
        func_02056bc0(p, r4);
        return;
    }
    if (id == *(uint32_t *)(p + 0xcc)) {
        **(uint32_t **)(p + 0xd4) = 4;
        r4 = func_02056aec();
        obj = func_0203b708(0x1e);
        p += 0x14;
        func_02056bc0(p, obj);
        func_02056bc0(p, r4);
        return;
    }
    if (id == *(uint32_t *)(p + 0xd0)) {
        *(uint32_t *)(p + 0xdc) = 0;
        r6 = func_0205681c(0x90);
        if (r6 != 0) {
            r6 = func_ov001_0218ebcc(r6, func_020159c8(data_020b8e44, 0x11b), p + 0xdc);
        }
        func_02056bc0(func_ov001_0218dde0(*(void **)(p + 0xb8), 2), r6);
        r4 = func_ov007_021af9d8(self, data_ov007_021c5a74[0], data_ov007_021c5a74[1]);
        obj = func_02056b10(func_ov001_0218dde0(*(void **)(p + 0xb8), 2));
        p += 0x14;
        func_02056bc0(p, obj);
        func_02056bc0(p, r4);
    }
}
