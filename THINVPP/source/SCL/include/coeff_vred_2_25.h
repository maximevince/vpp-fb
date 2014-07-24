const unsigned short coeff_vred_2_25[33][12] = {
    {0x0000, 0x0064, 0x00fe, 0x014a, 0x00fe, 0x0064, 0x0000, 0x080e, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0801, 0x0061, 0x00fc, 0x014b, 0x0100, 0x0066, 0x0001, 0x080e, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0802, 0x005f, 0x00f9, 0x014c, 0x0102, 0x0068, 0x0002, 0x080e, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0802, 0x005d, 0x00f7, 0x014c, 0x0105, 0x006a, 0x0002, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0803, 0x005b, 0x00f5, 0x014c, 0x0106, 0x006d, 0x0003, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0804, 0x0059, 0x00f3, 0x014b, 0x0109, 0x006f, 0x0004, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0804, 0x0057, 0x00f1, 0x014a, 0x010b, 0x0071, 0x0005, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0805, 0x0054, 0x00ee, 0x014b, 0x010d, 0x0074, 0x0006, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0806, 0x0052, 0x00ec, 0x014b, 0x010f, 0x0076, 0x0007, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0806, 0x0050, 0x00ea, 0x0149, 0x0111, 0x0079, 0x0008, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0807, 0x004e, 0x00e7, 0x014a, 0x0113, 0x007b, 0x0009, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0807, 0x004c, 0x00e5, 0x0149, 0x0115, 0x007d, 0x000a, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0808, 0x004a, 0x00e3, 0x0149, 0x0117, 0x0080, 0x000b, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0808, 0x0048, 0x00e0, 0x0149, 0x0119, 0x0082, 0x000c, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0809, 0x0046, 0x00de, 0x0147, 0x011b, 0x0085, 0x000e, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0809, 0x0044, 0x00dc, 0x0146, 0x011d, 0x0087, 0x000f, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080a, 0x0042, 0x00d9, 0x0147, 0x011e, 0x008a, 0x0010, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080a, 0x0040, 0x00d7, 0x0146, 0x0120, 0x008c, 0x0011, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080b, 0x003e, 0x00d4, 0x0146, 0x0123, 0x008e, 0x0012, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080b, 0x003c, 0x00d2, 0x0145, 0x0124, 0x0091, 0x0013, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080c, 0x003b, 0x00cf, 0x0145, 0x0125, 0x0093, 0x0015, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080c, 0x0039, 0x00cd, 0x0143, 0x0127, 0x0096, 0x0016, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080c, 0x0037, 0x00cb, 0x0142, 0x0129, 0x0098, 0x0017, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080d, 0x0035, 0x00c8, 0x0142, 0x012a, 0x009b, 0x0019, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080d, 0x0033, 0x00c6, 0x0141, 0x012c, 0x009d, 0x001a, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080d, 0x0032, 0x00c3, 0x013e, 0x012e, 0x00a0, 0x001c, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080e, 0x0030, 0x00c1, 0x013f, 0x012f, 0x00a2, 0x001d, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080e, 0x002e, 0x00be, 0x013e, 0x0131, 0x00a5, 0x001e, 0x0810, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080e, 0x002c, 0x00bc, 0x013c, 0x0132, 0x00a7, 0x0020, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080e, 0x002b, 0x00b9, 0x013b, 0x0133, 0x00aa, 0x0021, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080e, 0x0029, 0x00b7, 0x0139, 0x0135, 0x00ac, 0x0023, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080f, 0x0028, 0x00b4, 0x0139, 0x0136, 0x00af, 0x0024, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x080f, 0x0026, 0x00b2, 0x0137, 0x0137, 0x00b2, 0x0026, 0x080f, 0x0000, 0x0000, 0x0000, 0x0000},
};