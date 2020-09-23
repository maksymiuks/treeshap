// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// treeshap_cpp
NumericVector treeshap_cpp(int x_size, LogicalVector fulfills, IntegerVector roots, IntegerVector yes, IntegerVector no, IntegerVector missing, IntegerVector feature, LogicalVector is_leaf, NumericVector value, NumericVector cover);
RcppExport SEXP _treeshap_treeshap_cpp(SEXP x_sizeSEXP, SEXP fulfillsSEXP, SEXP rootsSEXP, SEXP yesSEXP, SEXP noSEXP, SEXP missingSEXP, SEXP featureSEXP, SEXP is_leafSEXP, SEXP valueSEXP, SEXP coverSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x_size(x_sizeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type fulfills(fulfillsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type roots(rootsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no(noSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type feature(featureSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_leaf(is_leafSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cover(coverSEXP);
    rcpp_result_gen = Rcpp::wrap(treeshap_cpp(x_size, fulfills, roots, yes, no, missing, feature, is_leaf, value, cover));
    return rcpp_result_gen;
END_RCPP
}
// treeshap_interactions_cpp
NumericMatrix treeshap_interactions_cpp(int x_size, LogicalVector fulfills, IntegerVector roots, IntegerVector yes, IntegerVector no, IntegerVector missing, IntegerVector feature, LogicalVector is_leaf, NumericVector value, NumericVector cover);
RcppExport SEXP _treeshap_treeshap_interactions_cpp(SEXP x_sizeSEXP, SEXP fulfillsSEXP, SEXP rootsSEXP, SEXP yesSEXP, SEXP noSEXP, SEXP missingSEXP, SEXP featureSEXP, SEXP is_leafSEXP, SEXP valueSEXP, SEXP coverSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x_size(x_sizeSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type fulfills(fulfillsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type roots(rootsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type yes(yesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type no(noSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type feature(featureSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_leaf(is_leafSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cover(coverSEXP);
    rcpp_result_gen = Rcpp::wrap(treeshap_interactions_cpp(x_size, fulfills, roots, yes, no, missing, feature, is_leaf, value, cover));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treeshap_treeshap_cpp", (DL_FUNC) &_treeshap_treeshap_cpp, 10},
    {"_treeshap_treeshap_interactions_cpp", (DL_FUNC) &_treeshap_treeshap_interactions_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_treeshap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
