#ifndef F_F_OP_DRAW_TAG_H_
#define F_F_OP_DRAW_TAG_H_

#include "../dolphin/gctypes.h"
#include "../dolphin/mtx/vec.h"

struct MatrixPtr {
    /* 0x000 */ u8 field_0x0[0x74];
    /* 0x074 */ f32 field_0x074; // Seems to be related to the zoom
    /* 0x084 */ Vec target;
    /* 0x094 */ Vec pos;
    /* 0x098 */ f32 roll;
    /* 0x09C */ f32 zoom;
    /* 0x0A0 */ u32 field_0x088;
    /* 0x183 */ u8 field_0x16B[0xC3];
    /* 0x184 */ u8 camera_mode;
};

struct MatrixInfo {
    MatrixPtr* matrix_info;
};

extern MatrixInfo matrixInfo;

#endif