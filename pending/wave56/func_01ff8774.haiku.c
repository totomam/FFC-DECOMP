#include "ffc/types.h"

extern uint32_t func_01ff80c4(uint8_t *p);

typedef struct Chunk {
    uint32_t prev_foot;
    uint32_t head;
    struct Chunk *fd;
    struct Chunk *bk;
} Chunk;

uint32_t func_01ff8774(uint8_t *p)
{
    uint32_t head;
    uint32_t *bin;
    uint32_t *binend;
    Chunk *sent;
    Chunk *c, *nx, *nn, *fd, *bk, *pv;
    uint32_t sz, nsz;

    head = *(uint32_t *)p;
    if (head != 0) {
        head |= 1;
        bin = (uint32_t *)(p + 4);
        binend = bin + ((head >> 3) - 2);
        sent = (Chunk *)(p + 0x3c);
        *(uint32_t *)p = head;
        sent = (Chunk *)((uint8_t *)sent - 8);

        while (bin != binend) {
            if (*bin != 0) {
                c = (Chunk *)*bin;
                *bin = 0;
                do {
                    Chunk *next = c->fd;
                    sz = c->head & ~1u;
                    nx = (Chunk *)((uint8_t *)c + sz);
                    nsz = nx->head & ~3u;
                    if (!(c->head & 1)) {
                        pv = (Chunk *)((uint8_t *)c - c->prev_foot);
                        sz += c->prev_foot;
                        fd = pv->fd;
                        bk = pv->bk;
                        fd->bk = bk;
                        bk->fd = fd;
                        c = pv;
                    }
                    if (nx != *(Chunk **)(p + 0x2c)) {
                        nn = (Chunk *)((uint8_t *)nx + nsz);
                        nx->head = nsz;
                        if (!(nn->head & 1)) {
                            fd = nx->fd;
                            bk = nx->bk;
                            sz += nsz;
                            fd->bk = bk;
                            bk->fd = fd;
                        }
                        fd = sent->fd;
                        sent->fd = c;
                        fd->bk = c;
                        c->head = sz | 1;
                        c->fd = fd;
                        c->bk = sent;
                        *(uint32_t *)((uint8_t *)c + sz) = sz;
                    } else {
                        c->head = (sz + nsz) | 1;
                        *(Chunk **)(p + 0x2c) = c;
                    }
                    c = next;
                } while (c != 0);
            }
            bin++;
        }
        return (uint32_t)binend;
    }
    return func_01ff80c4(p);
}
