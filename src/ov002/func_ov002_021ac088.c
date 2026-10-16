/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/stat_fx_calc_021AC088.c, externs renamed. */
/* 0x021AC088 - size 0x110 (272 bytes) - MATCH with plain -O4
   flags: -O4 -proc arm946e -thumb -interworking -enum int -Cpp_exceptions off
   note: #pragma opt_propagation off is REQUIRED (keeps c19a=0x19A as a pool-loaded
   variable so the 0x138 offset derives via subs #0x62 at runtime)
   verified: python3 tools/match_func.py <this> 021AC088 110 */
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


typedef struct { u32 v; } W;
typedef struct { u32 a0; void* p4; u32 l8; u8 fC; u8 pad[3]; } Str;

extern u32 data_020b8e44;                 /* 0x020B8E44 */
extern void func_02015e8c(Str*, u32);     /* 0x02015E8C */
extern u8* func_02052d90(void*, u32);           /* 0x02052D90 */
extern void func_02052d3c(void*, u32);          /* 0x02052D3C */
extern void func_02052c04(void*);           /* 0x02052C04 */
extern void func_02053290(Str*);                /* 0x02053290 */

extern s32 func_ov002_021aa9e0(u8*);              /* 0x021AA9E0 */
extern s32 func_ov002_021aab40(u8*);              /* 0x021AAB40 */
extern u32 func_ov002_021aa780(u8*);                 /* 0x021AA780 */
extern s32 func_ov002_021abd00(u8*, u32);         /* 0x021ABD00 */
extern s32 func_020817c8(s32, s32);           /* 0x020817C8 */
extern u32 func_02081210(W, W);              /* 0x02081210 */
extern u32 func_ov002_021aa11c(void*, u32); /* 0x021AA11C */
extern s32 func_ov002_021aab20(u8*);              /* 0x021AAB20 */

#pragma opt_propagation off
void func_ov002_021ac088(s32* out, u8* p) {
    s32 a;
    s32 b;
    u32 v;
    s32 c;
    s32 d;
    s32 e;
    s32 c19a;
    s32 fx;
    u32 val;
    Str* t;
    struct { u8 pad[0x74]; Str s; } w;

    a = func_ov002_021aa9e0(p) << 12;
    *out = a;
    b = func_ov002_021aab40(p);
    if (b != 8) {
        v = func_ov002_021aa780(p);
        if (v == 0 || v - 3 <= 1) c = 1; else c = 0;
        if (c) {
            d = func_ov002_021abd00(p, 0);
            if (d != 0) {
                W we, wt;
                wt.v = 0x19 << 0xe;
                we.v = (u32)func_020817c8(d << 12, a);
                *out = *out + (s32)func_02081210(we, wt);
            }
        }
        if (func_ov002_021aa11c(p + 0x190, 5) != 0) {
            s32 term;
            term = (*(s32*)(p + 0x204)) << 12;
            *out += term;
        }
        if (func_ov002_021aa11c(p + 0x190, 9) != 0) {
            s32 term;
            term = (*(s32*)(p + 0x224)) << 12;
            *out += term;
        }
    }
    if (func_ov002_021aab20(p) != 0) {
        func_02015e8c(&w.s, data_020b8e44);
        c19a = 0x19A;
        fx = (*(u16*)((u8*)*(void**)(p + (c19a - 0x62)) + 0x54)) << 12;
        val = *(u32*)((u8*)func_02052d90(w.s.p4, w.s.l8) + 0x6c);
        e = func_020817c8((s32)val, fx);
        e = func_020817c8(e, c19a);
        *out = func_020817c8(*out, e);
        t = &w.s;
        if (w.s.p4) {
            if (t->fC) func_02052d3c(t->p4, t->l8);
            func_02052c04(t->p4);
        }
        func_02053290(t);
    }
    { s32 k = 0x1000; if (*out < k) *out = k; }
}
