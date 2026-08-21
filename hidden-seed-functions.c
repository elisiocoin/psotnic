void gen_cfg_seed(unsigned char *out)
{
    int i;
    out[0] = 32;
    out[1] = 49;
    out[2] = 89;
    out[3] = 15;
    out[4] = 220;
    out[5] = 122;
    out[6] = 196;
    out[7] = 172;
    out[8] = 117;
    out[9] = 237;
    out[10] = 58;
    out[11] = 162;
    out[12] = 205;
    out[13] = 63;
    out[14] = 250;
    out[15] = 12;

    for(i=0; i<16; ++i)
    {
        out[i] ^= 114;
    }
}

void gen_ul_seed(unsigned char *out)
{
    int i;
    out[0] = 30;
    out[1] = 228;
    out[2] = 65;
    out[3] = 189;
    out[4] = 211;
    out[5] = 115;
    out[6] = 195;
    out[7] = 156;
    out[8] = 208;
    out[9] = 36;
    out[10] = 49;
    out[11] = 124;
    out[12] = 146;
    out[13] = 4;
    out[14] = 178;
    out[15] = 210;

    for(i=0; i<16; ++i)
    {
        out[i] ^= 73;
    }
}

