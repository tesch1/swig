/* shim header for SWIG testing */

#ifndef MATLAB_SHIM_MEX_H
#define MATLAB_SHIM_MEX_H
#include <stdlib.h>
#include <stdint.h>
typedef enum {
  mxUNKNOWN_CLASS = 0,
  mxCELL_CLASS,
  mxSTRUCT_CLASS,
  mxLOGICAL_CLASS,
  mxCHAR_CLASS,
  mxUNUSED_CLASS,
  mxDOUBLE_CLASS,
  mxSINGLE_CLASS,
  mxINT8_CLASS,
  mxUINT8_CLASS,
  mxINT16_CLASS,
  mxUINT16_CLASS,
  mxINT32_CLASS,
  mxUINT32_CLASS,
  mxINT64_CLASS,
  mxUINT64_CLASS,
  mxFUNCTION_CLASS
} mxClassID;

typedef enum { mxREAL = 0, mxCOMPLEX } mxComplexity;
typedef int8_t int8_T;
typedef int8_t mxChar;
typedef uint8_t uint8_T;
typedef int16_t int16_T;
typedef uint16_t uint16_T;
typedef int32_t int32_T;
typedef uint32_t uint32_T;
typedef int64_t int64_T;
typedef uint64_t uint64_T;

typedef struct {} mxArray;
typedef size_t mwSize;
typedef size_t mwIndex;
typedef unsigned char mxLogical;

void mexWarnMsgIdAndTxt(const char *id, const char *s, ...) {}
void mexErrMsgIdAndTxt(const char *id, const char *s, ...) {}
void mxDestroyArray(mxArray *a) {}
mxClassID mxGetClassID(const mxArray *a) {return mxDOUBLE_CLASS; }
//double * mxGetPr(const mxArray *a)
mxArray * mxGetProperty(const mxArray *a, const mwIndex idx, const char *pname) { return NULL; }
void mxSetProperty(mxArray *a, mwIndex idx, const char *pname, const mxArray *b) {}
mwSize mxGetNumberOfElements(const mxArray *a) {return 0;}
int mxIsLogicalScalar(const mxArray *a) {return 0;}
int mxIsLogicalScalarTrue(const mxArray *a) {return 0;}
mxArray * mxCreateLogicalScalar(mxLogical v) { return NULL; }
int mxIsChar(const mxArray *a) {return 0;}
int mxGetString(const mxArray *a, char *buf, mwSize len) {return 0;}
void mexErrMsgTxt(const char *msg) {}
void * mxGetData(const mxArray *a) { return NULL; }
int mxIsDouble(const mxArray *a) {return 0;}
double mxGetScalar(const mxArray *a) {return 0;}
int mxIsComplex(const mxArray *a) {return 0;}
mxArray * mxCreateString(const char *str) { return NULL; }
mxArray * mxCreateNumericMatrix(mwSize m, mwSize n, mxClassID cid, mxComplexity f) { return NULL; }
mxArray * mexCallMATLABWithTrap(int nout, mxArray *aout[], int nin, mxArray *ain[], const char *fname) { return NULL; }
mxArray * mxCreateCharArray(mwSize ndim, const mwSize *dims) {return NULL;}
size_t mxGetM(const mxArray *a) { return 0; }
size_t mxGetN(const mxArray *a) { return 0; }
mxArray * mxCreateDoubleScalar(double v) {return NULL;}
mxArray * mxGetCell(const mxArray *a, mwIndex idx) { return NULL; }
void mxSetCell(mxArray *a, mwIndex idx, mxArray *v) { }
mxArray * mxCreateCellMatrix (mwSize m, mwSize n) { return NULL; }
#endif
