#include "ffc/types.h"

extern void **data_0213df20;
extern void **data_ov007_021c9708;
extern void *data_020b93b8;
extern struct { uint32_t a; uint32_t b; } data_ov007_021c41d0;


extern void func_0206047c(void *);
extern void func_02060548(void *, int);
extern void func_02060574(void *, uint32_t);
extern void func_02055ae8(void *, void *);
extern void func_0201cf34(void *, void *);
extern void func_020849c4(void *, void *, uint32_t);
extern void *func_02060634(void *, int, int, int, int, int);
extern void *func_0206d120(void *, void *, int, int, int);
extern void *func_0203b688(void);
extern void func_02056bc0(void *, void *);
extern void *func_0203b6fc(void);
extern void *func_0203b6f0(void);

void func_ov007_021a42a4(uint8_t *p)
{
    uint8_t buf[0x98];
    void *r5;
    void *r6;
    void *r7;
    void *tmp;
    uint8_t *q;
    uint32_t v0, v1;


    func_0206047c(data_0213df20[8]);
    func_02060548(data_0213df20[8], 3);
    r5 = data_0213df20[8];
    func_02060574(r5, ((uint32_t (*)(void *))((void **)*data_ov007_021c9708)[13])(data_ov007_021c9708));
    q = p;
    if (q) q += 0x80;
    func_02055ae8(*(uint8_t **)(p + 0xc0) + 0x14, q);
    func_0201cf34(data_020b93b8, buf);
    *(uint32_t *)(p + 0xf0) = 1;
    func_020849c4(buf, p + 0xf4, 0x12);
    r6 = func_02060634(data_0213df20[8], 0, 8, 10, 0, 0);
    r5 = func_0206d120(*(void **)(p + 0xc0), p + 0xf0, 0x18, 0, 0);
    r7 = func_0203b688();
    func_02056bc0(r7, r5);
    r5 = func_0203b6fc();
    func_02056bc0(r5, r7);
    func_02056bc0(r5, r6);
    func_02056bc0(p + 0x14, r5);
    tmp = func_0203b6f0();
    *(void **)(p + 0xc8) = tmp;
    func_02056bc0(p + 0x48, tmp);
    v0 = data_ov007_021c41d0.a;
    v1 = data_ov007_021c41d0.b;
    *(uint32_t *)(p + 0xb8) = v0;
    *(uint32_t *)(p + 0xbc) = v1;
}
