/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/stable_sort_elem8_021CC9C8.c, externs renamed. */
/* 0x021CC9C8, size 0x64, -O4
 * stable_sort-style wrapper (8-byte elements): n = last-first, clamp to 0 if <= 20,
 * get temp buffer, build checked-buffer object + begin/end checked iterators,
 * call merge-sort helper (iterators by value), free buffer.
 * NOTE: batch addr 021CC9CA is off by 2; real start has B40F struct-arg spill. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif


typedef struct { u32 w0, w1; } T8;
typedef struct { T8* p; } Iter;
typedef struct { T8* p; void* own; } DIter;
typedef struct { T8* data; s32 n; } RawBuf;
typedef struct { s32 len; s32 cur; T8* ptr; } BufObj;

extern void func_ov002_021cc934(RawBuf* out, s32 n);
extern void func_ov002_021d0184(Iter f, Iter l, DIter b, DIter e, u32* c);
extern void func_02056858(void* p);

void func_ov002_021d0120(Iter first, Iter last, u32 comp) {
    DIter b2;
    DIter e2;
    RawBuf raw;
    BufObj buf;
    s32 n;
    n = last.p - first.p;
    if (n <= 20) n = 0;
    func_ov002_021cc934(&raw, n);
    buf.len = raw.n;
    buf.cur = 0;
    buf.ptr = raw.data;
    e2.p = raw.data + raw.n;
    e2.own = &buf;
    b2.p = raw.data;
    b2.own = &buf;
    func_ov002_021d0184(first, last, b2, e2, &comp);
    func_02056858(buf.ptr);
}
