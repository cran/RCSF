// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// R_CSF
IntegerVector R_CSF(DataFrame data, bool sloop_smooth, double class_threshold, double cloth_resolution, int rigidness, int interations, double time_step);
RcppExport SEXP _RCSF_R_CSF(SEXP dataSEXP, SEXP sloop_smoothSEXP, SEXP class_thresholdSEXP, SEXP cloth_resolutionSEXP, SEXP rigidnessSEXP, SEXP interationsSEXP, SEXP time_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type sloop_smooth(sloop_smoothSEXP);
    Rcpp::traits::input_parameter< double >::type class_threshold(class_thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type cloth_resolution(cloth_resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type rigidness(rigidnessSEXP);
    Rcpp::traits::input_parameter< int >::type interations(interationsSEXP);
    Rcpp::traits::input_parameter< double >::type time_step(time_stepSEXP);
    rcpp_result_gen = Rcpp::wrap(R_CSF(data, sloop_smooth, class_threshold, cloth_resolution, rigidness, interations, time_step));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RCSF_R_CSF", (DL_FUNC) &_RCSF_R_CSF, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_RCSF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
