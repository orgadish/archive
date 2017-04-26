// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// archive_metadata
Rcpp::List archive_metadata(const std::string& path);
RcppExport SEXP archive_archive_metadata(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(archive_metadata(path));
    return rcpp_result_gen;
END_RCPP
}
// archive_filters
Rcpp::IntegerVector archive_filters();
RcppExport SEXP archive_archive_filters() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(archive_filters());
    return rcpp_result_gen;
END_RCPP
}
// archive_formats
Rcpp::IntegerVector archive_formats();
RcppExport SEXP archive_archive_formats() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(archive_formats());
    return rcpp_result_gen;
END_RCPP
}
// archive_extract_
void archive_extract_(const std::string& archive_filename, size_t sz);
RcppExport SEXP archive_archive_extract_(SEXP archive_filenameSEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type archive_filename(archive_filenameSEXP);
    Rcpp::traits::input_parameter< size_t >::type sz(szSEXP);
    archive_extract_(archive_filename, sz);
    return R_NilValue;
END_RCPP
}
// read_file_connection
SEXP read_file_connection(const std::string& filename, size_t sz);
RcppExport SEXP archive_read_file_connection(SEXP filenameSEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< size_t >::type sz(szSEXP);
    rcpp_result_gen = Rcpp::wrap(read_file_connection(filename, sz));
    return rcpp_result_gen;
END_RCPP
}
// read_connection
SEXP read_connection(const std::string& archive_filename, const std::string& filename, size_t sz);
RcppExport SEXP archive_read_connection(SEXP archive_filenameSEXP, SEXP filenameSEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type archive_filename(archive_filenameSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< size_t >::type sz(szSEXP);
    rcpp_result_gen = Rcpp::wrap(read_connection(archive_filename, filename, sz));
    return rcpp_result_gen;
END_RCPP
}
// write_file_connection
SEXP write_file_connection(const std::string& filename, SEXP filters);
RcppExport SEXP archive_write_file_connection(SEXP filenameSEXP, SEXP filtersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type filters(filtersSEXP);
    rcpp_result_gen = Rcpp::wrap(write_file_connection(filename, filters));
    return rcpp_result_gen;
END_RCPP
}
// write_files
SEXP write_files(const std::string& archive_filename, Rcpp::CharacterVector files, int format, Rcpp::NumericVector filter, size_t sz);
RcppExport SEXP archive_write_files(SEXP archive_filenameSEXP, SEXP filesSEXP, SEXP formatSEXP, SEXP filterSEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type archive_filename(archive_filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type files(filesSEXP);
    Rcpp::traits::input_parameter< int >::type format(formatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< size_t >::type sz(szSEXP);
    rcpp_result_gen = Rcpp::wrap(write_files(archive_filename, files, format, filter, sz));
    return rcpp_result_gen;
END_RCPP
}
// write_connection
SEXP write_connection(const std::string& archive_filename, const std::string& filename, int format, Rcpp::NumericVector filter, size_t sz);
RcppExport SEXP archive_write_connection(SEXP archive_filenameSEXP, SEXP filenameSEXP, SEXP formatSEXP, SEXP filterSEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type archive_filename(archive_filenameSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type format(formatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< size_t >::type sz(szSEXP);
    rcpp_result_gen = Rcpp::wrap(write_connection(archive_filename, filename, format, filter, sz));
    return rcpp_result_gen;
END_RCPP
}
