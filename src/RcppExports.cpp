// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collectorGuess
std::string collectorGuess(CharacterVector input);
RcppExport SEXP readr_collectorGuess(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    __result = Rcpp::wrap(collectorGuess(input));
    return __result;
END_RCPP
}
// empty_cols
std::vector<bool> empty_cols(std::string x);
RcppExport SEXP readr_empty_cols(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    __result = Rcpp::wrap(empty_cols(x));
    return __result;
END_RCPP
}
// flip
List flip(ListOf<CharacterVector> x);
RcppExport SEXP readr_flip(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type x(xSEXP);
    __result = Rcpp::wrap(flip(x));
    return __result;
END_RCPP
}
// dim_tokens_
IntegerVector dim_tokens_(List sourceSpec, List tokenizerSpec);
RcppExport SEXP readr_dim_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    __result = Rcpp::wrap(dim_tokens_(sourceSpec, tokenizerSpec));
    return __result;
END_RCPP
}
// tokenize_
std::vector<std::vector<std::string> > tokenize_(List sourceSpec, List tokenizerSpec, int n);
RcppExport SEXP readr_tokenize_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(tokenize_(sourceSpec, tokenizerSpec, n));
    return __result;
END_RCPP
}
// parse_
SEXP parse_(List sourceSpec, List tokenizerSpec, List collectorSpec);
RcppExport SEXP readr_parse_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP collectorSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< List >::type collectorSpec(collectorSpecSEXP);
    __result = Rcpp::wrap(parse_(sourceSpec, tokenizerSpec, collectorSpec));
    return __result;
END_RCPP
}
// read_file_
CharacterVector read_file_(List sourceSpec);
RcppExport SEXP readr_read_file_(SEXP sourceSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    __result = Rcpp::wrap(read_file_(sourceSpec));
    return __result;
END_RCPP
}
// read_lines_
CharacterVector read_lines_(List sourceSpec, int n_max);
RcppExport SEXP readr_read_lines_(SEXP sourceSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(read_lines_(sourceSpec, n_max));
    return __result;
END_RCPP
}
// read_tokens
List read_tokens(List sourceSpec, List tokenizerSpec, ListOf<List> colSpecs, CharacterVector col_names, int n_max);
RcppExport SEXP readr_read_tokens(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP colSpecsSEXP, SEXP col_namesSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type colSpecs(colSpecsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    __result = Rcpp::wrap(read_tokens(sourceSpec, tokenizerSpec, colSpecs, col_names, n_max));
    return __result;
END_RCPP
}
// collectorsGuess
std::vector<std::string> collectorsGuess(List sourceSpec, List tokenizerSpec, int n);
RcppExport SEXP readr_collectorsGuess(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(collectorsGuess(sourceSpec, tokenizerSpec, n));
    return __result;
END_RCPP
}
