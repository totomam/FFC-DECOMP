#include "ffc/types.h"

typedef struct { uint32_t w[12]; } Tmpl;
extern Tmpl data_020a02d0;
extern Tmpl data_020a0240;
extern Tmpl data_020a0270;
extern Tmpl data_020a02a0;

int func_02069cc0(int a0, uint32_t *p, uint32_t v3, uint32_t v4, uint32_t sel, uint32_t *out, ...) {
    Tmpl t;
    uint32_t i;
    switch (sel) {
    case 1:
        t = data_020a02d0;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[3];
        t.w[9] = p[2];
        t.w[11] = p[1];
        break;
    case 2:
        t = data_020a02a0;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[3];
        t.w[9] = p[0];
        t.w[11] = p[3];
        break;
    case 3:
        t = data_020a0240;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[0];
        t.w[7] = p[3];
        t.w[9] = p[0];
        t.w[11] = p[1];
        break;
    case 4:
        t = data_020a0270;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[1];
        t.w[9] = p[0];
        t.w[11] = p[1];
        break;
    default:
        return 0;
    }
    for (i = 0; i < 12; i++) {
        out[i] = t.w[i];
    }
    return 1;
}
