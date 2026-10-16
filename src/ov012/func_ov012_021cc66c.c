/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t w0; } T8;
typedef struct { T8* p; } Iter;
typedef struct { T8* p; void* own; } DIter;
typedef struct { T8* data; int32_t n; } RawBuf;
typedef struct { int32_t len; int32_t cur; T8* ptr; } BufObj;
extern void func_ov012_021cd3e0(RawBuf* out, int32_t n);
extern void func_ov012_021cc6d0(Iter f, Iter l, DIter b, DIter e, uint32_t* c);
extern void func_02056858(void* p);
void func_ov012_021cc66c(Iter first, Iter last, uint32_t comp) {
    DIter b2; DIter e2; RawBuf raw; BufObj buf; int32_t n;
    n = last.p - first.p;
    if (n <= 20) n = 0;
    func_ov012_021cd3e0(&raw, n);
    buf.len = raw.n; buf.cur = 0; buf.ptr = raw.data;
    e2.p = raw.data + raw.n; e2.own = &buf;
    b2.p = raw.data; b2.own = &buf;
    func_ov012_021cc6d0(first, last, b2, e2, &comp);
    func_02056858(buf.ptr);
}
