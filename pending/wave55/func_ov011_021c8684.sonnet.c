#include "ffc/types.h"

typedef struct {
    void *vt;
    uint16_t a[21];
    uint32_t w;
    uint8_t b[20];
    uint8_t c[16];
} Local;

typedef struct { uint32_t x, y, z, u; } Blk16;
typedef struct { uint16_t a[21]; uint32_t w; uint8_t b[20]; uint8_t c[16]; } Inner;

extern char data_020ae664[];
extern char data_ov011_021cbb68[];
extern char data_ov011_021cbd84[];

extern uint32_t func_020367bc(const void *object, uint32_t index);
extern uint32_t func_020369c0(const void *object, uint32_t index);
extern uint8_t func_02036820(const void *object, uint32_t index);
extern void func_02036a10(const void *object, uint32_t index, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov011_021c857c(void *self, const void *object);
extern void func_020367a8(void *object);
extern void func_ov009_0219a358(void *p);
extern void func_ov009_0219a014(void *p);
extern void *func_0203b6fc(void);
extern void *func_ov009_0219a390(void *p, uint32_t a, uint32_t b);
extern void func_ov009_0219a308(void *p);
extern void *func_ov011_021c8478(void *self, uint32_t a, uint32_t b);
extern void *func_02056aec(void *p);
extern void *func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c8684(void *self, uint32_t idx)
{
    uint8_t *s = (uint8_t *)self;
    Local loc;
    uint32_t n;
    uint32_t s3a8, v8, vc, r7v, v10, v14, v0;
    void *h4;

    loc.vt = data_020ae664;
    {
        Inner *p = (Inner *)(s + 0x354);
        int i;
        for (i = 0; i < 21; i++) loc.a[i] = p->a[i];
        loc.w = p->w;
        for (i = 0; i < 20; i++) loc.b[i] = p->b[i];
        *(Blk16 *)loc.c = *(Blk16 *)p->c;
    }

    s3a8 = *(uint32_t *)(s + 0x3a8);
    v8 = func_020367bc(&loc, s3a8);
    vc = func_020369c0(&loc, s3a8);
    r7v = func_02036820(&loc, s3a8);
    v10 = func_020367bc(&loc, idx);
    v14 = func_020369c0(&loc, idx);
    v0 = func_02036820(&loc, idx);
    func_02036a10(&loc, s3a8, v10, v14, v0);
    func_02036a10(&loc, idx, v8, vc, r7v);

    if (*(uint32_t *)(s + 0x338) != 0 && *(uint32_t *)(s + 0x338) != 1) {
        if (func_ov011_021c857c(s, &loc) != 0) {
            func_020367a8(&loc);
            return;
        }
    }

    func_ov009_0219a358(*(void **)(s + 0xfc + idx * 4));
    *(uint8_t *)(*(uint8_t **)(s + 0x34c) + 0xa4) = 0xf;
    func_ov009_0219a014(*(void **)(s + 0x348));
    h4 = func_0203b6fc();
    func_ov009_0219a358(*(void **)(s + 0xfc + idx * 4));
    {
        uint32_t *e = (uint32_t *)(data_ov011_021cbb68 + (*(uint32_t *)(s + 0x3a8) << 3));
        void *node = func_ov009_0219a390(*(void **)(s + 0xfc + idx * 4), e[0], e[1]);
        func_02056bc0(h4, node);
    }

    if (func_020367bc(s + 0x350, *(uint32_t *)(s + 0x3a8))) {
        uint32_t *e = (uint32_t *)(data_ov011_021cbb68 + (idx << 3));
        void *node = func_ov009_0219a390(*(void **)(s + 0xfc + *(uint32_t *)(s + 0x3a8) * 4), e[0], e[1]);
        func_02056bc0(h4, node);
    } else {
        func_ov009_0219a308(*(void **)(s + 0xfc + *(uint32_t *)(s + 0x3a8) * 4));
    }

    {
        uint32_t *e = (uint32_t *)data_ov011_021cbd84;
        void *r7 = func_ov011_021c8478(s, e[0], e[1]);
        void *v1c = func_02056aec(*(void **)(s + 0x34c));
        void *hh = func_0203b72c();
        func_02056bc0(s + 0x14, hh);
        func_02056bc0(s + 0x14, h4);
        func_02056bc0(s + 0x14, v1c);
        func_02056bc0(s + 0x14, r7);
    }

    {
        Inner *p = (Inner *)(s + 0x354);
        int i;
        for (i = 0; i < 21; i++) p->a[i] = loc.a[i];
        p->w = loc.w;
        for (i = 0; i < 20; i++) p->b[i] = loc.b[i];
        *(Blk16 *)p->c = *(Blk16 *)loc.c;
    }
    func_020367a8(&loc);
}
