/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc44_fx_event_send_021ab160.c, externs renamed. */
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

/* Matched: 021AB160, size 0xE4 (228B), -O4,p.
   func_0205681c(0x44) event node: 4 out-param fixed-point getters (>>12 on store),
   flag/state getters, vtbl 0x020AB8B8, id 0x100FD, func_02055914(*(s+0xB8), p).
   Keys: c3/c4 copies + 4-word phantom pad + out-param words in ONE struct
   (slots 0x1C..0x40); c2 declared before c1 (r6/r7); func_ov002_021aa830 result staged in
   r0-local with m load between; param mutation s += 0xB8. */

extern void* func_0205681c(u32);          /* 0x205681c */
extern void func_ov002_021ac088(s32*, void*);    /* 0x21ac088 */
extern void func_ov002_021ac198(s32*, void*);    /* 0x21ac198 */
extern void func_ov002_021ac2a8(s32*, void*);    /* 0x21ac2a8 */
extern void func_ov002_021ac39c(s32*, void*);    /* 0x21ac39c */
extern s32 func_ov002_021aa18c(void*);           /* 0x21aa18c */
extern s32 func_ov002_021aac90(void*, u32);   /* 0x21aac90 */
extern s32 func_ov002_021aaa88(void*);           /* 0x21aaa88 */
extern s32 func_ov002_021aa820(void*);           /* 0x21aa820 */
extern s32 func_ov002_021aa830(void*);           /* 0x21aa830 */
extern void func_02055914(void*, void*);   /* 0x2055914 */

void func_ov002_021ab160(u8* s, u32 b, u32 c)
{
    u8* p;
    s32 v8;
    s32 vc;
    s32 v10;
    s32 v14;
    s32 v18;
    s32 tmp;
    u32 m;
    s32 c2;
    s32 c1;
    struct { s32 c3; s32 c4; u32 pad[4]; s32 a; s32 b; s32 c; s32 d; } w;

    p = (u8*)func_0205681c(0x44);
    if (p != 0) {
        func_ov002_021ac088(&w.a, s);
        c1 = w.a;
        func_ov002_021ac198(&w.b, s);
        c2 = w.b;
        func_ov002_021ac2a8(&w.c, s);
        w.c3 = w.c;
        func_ov002_021ac39c(&w.d, s);
        w.c4 = w.d;
        v8 = func_ov002_021aa18c(s + 0x190);
        vc = func_ov002_021aac90(s, 1);
        v10 = func_ov002_021aac90(s, 0);
        v14 = func_ov002_021aaa88(s);
        v18 = func_ov002_021aa820(s);
        tmp = func_ov002_021aa830(s);
        m = *(u32*)(s + 0xC4);
        *(u32*)(p + 8) = 0;
        *(u32*)(p + 0xC) = 0x100FD;
        *(u32*)p = 0x020AB8B8;
        *(u32*)(p + 0x10) = c;
        *(u32*)(p + 0x14) = m;
        *(u32*)(p + 0x18) = tmp;
        *(u32*)(p + 0x1C) = v18;
        *(s32*)(p + 0x20) = c1 >> 12;
        *(s32*)(p + 0x24) = c2 >> 12;
        *(s32*)(p + 0x28) = w.c3 >> 12;
        *(s32*)(p + 0x2C) = w.c4 >> 12;
        *(u32*)(p + 0x30) = v14;
        *(u8*)(p + 0x34) = (u8)v10;
        *(u8*)(p + 0x35) = (u8)vc;
        *(u32*)(p + 0x38) = 0;
        *(u32*)(p + 0x3C) = v8;
        *(u8*)(p + 0x40) = (u8)b;
    }
    s += 0xB8;
    func_02055914(*(void**)s, p);
}
