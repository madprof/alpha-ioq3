#ifndef _MD4_H_
#define _MD4_H_

#include "q_shared.h"

void mdfour(byte *out, byte *in, int n);
void mdfour_hex(const byte md4[16], char hex[32]);

#endif
