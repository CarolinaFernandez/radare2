/* radare - LGPL - Copyright 2009-2015 pancake, nibble */

#define R_BIN_ELF64 1
#include "bin_write_elf.c"

RBinWrite r_bin_write_elf64 = {
	.scn_resize = &scn_resize,
	.scn_perms = &scn_perms,
	.rpath_del = &rpath_del,
};
