#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t h;
} Size2;

extern void func_02021338(uint32_t size);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov007_021aa50c(void *p);
extern uint32_t func_ov007_021ae4f0(uint64_t v);
extern void *func_02056aec(void *obj);
extern void *func_0203b708(uint32_t n);
extern void *func_0205681c(uint32_t n);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Size2 sz, void *tmp, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

#define DEREF(base, off) (*(void **)((uint8_t *)(base) + (off)))

void func_ov007_021aa530(uint8_t *p)
{
    uint64_t sum = 0;
    uint8_t i;
    void *v;
    void *node;
    uint32_t ret;
    uint32_t flag;
    void *s;

    func_02021338(0xbc);
    v = func_020655dc(DEREF(DEREF(p, 0xc0), 0x98), 4, 1);
    node = func_020655b8(DEREF(DEREF(p, 0xc0), 0x98));
    {
        uint8_t *q = p + 0x14;
        func_02056bc0(q, node);
        func_02056bc0(q, v);
    }

    for (i = 0; i < 12; i++) {
        sum = func_0209a71c(sum, 10) + p[0x136 + i];
    }

    if ((int8_t)p[0x143] >= 0 && *(uint64_t *)(p + 0x14c) == sum) {
        func_ov007_021aa50c(p);
        return;
    }

    ret = func_ov007_021ae4f0(sum);
    *(uint8_t *)DEREF(p, 0x144) = (ret == 0);
    node = func_02056aec(DEREF(p, 0x154));
    v = func_0203b708(0x1e);
    {
        uint8_t *q = p + 0x14;
        func_02056bc0(q, v);
        func_02056bc0(q, node);
    }

    if (ret == 0) {
        Size2 sz;
        struct {uint32_t a[3];} t;
        uint32_t z = 0;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            s = func_020159c8(data_020b8e44, 0x62);
            func_02005988(&t, s);
            sz.w = 0x80;
            sz.h = 0x60;
            flag = 1;
            node = func_02032d24(node, sz, &t, 4, z);
        }
        func_02056bc0(p + 0x14, node);
        if (flag) {
            func_020059cc(&t);
        }
    } else if (ret == 3) {
        Size2 sz;
        struct {uint32_t a[3];} t;
        uint32_t z = 0;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            s = func_020159c8(data_020b8e44, 0x65);
            func_02005988(&t, s);
            sz.w = 0x80;
            sz.h = 0x60;
            flag = 1;
            node = func_02032d24(node, sz, &t, 4, z);
        }
        func_02056bc0(p + 0x14, node);
        if (flag) {
            func_020059cc(&t);
        }
    } else if (ret == 2) {
        Size2 sz;
        struct {uint32_t a[3];} t;
        uint32_t z = 0;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            s = func_020159c8(data_020b8e44, 0x64);
            func_02005988(&t, s);
            sz.w = 0x80;
            sz.h = 0x60;
            flag = 1;
            node = func_02032d24(node, sz, &t, 4, z);
        }
        func_02056bc0(p + 0x14, node);
        if (flag) {
            func_020059cc(&t);
        }
    } else {
        Size2 sz;
        struct {uint32_t a[3];} t;
        uint32_t z = 0;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            s = func_020159c8(data_020b8e44, 0x63);
            func_02005988(&t, s);
            sz.w = 0x80;
            sz.h = 0x60;
            flag = 1;
            node = func_02032d24(node, sz, &t, 4, z);
        }
        func_02056bc0(p + 0x14, node);
        if (flag) {
            func_020059cc(&t);
        }
    }

    node = func_02056aec(p);
    func_02056bc0(p + 0x14, node);
}
