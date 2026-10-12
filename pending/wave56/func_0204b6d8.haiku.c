#include "ffc/types.h"

extern void func_0204ac98(void *dst, const void *src, int32_t n);

typedef struct Chunk {
    struct Chunk *next;
    uint8_t data[0x200];
} Chunk;

typedef struct Stream {
    int32_t total;
    uint8_t pad[0x34 - 4];
    Chunk *chunks;
    uint8_t inl[0x400];
} Stream;

int func_0204b6d8(Stream *s, uint8_t *out, int32_t off, int32_t n)
{
    Chunk *c;
    int32_t k;
    int32_t i;
    uint32_t u;

    if (off + n <= s->total) {
        if (n != 0) {
            if (off < 0x400) {
                k = 0x400 - off;
                if (n <= k) {
                    k = n;
                }
                func_0204ac98(out, s->inl + off, k);
                off += k;
                out += k;
                n -= k;
            }
            if (n != 0) {
                off -= 0x400;
                i = off >> 9;
                off &= 0x1ff;
                u = (uint32_t)i - 1;
                c = s->chunks;
                if (i != 0) {
                    do {
                        c = c->next;
                    } while (u-- != 0);
                }
                while (n != 0) {
                    k = 0x200 - off;
                    if (n <= k) {
                        k = n;
                    }
                    func_0204ac98(out, c->data + off, k);
                    off = (off + k) & 0x1ff;
                    out += k;
                    n -= k;
                    c = c->next;
                }
            }
        }
        return 1;
    }
    return 0;
}
