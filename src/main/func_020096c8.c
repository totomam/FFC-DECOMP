#include "ffc/types.h"

typedef struct { uint8_t v; } Byte1;

extern void func_02091a24(const void *msg);
extern uint32_t func_0208f42c(void);
extern void func_02005af4(void *a, void *b, uint32_t c, uint8_t *p, uint8_t *end, Byte1 f);
extern const uint8_t data_020aad78[];

typedef struct { uint32_t inl : 1; } Hdr32;
typedef struct { uint8_t inl : 1; uint8_t slen : 7; } Hdr8;

void func_020096c8(void *a, void *b, uint32_t c, uint8_t *s, uint32_t off, uint32_t n)
{
    uint8_t *p;
    uint32_t len;
    uint32_t rem;
    uint32_t pad;
    Byte1 f;

    if (!((Hdr32 *)s)->inl) {
        p = s + 1;
        len = ((Hdr8 *)s)->slen;
    } else {
        p = *(uint8_t **)(s + 8);
        len = *(uint32_t *)(s + 4);
    }
    if (off > len) {
        func_02091a24(data_020aad78);
        func_0208f42c();
    }
    p += off;
    rem = len - off;
    n = *(rem < n ? &rem : &n);
    f = *(Byte1 *)&pad;
    func_02005af4(a, b, c, p, p + n, f);
}
