/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc24_task_loop3_thunks_021A4AA0.c, externs renamed. */
/* Matched: func_021A4AA0 (0xA8 total unit @ -O4,p)
 * Unit: main loop (021A4AA0, alloc 0x24 obj x3 into list) + getter stub (021A4B10)
 *       + tail-call thunks 021A4B18/021A4B28/021A4B38 (self+0x13c forwarders)
 * python3 tools/match_func.py <this> 021A4AA0 A8 --O4p */
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


extern u32 GetTaskList(void);                 /* 0203B6FC */
extern void* AllocObj(u32 size);              /* 0205681C */
extern u32 GetSub144(void* p);                /* 021C85F8 */
extern u32 MakeTask(void* m, void* p);        /* 02055A2C */
extern void ListAdd(u32 list, u32 t);         /* 02056BC0 */

static u32 func_021A4AA0(u8* self, void* b, u8 c, u8 d) {
    u32 res;
    s32 i;
    u8* p;
    res = GetTaskList();
    i = 0;
    do {
        p = (u8*)AllocObj(0x24);
        if (p != 0) {
            u32 q = GetSub144(self + 0x13c);
            *(u32*)(p + 8) = 0;
            *(u32*)(p + 0xC) = 0x000100F3;
            *(u32*)p = 0x020ABBF8;
            *(void**)(p + 0x10) = b;
            *(u32*)(p + 0x14) = q;
            *(p + 0x18) = c;
            *(u32*)(p + 0x1C) = i;
            *(p + 0x20) = d;
        }
        ListAdd(res, MakeTask(*(void**)(self + 0xF0), p));
        i++;
    } while (i < 3);
    return res;
}

static void* func_021A4B10(u8* p) {
    return *(void**)(p + 0xF0);
}

extern void func_ov002_021d3314(void* p);              /* 021C8610 */
extern void Thunk2Impl(void* p);              /* 021C8614 */
extern void Thunk3Impl(void* p, u32 b);       /* 021C865C */

void func_ov002_021aa830(u8* p) { func_ov002_021d3314(p + 0x13c); }
static void func_021A4B28(u8* p) { Thunk2Impl(p + 0x13c); }
static void func_021A4B38(u8* p, u32 b) { Thunk3Impl(p + 0x13c, b); }
