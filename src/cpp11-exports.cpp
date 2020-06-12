// Generated by cpp11: do not edit by hand

#include "cpp11/declarations.hpp"
#include <Rcpp.h>
using namespace Rcpp;

// CollectorGuess.cpp
std::string collectorGuess(cpp11::strings input, cpp11::list locale_, bool guessInteger);
extern "C" SEXP _readr_collectorGuess(SEXP input, SEXP locale_, SEXP guessInteger) {
  BEGIN_CPP11
    return cpp11::as_sexp(collectorGuess(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(input)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<bool>(guessInteger))));
  END_CPP11
}
// connection.cpp
std::string read_connection_(cpp11::sexp con, std::string filename, int chunk_size);
extern "C" SEXP _readr_read_connection_(SEXP con, SEXP filename, SEXP chunk_size) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_connection_(cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(con)), cpp11::unmove(cpp11::as_cpp<std::string>(filename)), cpp11::unmove(cpp11::as_cpp<int>(chunk_size))));
  END_CPP11
}
// datetime.cpp
cpp11::writable::doubles utctime(cpp11::integers year, cpp11::integers month, cpp11::integers day, cpp11::integers hour, cpp11::integers min, cpp11::integers sec, cpp11::doubles psec);
extern "C" SEXP _readr_utctime(SEXP year, SEXP month, SEXP day, SEXP hour, SEXP min, SEXP sec, SEXP psec) {
  BEGIN_CPP11
    return cpp11::as_sexp(utctime(cpp11::unmove(cpp11::as_cpp<cpp11::integers>(year)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(month)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(day)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(hour)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(min)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(sec)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(psec))));
  END_CPP11
}
// parse.cpp
cpp11::integers dim_tokens_(cpp11::list sourceSpec, cpp11::list tokenizerSpec);
extern "C" SEXP _readr_dim_tokens_(SEXP sourceSpec, SEXP tokenizerSpec) {
  BEGIN_CPP11
    return cpp11::as_sexp(dim_tokens_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec))));
  END_CPP11
}
// parse.cpp
std::vector<int> count_fields_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, int n_max);
extern "C" SEXP _readr_count_fields_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP n_max) {
  BEGIN_CPP11
    return cpp11::as_sexp(count_fields_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<int>(n_max))));
  END_CPP11
}
// parse.cpp
cpp11::list guess_header_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, cpp11::list locale_);
extern "C" SEXP _readr_guess_header_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP locale_) {
  BEGIN_CPP11
    return cpp11::as_sexp(guess_header_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_))));
  END_CPP11
}
// parse.cpp
SEXP tokenize_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, int n_max);
extern "C" SEXP _readr_tokenize_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP n_max) {
  BEGIN_CPP11
    return cpp11::as_sexp(tokenize_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<int>(n_max))));
  END_CPP11
}
// parse.cpp
SEXP parse_vector_(cpp11::strings x, cpp11::list collectorSpec, cpp11::list locale_, const std::vector<std::string>& na, const bool trim_ws);
extern "C" SEXP _readr_parse_vector_(SEXP x, SEXP collectorSpec, SEXP locale_, SEXP na, SEXP trim_ws) {
  BEGIN_CPP11
    return cpp11::as_sexp(parse_vector_(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(x)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(collectorSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<const std::vector<std::string>&>(na)), cpp11::unmove(cpp11::as_cpp<const bool>(trim_ws))));
  END_CPP11
}
// read.cpp
cpp11::strings read_file_(cpp11::list sourceSpec, cpp11::list locale_);
extern "C" SEXP _readr_read_file_(SEXP sourceSpec, SEXP locale_) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_file_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_))));
  END_CPP11
}
// read.cpp
RawVector read_file_raw_(cpp11::list sourceSpec);
extern "C" SEXP _readr_read_file_raw_(SEXP sourceSpec) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_file_raw_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec))));
  END_CPP11
}
// read.cpp
cpp11::writable::strings read_lines_(cpp11::list sourceSpec, cpp11::list locale_, std::vector<std::string> na, int n_max, bool skip_empty_rows, bool progress);
extern "C" SEXP _readr_read_lines_(SEXP sourceSpec, SEXP locale_, SEXP na, SEXP n_max, SEXP skip_empty_rows, SEXP progress) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_lines_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<std::vector<std::string>>(na)), cpp11::unmove(cpp11::as_cpp<int>(n_max)), cpp11::unmove(cpp11::as_cpp<bool>(skip_empty_rows)), cpp11::unmove(cpp11::as_cpp<bool>(progress))));
  END_CPP11
}
// read.cpp
void read_lines_chunked_(cpp11::list sourceSpec, cpp11::list locale_, std::vector<std::string> na, int chunkSize, cpp11::environment callback, bool skip_empty_rows, bool progress);
extern "C" SEXP _readr_read_lines_chunked_(SEXP sourceSpec, SEXP locale_, SEXP na, SEXP chunkSize, SEXP callback, SEXP skip_empty_rows, SEXP progress) {
  BEGIN_CPP11
    read_lines_chunked_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<std::vector<std::string>>(na)), cpp11::unmove(cpp11::as_cpp<int>(chunkSize)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(callback)), cpp11::unmove(cpp11::as_cpp<bool>(skip_empty_rows)), cpp11::unmove(cpp11::as_cpp<bool>(progress)));
  return R_NilValue;
  END_CPP11
}
// read.cpp
cpp11::list read_lines_raw_(cpp11::list sourceSpec, int n_max, bool progress);
extern "C" SEXP _readr_read_lines_raw_(SEXP sourceSpec, SEXP n_max, SEXP progress) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_lines_raw_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<int>(n_max)), cpp11::unmove(cpp11::as_cpp<bool>(progress))));
  END_CPP11
}
// read.cpp
void read_lines_raw_chunked_(cpp11::list sourceSpec, int chunkSize, cpp11::environment callback, bool progress);
extern "C" SEXP _readr_read_lines_raw_chunked_(SEXP sourceSpec, SEXP chunkSize, SEXP callback, SEXP progress) {
  BEGIN_CPP11
    read_lines_raw_chunked_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<int>(chunkSize)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(callback)), cpp11::unmove(cpp11::as_cpp<bool>(progress)));
  return R_NilValue;
  END_CPP11
}
// read.cpp
cpp11::sexp read_tokens_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, cpp11::list colSpecs, cpp11::strings colNames, cpp11::list locale_, int n_max, bool progress);
extern "C" SEXP _readr_read_tokens_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP colSpecs, SEXP colNames, SEXP locale_, SEXP n_max, SEXP progress) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_tokens_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(colSpecs)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(colNames)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<int>(n_max)), cpp11::unmove(cpp11::as_cpp<bool>(progress))));
  END_CPP11
}
// read.cpp
void read_tokens_chunked_(cpp11::list sourceSpec, cpp11::environment callback, int chunkSize, cpp11::list tokenizerSpec, cpp11::list colSpecs, cpp11::strings colNames, cpp11::list locale_, bool progress);
extern "C" SEXP _readr_read_tokens_chunked_(SEXP sourceSpec, SEXP callback, SEXP chunkSize, SEXP tokenizerSpec, SEXP colSpecs, SEXP colNames, SEXP locale_, SEXP progress) {
  BEGIN_CPP11
    read_tokens_chunked_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(callback)), cpp11::unmove(cpp11::as_cpp<int>(chunkSize)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(colSpecs)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(colNames)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<bool>(progress)));
  return R_NilValue;
  END_CPP11
}
// read.cpp
cpp11::sexp melt_tokens_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, Rcpp::ListOf<cpp11::list> colSpecs, cpp11::list locale_, int n_max, bool progress);
extern "C" SEXP _readr_melt_tokens_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP colSpecs, SEXP locale_, SEXP n_max, SEXP progress) {
  BEGIN_CPP11
    return cpp11::as_sexp(melt_tokens_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<Rcpp::ListOf<cpp11::list>>(colSpecs)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<int>(n_max)), cpp11::unmove(cpp11::as_cpp<bool>(progress))));
  END_CPP11
}
// read.cpp
void melt_tokens_chunked_(cpp11::list sourceSpec, cpp11::environment callback, int chunkSize, cpp11::list tokenizerSpec, cpp11::list colSpecs, cpp11::list locale_, bool progress);
extern "C" SEXP _readr_melt_tokens_chunked_(SEXP sourceSpec, SEXP callback, SEXP chunkSize, SEXP tokenizerSpec, SEXP colSpecs, SEXP locale_, SEXP progress) {
  BEGIN_CPP11
    melt_tokens_chunked_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::environment>(callback)), cpp11::unmove(cpp11::as_cpp<int>(chunkSize)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(colSpecs)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<bool>(progress)));
  return R_NilValue;
  END_CPP11
}
// read.cpp
std::vector<std::string> guess_types_(cpp11::list sourceSpec, cpp11::list tokenizerSpec, cpp11::list locale_, int n);
extern "C" SEXP _readr_guess_types_(SEXP sourceSpec, SEXP tokenizerSpec, SEXP locale_, SEXP n) {
  BEGIN_CPP11
    return cpp11::as_sexp(guess_types_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(tokenizerSpec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<int>(n))));
  END_CPP11
}
// TokenizerFwf.cpp
cpp11::list whitespaceColumns(cpp11::list sourceSpec, int n, std::string comment);
extern "C" SEXP _readr_whitespaceColumns(SEXP sourceSpec, SEXP n, SEXP comment) {
  BEGIN_CPP11
    return cpp11::as_sexp(whitespaceColumns(cpp11::unmove(cpp11::as_cpp<cpp11::list>(sourceSpec)), cpp11::unmove(cpp11::as_cpp<int>(n)), cpp11::unmove(cpp11::as_cpp<std::string>(comment))));
  END_CPP11
}
// type_convert.cpp
cpp11::sexp type_convert_col(cpp11::strings x, cpp11::list spec, cpp11::list locale_, int col, const std::vector<std::string>& na, bool trim_ws);
extern "C" SEXP _readr_type_convert_col(SEXP x, SEXP spec, SEXP locale_, SEXP col, SEXP na, SEXP trim_ws) {
  BEGIN_CPP11
    return cpp11::as_sexp(type_convert_col(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(x)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(spec)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(locale_)), cpp11::unmove(cpp11::as_cpp<int>(col)), cpp11::unmove(cpp11::as_cpp<const std::vector<std::string>&>(na)), cpp11::unmove(cpp11::as_cpp<bool>(trim_ws))));
  END_CPP11
}
// write_delim.cpp
std::string stream_delim_(const cpp11::list& df, cpp11::sexp connection, char delim, const std::string& na, bool col_names, bool bom, int quote_escape, const char* eol);
extern "C" SEXP _readr_stream_delim_(SEXP df, SEXP connection, SEXP delim, SEXP na, SEXP col_names, SEXP bom, SEXP quote_escape, SEXP eol) {
  BEGIN_CPP11
    return cpp11::as_sexp(stream_delim_(cpp11::unmove(cpp11::as_cpp<const cpp11::list&>(df)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(connection)), cpp11::unmove(cpp11::as_cpp<char>(delim)), cpp11::unmove(cpp11::as_cpp<const std::string&>(na)), cpp11::unmove(cpp11::as_cpp<bool>(col_names)), cpp11::unmove(cpp11::as_cpp<bool>(bom)), cpp11::unmove(cpp11::as_cpp<int>(quote_escape)), cpp11::unmove(cpp11::as_cpp<const char*>(eol))));
  END_CPP11
}
// write.cpp
void write_lines_(cpp11::strings lines, cpp11::sexp connection, const std::string& na, const std::string& sep);
extern "C" SEXP _readr_write_lines_(SEXP lines, SEXP connection, SEXP na, SEXP sep) {
  BEGIN_CPP11
    write_lines_(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(lines)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(connection)), cpp11::unmove(cpp11::as_cpp<const std::string&>(na)), cpp11::unmove(cpp11::as_cpp<const std::string&>(sep)));
  return R_NilValue;
  END_CPP11
}
// write.cpp
void write_lines_raw_(cpp11::list x, cpp11::sexp connection, const std::string& sep);
extern "C" SEXP _readr_write_lines_raw_(SEXP x, SEXP connection, SEXP sep) {
  BEGIN_CPP11
    write_lines_raw_(cpp11::unmove(cpp11::as_cpp<cpp11::list>(x)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(connection)), cpp11::unmove(cpp11::as_cpp<const std::string&>(sep)));
  return R_NilValue;
  END_CPP11
}
// write.cpp
void write_file_(std::string x, cpp11::sexp connection);
extern "C" SEXP _readr_write_file_(SEXP x, SEXP connection) {
  BEGIN_CPP11
    write_file_(cpp11::unmove(cpp11::as_cpp<std::string>(x)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(connection)));
  return R_NilValue;
  END_CPP11
}
// write.cpp
void write_file_raw_(cpp11::raws x, cpp11::sexp connection);
extern "C" SEXP _readr_write_file_raw_(SEXP x, SEXP connection) {
  BEGIN_CPP11
    write_file_raw_(cpp11::unmove(cpp11::as_cpp<cpp11::raws>(x)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(connection)));
  return R_NilValue;
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _readr_collectorGuess(SEXP, SEXP, SEXP);
extern SEXP _readr_count_fields_(SEXP, SEXP, SEXP);
extern SEXP _readr_dim_tokens_(SEXP, SEXP);
extern SEXP _readr_guess_header_(SEXP, SEXP, SEXP);
extern SEXP _readr_guess_types_(SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_melt_tokens_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_melt_tokens_chunked_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_parse_vector_(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_read_connection_(SEXP, SEXP, SEXP);
extern SEXP _readr_read_file_(SEXP, SEXP);
extern SEXP _readr_read_file_raw_(SEXP);
extern SEXP _readr_read_lines_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_read_lines_chunked_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_read_lines_raw_(SEXP, SEXP, SEXP);
extern SEXP _readr_read_lines_raw_chunked_(SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_read_tokens_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_read_tokens_chunked_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_stream_delim_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_tokenize_(SEXP, SEXP, SEXP);
extern SEXP _readr_type_convert_col(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_utctime(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_whitespaceColumns(SEXP, SEXP, SEXP);
extern SEXP _readr_write_file_(SEXP, SEXP);
extern SEXP _readr_write_file_raw_(SEXP, SEXP);
extern SEXP _readr_write_lines_(SEXP, SEXP, SEXP, SEXP);
extern SEXP _readr_write_lines_raw_(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_readr_collectorGuess",          (DL_FUNC) &_readr_collectorGuess,          3},
    {"_readr_count_fields_",           (DL_FUNC) &_readr_count_fields_,           3},
    {"_readr_dim_tokens_",             (DL_FUNC) &_readr_dim_tokens_,             2},
    {"_readr_guess_header_",           (DL_FUNC) &_readr_guess_header_,           3},
    {"_readr_guess_types_",            (DL_FUNC) &_readr_guess_types_,            4},
    {"_readr_melt_tokens_",            (DL_FUNC) &_readr_melt_tokens_,            6},
    {"_readr_melt_tokens_chunked_",    (DL_FUNC) &_readr_melt_tokens_chunked_,    7},
    {"_readr_parse_vector_",           (DL_FUNC) &_readr_parse_vector_,           5},
    {"_readr_read_connection_",        (DL_FUNC) &_readr_read_connection_,        3},
    {"_readr_read_file_",              (DL_FUNC) &_readr_read_file_,              2},
    {"_readr_read_file_raw_",          (DL_FUNC) &_readr_read_file_raw_,          1},
    {"_readr_read_lines_",             (DL_FUNC) &_readr_read_lines_,             6},
    {"_readr_read_lines_chunked_",     (DL_FUNC) &_readr_read_lines_chunked_,     7},
    {"_readr_read_lines_raw_",         (DL_FUNC) &_readr_read_lines_raw_,         3},
    {"_readr_read_lines_raw_chunked_", (DL_FUNC) &_readr_read_lines_raw_chunked_, 4},
    {"_readr_read_tokens_",            (DL_FUNC) &_readr_read_tokens_,            7},
    {"_readr_read_tokens_chunked_",    (DL_FUNC) &_readr_read_tokens_chunked_,    8},
    {"_readr_stream_delim_",           (DL_FUNC) &_readr_stream_delim_,           8},
    {"_readr_tokenize_",               (DL_FUNC) &_readr_tokenize_,               3},
    {"_readr_type_convert_col",        (DL_FUNC) &_readr_type_convert_col,        6},
    {"_readr_utctime",                 (DL_FUNC) &_readr_utctime,                 7},
    {"_readr_whitespaceColumns",       (DL_FUNC) &_readr_whitespaceColumns,       3},
    {"_readr_write_file_",             (DL_FUNC) &_readr_write_file_,             2},
    {"_readr_write_file_raw_",         (DL_FUNC) &_readr_write_file_raw_,         2},
    {"_readr_write_lines_",            (DL_FUNC) &_readr_write_lines_,            4},
    {"_readr_write_lines_raw_",        (DL_FUNC) &_readr_write_lines_raw_,        3},
    {NULL, NULL, 0}
};
}



extern "C" void R_init_readr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  
}

