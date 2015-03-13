#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP netbenchmark_rate(SEXP PredEdgeListSEXP, SEXP GSEdgeListSEXP, 
    SEXP ngenesSEXP, SEXP symSEXP);
SEXP netbenchmark_zsc(SEXP xSEXP);

R_CallMethodDef callMethods[]  = {
  {"netbenchmark_rate", (DL_FUNC) &netbenchmark_rate, 4},
  {"netbenchmark_zsc", (DL_FUNC) &netbenchmark_zsc, 1},
  {NULL, NULL, 0}
};

void R_init_netbenchmark(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}
