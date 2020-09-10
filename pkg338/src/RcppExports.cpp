// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dance338
String dance338(String x);
RcppExport SEXP _pkg338_dance338(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dance338(x));
    return rcpp_result_gen;
END_RCPP
}
// polyfit338
List polyfit338(NumericVector data, NumericVector response, int degree);
RcppExport SEXP _pkg338_polyfit338(SEXP dataSEXP, SEXP responseSEXP, SEXP degreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type response(responseSEXP);
    Rcpp::traits::input_parameter< int >::type degree(degreeSEXP);
    rcpp_result_gen = Rcpp::wrap(polyfit338(data, response, degree));
    return rcpp_result_gen;
END_RCPP
}
// linfit338
List linfit338(NumericVector x, NumericVector y);
RcppExport SEXP _pkg338_linfit338(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(linfit338(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pkg338_dance338", (DL_FUNC) &_pkg338_dance338, 1},
    {"_pkg338_polyfit338", (DL_FUNC) &_pkg338_polyfit338, 3},
    {"_pkg338_linfit338", (DL_FUNC) &_pkg338_linfit338, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_pkg338(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}