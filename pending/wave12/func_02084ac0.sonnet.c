/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { int32_t m[3][3]; } M;
void func_02084ac0(const M *src, M *dst) {
    int i;
    for (i = 0; i < 3; i++) { dst->m[i][0]=src->m[i][0]; dst->m[i][1]=src->m[i][1]; dst->m[i][2]=src->m[i][2]; }
}
