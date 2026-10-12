#include "ffc/types.h"

typedef struct { uint32_t w[12]; } Tmpl;
typedef struct { uint32_t c, d; } S;
extern Tmpl data_020a02d0;
extern Tmpl data_020a0240;
extern Tmpl data_020a0270;
extern Tmpl data_020a02a0;

int func_02069cc0(int a0, uint32_t *p, S s, uint32_t sel, Tmpl *out) {
    uint32_t v3 = s.c, v4 = s.d;
    switch (sel) {
    default:
        return 0;
    case 1: {
        Tmpl t = data_020a02d0;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[3];
        t.w[9] = p[2];
        t.w[11] = p[1];
        *out = t;
        break;
    }
    case 3: {
        Tmpl t = data_020a0240;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[0];
        t.w[7] = p[3];
        t.w[9] = p[0];
        t.w[11] = p[1];
        *out = t;
        break;
    }
    case 4: {
        Tmpl t = data_020a0270;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[1];
        t.w[9] = p[0];
        t.w[11] = p[1];
        *out = t;
        break;
    }
    case 2: {
        Tmpl t = data_020a02a0;
        t.w[1] = v3;
        t.w[3] = v4;
        t.w[5] = p[2];
        t.w[7] = p[3];
        t.w[9] = p[0];
        t.w[11] = p[3];
        *out = t;
        break;
    }
    }
    return 1;
}

