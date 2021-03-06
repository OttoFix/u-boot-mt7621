/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * This file contains a precompiled EFI binary built from
 * lib/efi_selftest/efi_miniapp_file_image_exit.c and converted to an include
 * using tools/file2include. It is used to testing the EFI_TCG2_PROTOCOL.
 * The precompiled form is needed to avoid the problem of reproducible builds.
 */

#define EFI_ST_DISK_IMG { 0x00000570, { \
	{0x00000000, "\x4d\x5a\x00\x00\x00\x00\x00\x00"}, /* MZ...... */ \
	{0x00000038, "\x00\x00\x00\x00\x40\x00\x00\x00"}, /* ....@... */ \
	{0x00000040, "\x50\x45\x00\x00\xc2\x01\x02\x00"}, /* PE...... */ \
	{0x00000050, "\x00\x00\x00\x00\x90\x00\x0e\x03"}, /* ........ */ \
	{0x00000058, "\x0b\x01\x02\x14\x38\x04\x00\x00"}, /* ....8... */ \
	{0x00000068, "\x38\x01\x00\x00\x38\x01\x00\x00"}, /* 8...8... */ \
	{0x00000078, "\x20\x00\x00\x00\x08\x00\x00\x00"}, /*  ....... */ \
	{0x00000090, "\x70\x05\x00\x00\x38\x01\x00\x00"}, /* p...8... */ \
	{0x00000098, "\x00\x00\x00\x00\x0a\x00\x00\x00"}, /* ........ */ \
	{0x000000b0, "\x00\x00\x00\x00\x06\x00\x00\x00"}, /* ........ */ \
	{0x000000e8, "\x2e\x72\x65\x6c\x6f\x63\x00\x00"}, /* .reloc.. */ \
	{0x00000108, "\x00\x00\x00\x00\x40\x00\x10\x42"}, /* ....@..B */ \
	{0x00000110, "\x2e\x74\x65\x78\x74\x00\x00\x00"}, /* .text... */ \
	{0x00000118, "\x38\x04\x00\x00\x38\x01\x00\x00"}, /* 8...8... */ \
	{0x00000120, "\x38\x04\x00\x00\x38\x01\x00\x00"}, /* 8...8... */ \
	{0x00000130, "\x00\x00\x00\x00\x20\x00\x50\xe0"}, /* .... .P. */ \
	{0x00000138, "\x07\x40\x2d\xe9\x24\x10\x8f\xe2"}, /* .@-.$... */ \
	{0x00000140, "\x00\x00\x91\xe5\x01\x10\x80\xe0"}, /* ........ */ \
	{0x00000148, "\x15\x0e\x4f\xe2\x5a\x00\x00\xeb"}, /* ..O.Z... */ \
	{0x00000150, "\x00\x00\x30\xe3\x01\x00\x00\x1a"}, /* ..0..... */ \
	{0x00000158, "\x03\x00\x9d\xe8\x2e\x00\x00\xeb"}, /* ........ */ \
	{0x00000160, "\x0c\xd0\x8d\xe2\x04\xf0\x9d\xe4"}, /* ........ */ \
	{0x00000168, "\xa8\x03\x00\x00\x02\x30\xa0\xe3"}, /* .....0.. */ \
	{0x00000170, "\x30\x40\x2d\xe9\x14\xd0\x4d\xe2"}, /* 0@-...M. */ \
	{0x00000178, "\x3c\x20\x91\xe5\x2c\x50\x91\xe5"}, /* < ..,P.. */ \
	{0x00000180, "\x04\x30\x8d\xe5\x00\x30\xa0\xe3"}, /* .0...0.. */ \
	{0x00000188, "\x7c\x10\x9f\xe5\x00\x30\x8d\xe5"}, /* |....0.. */ \
	{0x00000190, "\x98\x40\x92\xe5\x01\x10\x8f\xe0"}, /* .@...... */ \
	{0x00000198, "\x0c\x20\x8d\xe2\x34\xff\x2f\xe1"}, /* . ..4./. */ \
	{0x000001a0, "\x00\x40\x50\xe2\x07\x00\x00\x0a"}, /* .@P..... */ \
	{0x000001a8, "\x60\x10\x9f\xe5\x05\x00\xa0\xe1"}, /* `....... */ \
	{0x000001b0, "\x04\x30\x95\xe5\x01\x10\x8f\xe0"}, /* .0...... */ \
	{0x000001b8, "\x33\xff\x2f\xe1\x04\x00\xa0\xe1"}, /* 3./..... */ \
	{0x000001c0, "\x14\xd0\x8d\xe2\x30\x80\xbd\xe8"}, /* ....0... */ \
	{0x000001c8, "\x0c\x10\x9d\xe5\x40\x20\x9f\xe5"}, /* ....@ .. */ \
	{0x000001d0, "\x20\x30\x91\xe5\x02\x20\x8f\xe0"}, /*  0... .. */ \
	{0x000001d8, "\x02\x00\x53\xe1\x03\x00\x00\x8a"}, /* ..S..... */ \
	{0x000001e0, "\x28\x10\x91\xe5\x01\x30\x83\xe0"}, /* (....0.. */ \
	{0x000001e8, "\x02\x00\x53\xe1\xf2\xff\xff\x8a"}, /* ..S..... */ \
	{0x000001f0, "\x20\x10\x9f\xe5\x05\x00\xa0\xe1"}, /*  ....... */ \
	{0x000001f8, "\x04\x30\x95\xe5\x01\x10\x8f\xe0"}, /* .0...... */ \
	{0x00000200, "\x33\xff\x2f\xe1\x3a\x41\xa0\xe3"}, /* 3./.:A.. */ \
	{0x00000208, "\xeb\xff\xff\xea\xac\x03\x00\x00"}, /* ........ */ \
	{0x00000210, "\x34\x02\x00\x00\x90\xff\xff\xff"}, /* 4....... */ \
	{0x00000218, "\x36\x02\x00\x00\xf0\x40\x2d\xe9"}, /* 6....@-. */ \
	{0x00000220, "\x14\xd0\x4d\xe2\x0d\x70\xa0\xe1"}, /* ..M..p.. */ \
	{0x00000228, "\x00\x50\xa0\xe1\x01\x40\xa0\xe1"}, /* .P...@.. */ \
	{0x00000230, "\x2c\x60\x91\xe5\x74\x10\x9f\xe5"}, /* ,`..t... */ \
	{0x00000238, "\x10\x20\xa0\xe3\x01\x10\x8f\xe0"}, /* . ...... */ \
	{0x00000240, "\x07\x00\xa0\xe1\x60\x00\x00\xeb"}, /* ....`... */ \
	{0x00000248, "\x64\x10\x9f\xe5\x04\x30\x96\xe5"}, /* d....0.. */ \
	{0x00000250, "\x01\x10\x8f\xe0\x06\x00\xa0\xe1"}, /* ........ */ \
	{0x00000258, "\x33\xff\x2f\xe1\x04\x10\xa0\xe1"}, /* 3./..... */ \
	{0x00000260, "\x05\x00\xa0\xe1\xc0\xff\xff\xeb"}, /* ........ */ \
	{0x00000268, "\x00\x00\x50\xe3\x0e\x11\xa0\x03"}, /* ..P..... */ \
	{0x00000270, "\x05\x00\x00\x0a\x3c\x10\x9f\xe5"}, /* ....<... */ \
	{0x00000278, "\x06\x00\xa0\xe1\x01\x10\x8f\xe0"}, /* ........ */ \
	{0x00000280, "\x04\x30\x96\xe5\x33\xff\x2f\xe1"}, /* .0..3./. */ \
	{0x00000288, "\x3a\x11\xa0\xe3\x3c\x30\x94\xe5"}, /* :...<0.. */ \
	{0x00000290, "\x10\x20\xa0\xe3\x78\x40\x93\xe5"}, /* . ..x@.. */ \
	{0x00000298, "\x05\x00\xa0\xe1\x07\x30\xa0\xe1"}, /* .....0.. */ \
	{0x000002a0, "\x34\xff\x2f\xe1\x00\x00\xa0\xe3"}, /* 4./..... */ \
	{0x000002a8, "\x14\xd0\x8d\xe2\xf0\x80\xbd\xe8"}, /* ........ */ \
	{0x000002b0, "\xb8\x02\x00\x00\x2a\x02\x00\x00"}, /* ........ */ \
	{0x000002b8, "\x3a\x02\x00\x00\x00\x30\xa0\xe3"}, /* :....0.. */ \
	{0x000002c0, "\x03\x20\xa0\xe1\x03\xc0\xa0\xe1"}, /* . ...... */ \
	{0x000002c8, "\x04\xe0\x2d\xe5\x00\xe0\x91\xe5"}, /* ..-..... */ \
	{0x000002d0, "\x00\x00\x5e\xe3\x03\x00\x00\x1a"}, /* ..^..... */ \
	{0x000002d8, "\x02\x10\x93\xe1\x0c\x00\x00\x1a"}, /* ........ */ \
	{0x000002e0, "\x00\x00\xa0\xe3\x04\xf0\x9d\xe4"}, /* ........ */ \
	{0x000002e8, "\x12\x00\x5e\xe3\x04\xc0\x91\x05"}, /* ..^..... */ \
	{0x000002f0, "\x05\x00\x00\x0a\x13\x00\x5e\xe3"}, /* ......^. */ \
	{0x000002f8, "\x04\x20\x91\x05\x02\x00\x00\x0a"}, /* . ...... */ \
	{0x00000300, "\x11\x00\x5e\xe3\x04\x30\x91\x05"}, /* ..^..0.. */ \
	{0x00000308, "\x03\x30\x80\x00\x08\x10\x81\xe2"}, /* .0...... */ \
	{0x00000310, "\xed\xff\xff\xea\x00\x00\x52\xe3"}, /* ......R. */ \
	{0x00000318, "\x00\x00\x53\x13\x09\x00\x00\x1a"}, /* ..S..... */ \
	{0x00000320, "\x06\x01\xa0\xe3\x04\xf0\x9d\xe4"}, /* ........ */ \
	{0x00000328, "\x04\x10\xd3\xe5\x02\xc0\x4c\xe0"}, /* ......L. */ \
	{0x00000330, "\x17\x00\x51\xe3\x00\xe0\x93\x05"}, /* ..Q..... */ \
	{0x00000338, "\x02\x30\x83\xe0\x0e\x10\x90\x07"}, /* .0...... */ \
	{0x00000340, "\x00\x10\x81\x00\x0e\x10\x80\x07"}, /* ........ */ \
	{0x00000348, "\x00\x00\x5c\xe3\xf5\xff\xff\xca"}, /* ..\..... */ \
	{0x00000350, "\xe2\xff\xff\xea\x01\x10\x41\xe2"}, /* ......A. */ \
	{0x00000358, "\x02\x20\x80\xe0\x02\x00\x50\xe1"}, /* . ....P. */ \
	{0x00000360, "\x01\x00\x00\x1a\x00\x00\xa0\xe3"}, /* ........ */ \
	{0x00000368, "\x1e\xff\x2f\xe1\x00\x30\xd0\xe5"}, /* ../..0.. */ \
	{0x00000370, "\x01\xc0\xf1\xe5\x0c\x00\x53\xe1"}, /* ......S. */ \
	{0x00000378, "\x01\x00\x00\x0a\x0c\x00\x43\xe0"}, /* ......C. */ \
	{0x00000380, "\x1e\xff\x2f\xe1\x01\x00\x80\xe2"}, /* ../..... */ \
	{0x00000388, "\xf3\xff\xff\xea\x01\x00\x50\xe1"}, /* ......P. */ \
	{0x00000390, "\x02\x30\x81\xe0\x01\x20\x40\x92"}, /* .0... @. */ \
	{0x00000398, "\x08\x00\x00\x9a\x00\x10\xa0\xe1"}, /* ........ */ \
	{0x000003a0, "\x02\x20\x80\xe0\x01\x00\x52\xe1"}, /* . ....R. */ \
	{0x000003a8, "\x1e\xff\x2f\x01\x01\xc0\x73\xe5"}, /* ../...s. */ \
	{0x000003b0, "\x01\xc0\x62\xe5\xfa\xff\xff\xea"}, /* ..b..... */ \
	{0x000003b8, "\x01\xc0\xd1\xe4\x01\xc0\xe2\xe5"}, /* ........ */ \
	{0x000003c0, "\x03\x00\x51\xe1\xfb\xff\xff\x1a"}, /* ..Q..... */ \
	{0x000003c8, "\x1e\xff\x2f\xe1\xee\xff\xff\xea"}, /* ../..... */ \
	{0x000003d0, "\x00\x30\xa0\xe1\x02\x20\x80\xe0"}, /* .0... .. */ \
	{0x000003d8, "\x02\x00\x53\xe1\x1e\xff\x2f\x01"}, /* ..S.../. */ \
	{0x000003e0, "\x01\x10\xc3\xe4\xfb\xff\xff\xea"}, /* ........ */ \
	{0x000003e8, "\x1e\xff\x2f\xe1\x1e\xff\x2f\xe1"}, /* ../.../. */ \
	{0x000003f0, "\x43\x00\x6f\x00\x75\x00\x6c\x00"}, /* C.o.u.l. */ \
	{0x000003f8, "\x64\x00\x20\x00\x6e\x00\x6f\x00"}, /* d. .n.o. */ \
	{0x00000400, "\x74\x00\x20\x00\x6f\x00\x70\x00"}, /* t. .o.p. */ \
	{0x00000408, "\x65\x00\x6e\x00\x20\x00\x6c\x00"}, /* e.n. .l. */ \
	{0x00000410, "\x6f\x00\x61\x00\x64\x00\x65\x00"}, /* o.a.d.e. */ \
	{0x00000418, "\x64\x00\x20\x00\x69\x00\x6d\x00"}, /* d. .i.m. */ \
	{0x00000420, "\x61\x00\x67\x00\x65\x00\x20\x00"}, /* a.g.e. . */ \
	{0x00000428, "\x70\x00\x72\x00\x6f\x00\x74\x00"}, /* p.r.o.t. */ \
	{0x00000430, "\x6f\x00\x63\x00\x6f\x00\x6c\x00"}, /* o.c.o.l. */ \
	{0x00000438, "\x00\x00\x49\x00\x6e\x00\x63\x00"}, /* ..I.n.c. */ \
	{0x00000440, "\x6f\x00\x72\x00\x72\x00\x65\x00"}, /* o.r.r.e. */ \
	{0x00000448, "\x63\x00\x74\x00\x20\x00\x69\x00"}, /* c.t. .i. */ \
	{0x00000450, "\x6d\x00\x61\x00\x67\x00\x65\x00"}, /* m.a.g.e. */ \
	{0x00000458, "\x5f\x00\x62\x00\x61\x00\x73\x00"}, /* _.b.a.s. */ \
	{0x00000460, "\x65\x00\x20\x00\x6f\x00\x72\x00"}, /* e. .o.r. */ \
	{0x00000468, "\x20\x00\x69\x00\x6d\x00\x61\x00"}, /*  .i.m.a. */ \
	{0x00000470, "\x67\x00\x65\x00\x5f\x00\x73\x00"}, /* g.e._.s. */ \
	{0x00000478, "\x69\x00\x7a\x00\x65\x00\x0a\x00"}, /* i.z.e... */ \
	{0x00000480, "\x00\x00\x45\x00\x46\x00\x49\x00"}, /* ..E.F.I. */ \
	{0x00000488, "\x20\x00\x61\x00\x70\x00\x70\x00"}, /*  .a.p.p. */ \
	{0x00000490, "\x6c\x00\x69\x00\x63\x00\x61\x00"}, /* l.i.c.a. */ \
	{0x00000498, "\x74\x00\x69\x00\x6f\x00\x6e\x00"}, /* t.i.o.n. */ \
	{0x000004a0, "\x20\x00\x63\x00\x61\x00\x6c\x00"}, /*  .c.a.l. */ \
	{0x000004a8, "\x6c\x00\x69\x00\x6e\x00\x67\x00"}, /* l.i.n.g. */ \
	{0x000004b0, "\x20\x00\x45\x00\x78\x00\x69\x00"}, /*  .E.x.i. */ \
	{0x000004b8, "\x74\x00\x0a\x00\x00\x00\x4c\x00"}, /* t.....L. */ \
	{0x000004c0, "\x6f\x00\x61\x00\x64\x00\x65\x00"}, /* o.a.d.e. */ \
	{0x000004c8, "\x64\x00\x20\x00\x69\x00\x6d\x00"}, /* d. .i.m. */ \
	{0x000004d0, "\x61\x00\x67\x00\x65\x00\x20\x00"}, /* a.g.e. . */ \
	{0x000004d8, "\x70\x00\x72\x00\x6f\x00\x74\x00"}, /* p.r.o.t. */ \
	{0x000004e0, "\x6f\x00\x63\x00\x6f\x00\x6c\x00"}, /* o.c.o.l. */ \
	{0x000004e8, "\x20\x00\x6d\x00\x69\x00\x73\x00"}, /*  .m.i.s. */ \
	{0x000004f0, "\x73\x00\x69\x00\x6e\x00\x67\x00"}, /* s.i.n.g. */ \
	{0x000004f8, "\x0a\x00\x00\x00\x53\x00\x55\x00"}, /* ....S.U. */ \
	{0x00000500, "\x43\x00\x43\x00\x45\x00\x53\x00"}, /* C.C.E.S. */ \
	{0x00000508, "\x53\x00\x00\x00\x00\x00\x00\x00"}, /* S....... */ \
	{0x00000510, "\x10\x00\x00\x00\x00\x00\x00\x00"}, /* ........ */ \
	{0x00000548, "\xa1\x31\x1b\x5b\x62\x95\xd2\x11"}, /* .1.[b... */ \
	{0x00000550, "\x8e\x3f\x00\xa0\xc9\x69\x72\x3b"}, /* .?...ir; */ \
	{0x00000558, "\x10\x05\x00\x00\x00\x00\x00\x00"}, /* ........ */ \
	{0, NULL} } }
