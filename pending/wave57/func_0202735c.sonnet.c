#include "ffc/types.h"

typedef struct Vtx {
    int16_t x;
    int16_t pad;
    int16_t y;
    uint16_t val;
} Vtx;

typedef struct Cell {
    uint16_t *idx;
    uint32_t count;
    uint32_t unused;
} Cell;

typedef struct Ctx {
    uint8_t p0[0x3c];
    Vtx *verts;
    uint8_t p1[8];
    Cell *cells;
    int32_t w;
    int32_t sx;
    int32_t sy;
} Ctx;

uint32_t func_0202735c(Ctx *a, int32_t x, int32_t y)
{
    volatile uint32_t ret = 0x171717;
    uint32_t i;
    int32_t bad = 0;
    int32_t cx, cy;
    Cell *cell;
    uint16_t *idx;
    Vtx *base;

    x = x >> a->sx;
    y = y >> a->sy;
    cx = (x >> 11) + 16;
    cy = (y >> 11) + 16;
    if (cx < 0) bad = 1;
    else if ((uint32_t)cx >= (uint32_t)a->w) bad = 1;
    if (cy < 0) bad = 1;
    else if ((uint32_t)cy >= (uint32_t)a->w) bad = 1;
    if (bad) {
        return 0x171717;
    }
    cell = &a->cells[cy * a->w + cx];
    idx = cell->idx;
    base = a->verts;
    for (i = 0; i < ((volatile Cell *)cell)->count; i += 3) {
        Vtx *A = &base[idx[i]];
        Vtx *B = &base[idx[i + 1]];
        Vtx *C = &base[idx[i + 2]];
        int32_t ax = A->x - x;
        int32_t ay = A->y - y;
        int32_t bx = B->x - x;
        int32_t by = B->y - y;
        int32_t qx = C->x - x;
        int32_t qy = C->y - y;

        if (ax < 0 && bx < 0 && qx < 0) continue;
        if (ax > 0 && bx > 0 && qx > 0) continue;
        if (ay < 0 && by < 0 && qy < 0) continue;
        if (ay > 0 && by > 0 && qy > 0) continue;
        if (ax * by - ay * bx > 0) continue;
        if (ay * qx - ax * qy > 0) continue;
        if (bx * qy - by * qx > 0) continue;
        ret = A->val;
        break;
    }
    if (ret != 0x171717) {
        ret = ((uint8_t)(ret >> 10 & 31) << 16) | ((uint8_t)(ret >> 5 & 31) << 8) | (uint8_t)(ret & 31);
    }
    return ret;
}
