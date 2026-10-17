/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/status_switch_scale_bc4b0.c, externs renamed. */
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

/* Matched: 021BC4B0 (124B / 0x7C). Matches at -O4 and -O4,p.
   func_ov002_021bc7e8(x) result switched over {2,5,0xe,0x11,0x17,0x1a,0x1d} selects the +0xc
   arm, default +0xa; calls func_ov002_021bc6e0(x, (func_ov002_021bc7fc(x)-2)*0xc + K), then sets status |= 2.
   Inlining the func_ov002_021bc6e0 argument (no temp) was required to reproduce the extra
   mov r1,r0 scheduling. */
extern void func_ov002_021bc6a4(int, int);
extern u32 func_ov002_021bc7e8(int);
extern int func_ov002_021bc7fc(int);
extern void func_ov002_021bc6e0(int, int);
#define X (*(int*)((u8*)self + 0x14))
void func_ov002_021bc4b0(void* self) {
    func_ov002_021bc6a4(X, 1);
    switch (func_ov002_021bc7e8(X)) {
    case 2: case 5: case 0xe: case 0x11: case 0x17: case 0x1a: case 0x1d:
        func_ov002_021bc6e0(X, (func_ov002_021bc7fc(X) - 2) * 0xc + 0xc);
        break;
    default:
        func_ov002_021bc6e0(X, (func_ov002_021bc7fc(X) - 2) * 0xc + 0xa);
        break;
    }
    *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
