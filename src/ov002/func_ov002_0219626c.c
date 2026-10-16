/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/state_notify_gates_pair_0219626c.c, externs renamed. */
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

/* Matched: 0219626C (size 0xF0 incl pool, BOTH -O4 and -O4,p). Sibling of 021966D4.
   Gate: (p=*(s+0x3A4)) && func_0206cb98(p), else func_ov002_0219635c(s)==0 -> return. Double func_02060e9c/func_02060eb4(func_0203c23c/func_0203c250())
   return gates; status byte |=1 via substruct pointer q=s+0x48 (q+0xC); func_020212a4/func_02021380(0xF); t=func_0203b6fc();
   func_02056bc0(t,func_0206cbf4(p)) if p; h=*(*(u8**)data_020b8e44+0x88) gate with *(s+0x3E4)!=7 -> func_02056bc0(t,func_020757c8(h));
   func_0203bfe0/func_0203bfcc(0xF) wiring; whole-Pair *(Pair*)(s+0x3C0)=data_ov002_021d47e0 (0x021D47E0; 0x3C0 synthesized
   from the live 0xF via lsls#6 - cross-statement constant CSE falls out naturally). */
typedef struct { u32 x, y; } Pair;
extern u32 func_0203c23c(void);            /* 0x0203C23C */
extern u32 func_0203c250(void);            /* 0x0203C250 */
extern u32 func_02060e9c(u32);             /* 0x02060E9C */
extern u32 func_02060eb4(u32);             /* 0x02060EB4 */
extern void func_020212a4(u32);            /* 0x020212A4 */
extern void func_02021380(u32);            /* 0x02021380 */
extern u32 func_0203b6fc(void);             /* 0x0203B6FC */
extern u32 func_0206cb98(void*);        /* 0x0206CB98 */
extern u32 func_0206cbf4(void*);        /* 0x0206CBF4 */
extern u32 func_ov002_0219635c(void*);     /* 0x0219635C */
extern u32 func_020757c8(u32);           /* 0x020757C8 */
extern u32 func_0203bfe0(u32);             /* 0x0203BFE0 */
extern u32 func_0203bfcc(u32);             /* 0x0203BFCC */
extern void func_02056bc0(u32, u32);        /* 0x02056BC0 */
extern u8* data_020b8e44;                 /* 0x020B8E44 */
extern Pair data_ov002_021d47e0;         /* 0x021D47E0 */

void func_ov002_0219626c(u8* s) {
    u8* p;
    u8* q;
    u32 t;
    u32 h;
    u32 r6v;
    p = *(u8**)(s + 0x3A4);
    if (p == 0 || func_0206cb98(p) == 0) {
        if (func_ov002_0219635c(s) == 0) {
            return;
        }
    }
    if (func_02060e9c(func_0203c23c()) != 0) {
        if (func_02060eb4(func_0203c23c()) != 0) {
            return;
        }
    }
    if (func_02060e9c(func_0203c250()) != 0) {
        if (func_02060eb4(func_0203c250()) != 0) {
            return;
        }
    }
    q = s + 0x48;
    *(u32*)(q + 0xC) = (*(u32*)(q + 0xC) & ~0xFF) | 1;
    func_020212a4(0xF);
    func_02021380(0xF);
    t = func_0203b6fc();
    p = *(u8**)(s + 0x3A4);
    if (p != 0) {
        func_02056bc0(t, func_0206cbf4(p));
    }
    h = *(u32*)(*(u8**)data_020b8e44 + 0x88);
    if (h != 0) {
        if (*(u32*)(s + 0x3E4) != 7) {
            func_02056bc0(t, func_020757c8(h));
        }
    }
    r6v = func_0203bfe0(0xF);
    func_02056bc0(t, func_0203bfcc(0xF));
    func_02056bc0(t, r6v);
    func_02056bc0((u32)(s + 0x14), t);
    *(Pair*)(s + 0x3C0) = data_ov002_021d47e0;
}
