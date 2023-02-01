/* Customized table mapping between kernel xtregset and GDB register cache.

   Customer ID=12153; Build=0x9d663; Copyright (c) 2007-2010 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */


typedef struct {
  int   gdb_regnum;
  int   gdb_offset;
  int   ptrace_cp_offset;
  int   ptrace_offset;
  int   size;
  int   coproc;
  int   dbnum;
  char* name
;} xtensa_regtable_t;

#define XTENSA_ELF_XTREG_SIZE	168

const xtensa_regtable_t  xtensa_regmap_table[] = {
  /* gnum,gofs,cpofs,ofs,siz,cp, dbnum,  name */
  {   76, 304,   8,   8,  4, -1, 0x0204, "br" },
  {   77, 308,  12,  12,  4, -1, 0x020c, "scompare1" },
  {   78, 312,   0,   0,  4, -1, 0x0210, "acclo" },
  {   79, 316,   4,   4,  4, -1, 0x0211, "acchi" },
  {   80, 320,  16,  16,  4, -1, 0x0220, "m0" },
  {   81, 324,  20,  20,  4, -1, 0x0221, "m1" },
  {   82, 328,  24,  24,  4, -1, 0x0222, "m2" },
  {   83, 332,  28,  28,  4, -1, 0x0223, "m3" },
  {   84, 336,   8,  40,  8,  0, 0x0030, "f0" },
  {   85, 344,  16,  48,  8,  0, 0x0031, "f1" },
  {   86, 352,  24,  56,  8,  0, 0x0032, "f2" },
  {   87, 360,  32,  64,  8,  0, 0x0033, "f3" },
  {   88, 368,  40,  72,  8,  0, 0x0034, "f4" },
  {   89, 376,  48,  80,  8,  0, 0x0035, "f5" },
  {   90, 384,  56,  88,  8,  0, 0x0036, "f6" },
  {   91, 392,  64,  96,  8,  0, 0x0037, "f7" },
  {   92, 400,  72, 104,  8,  0, 0x0038, "f8" },
  {   93, 408,  80, 112,  8,  0, 0x0039, "f9" },
  {   94, 416,  88, 120,  8,  0, 0x003a, "f10" },
  {   95, 424,  96, 128,  8,  0, 0x003b, "f11" },
  {   96, 432, 104, 136,  8,  0, 0x003c, "f12" },
  {   97, 440, 112, 144,  8,  0, 0x003d, "f13" },
  {   98, 448, 120, 152,  8,  0, 0x003e, "f14" },
  {   99, 456, 128, 160,  8,  0, 0x003f, "f15" },
  {  100, 464,   0,  32,  4,  0, 0x03e8, "fcr" },
  {  101, 468,   4,  36,  4,  0, 0x03e9, "fsr" },
  { 0 }
};

