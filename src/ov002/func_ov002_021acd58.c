/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/strtmp_dual_div_gate_021ACD58.c, externs renamed. */
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

/* Matched: 021ACD58 (size 0xD0 incl shared pool word, BOTH -O4 and -O4,p).
   Fx multiplier accumulator: *out = 0x1000; then two independent strtmp
   blocks each doing *out = func_020817c8(*out, *(s32*)(func_02052d90(tmp.p4,tmp.l8)+0x68)):
   block 1 gated on p=*(u8**)(b+0x138), p[0x19]==0x13 and
   *(u16*)(p+0x54) == func_ov002_021aac08(c)[1]; block 2 gated on func_ov002_021aab40(c)==0x13 and
   h2=*(u16*)(func_ov002_021aac08(c)+0x54) == (*(u8**)(b+0x138))[1].
   KEYS: func_020817c8 divisor loaded into a LOCAL (dv) first (inline arg adds a mov);
   h2 hoisted into a local so the ldrh evaluates before the b-reload (cmp
   operand order); block-1 temp = plain Str (sp+0x28), block-2 temp wrapped
   in { u8 pad[0x18]; Str s; } (phantom low frame); pinned-alias dtor tails
   (acf10 idiom); data_020b8e44 pool word shared by both blocks. */
typedef struct { u32 a0; void* p4; u32 l8; u8 fC; u8 pad[3]; } Str;
extern u32 data_020b8e44;             /* 0x020B8E44 */
extern void func_02015e8c(Str*, u32); /* 0x02015E8C */
extern u8* func_02052d90(void*, u32);       /* 0x02052D90 */
extern void func_02052d3c(void*, u32);      /* 0x02052D3C */
extern void func_02052c04(void*);       /* 0x02052C04 */
extern void func_02053290(Str*);            /* 0x02053290 */
extern u8* func_ov002_021aac08(void*);     /* 0x021AAC08 */
extern s32 func_ov002_021aab40(void*);         /* 0x021AAB40 */
extern s32 func_020817c8(s32, s32);       /* 0x020817C8 */

void func_ov002_021acd58(s32* out, u8* b, void* c) {
    *out = 0x1000;
    {
        u8* p;
        p = *(u8**)(b + 0x138);
        if (p[0x19] == 0x13) {
            u16 h;
            h = *(u16*)(p + 0x54);
            if (h == func_ov002_021aac08(c)[1]) {
                Str tmp;
                Str* t;
                s32 dv;
                func_02015e8c(&tmp, data_020b8e44);
                dv = *(s32*)(func_02052d90(tmp.p4, tmp.l8) + 0x68);
                *out = func_020817c8(*out, dv);
                t = (Str*)(void*)&tmp;
                if (tmp.p4) {
                    if (t->fC) func_02052d3c(t->p4, t->l8);
                    func_02052c04(t->p4);
                }
                func_02053290(t);
            }
        }
    }
    if (func_ov002_021aab40(c) == 0x13) {
        u16 h2;
        h2 = *(u16*)(func_ov002_021aac08(c) + 0x54);
        if (h2 == (*(u8**)(b + 0x138))[1]) {
            struct { u8 pad[0x18]; Str s; } w;
            Str* t2;
            s32 dv2;
            func_02015e8c(&w.s, data_020b8e44);
            dv2 = *(s32*)(func_02052d90(w.s.p4, w.s.l8) + 0x68);
            *out = func_020817c8(*out, dv2);
            t2 = (Str*)(void*)&w.s;
            if (w.s.p4) {
                if (t2->fC) func_02052d3c(t2->p4, t2->l8);
                func_02052c04(t2->p4);
            }
            func_02053290(t2);
        }
    }
}
