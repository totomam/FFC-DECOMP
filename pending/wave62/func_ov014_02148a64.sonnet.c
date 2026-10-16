/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { int a, b, c, d; int e; int f; } S;
extern void func_ov014_02148b94(S*);
extern void func_ov014_02148dc0(S*);
extern void func_ov014_02148ccc(S*);
extern void func_ov014_02148ec8(S*);
extern const uint8_t tabA[];
extern const uint8_t tabB[];
void func_ov014_02148a64(int *p)
{
    S s;
    int i = p[6];
    s.e = tabA[i] | (tabB[i] << 8);
    s.a = p[0]; s.b = p[2]; s.c = p[4]; s.d = p[5];
    s.f = p[7] + 0x40;
    func_ov014_02148b94(&s);
    if (p[8] != 1) func_ov014_02148ccc(&s);
    s.a = p[1]; s.b = p[3]; s.c = p[4] >> 1; s.d = p[5] >> 1;
    func_ov014_02148dc0(&s);
    if (p[8] != 1) func_ov014_02148ec8(&s);
    s.a = p[1] + 0x80; s.b = p[3] + 0x80;
    func_ov014_02148dc0(&s);
    if (p[8] != 1) func_ov014_02148ec8(&s);
}
