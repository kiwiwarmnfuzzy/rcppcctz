// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppCCTZ_types.h"
#include <Rcpp.h>


using namespace Rcpp;

// example0
void example0();
RcppExport SEXP _RcppCCTZ_example0() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example0();
    return R_NilValue;
END_RCPP
}
// helloMoon
Rcpp::CharacterVector helloMoon(bool verbose);
RcppExport SEXP _RcppCCTZ_helloMoon(SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(helloMoon(verbose));
    return rcpp_result_gen;
END_RCPP
}
// example1
void example1();
RcppExport SEXP _RcppCCTZ_example1() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1();
    return R_NilValue;
END_RCPP
}
// example2
int example2();
RcppExport SEXP _RcppCCTZ_example2() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(example2());
    return rcpp_result_gen;
END_RCPP
}
// example3
void example3();
RcppExport SEXP _RcppCCTZ_example3() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example3();
    return R_NilValue;
END_RCPP
}
// example4
void example4();
RcppExport SEXP _RcppCCTZ_example4() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example4();
    return R_NilValue;
END_RCPP
}
// exampleFormat
void exampleFormat();
RcppExport SEXP _RcppCCTZ_exampleFormat() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    exampleFormat();
    return R_NilValue;
END_RCPP
}
// tzDiff
Rcpp::NumericVector tzDiff(const std::string tzfrom, const std::string tzto, const Rcpp::NumericVector& dt, bool verbose);
RcppExport SEXP _RcppCCTZ_tzDiff(SEXP tzfromSEXP, SEXP tztoSEXP, SEXP dtSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type tzfrom(tzfromSEXP);
    Rcpp::traits::input_parameter< const std::string >::type tzto(tztoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(tzDiff(tzfrom, tzto, dt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// toTz
Rcpp::DatetimeVector toTz(Rcpp::DatetimeVector dtv, const std::string tzfrom, const std::string tzto, bool verbose);
RcppExport SEXP _RcppCCTZ_toTz(SEXP dtvSEXP, SEXP tzfromSEXP, SEXP tztoSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DatetimeVector >::type dtv(dtvSEXP);
    Rcpp::traits::input_parameter< const std::string >::type tzfrom(tzfromSEXP);
    Rcpp::traits::input_parameter< const std::string >::type tzto(tztoSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(toTz(dtv, tzfrom, tzto, verbose));
    return rcpp_result_gen;
END_RCPP
}
// formatDatetime
Rcpp::CharacterVector formatDatetime(Rcpp::DatetimeVector dtv, std::string fmt, std::string lcltzstr, std::string tgttzstr);
RcppExport SEXP _RcppCCTZ_formatDatetime(SEXP dtvSEXP, SEXP fmtSEXP, SEXP lcltzstrSEXP, SEXP tgttzstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DatetimeVector >::type dtv(dtvSEXP);
    Rcpp::traits::input_parameter< std::string >::type fmt(fmtSEXP);
    Rcpp::traits::input_parameter< std::string >::type lcltzstr(lcltzstrSEXP);
    Rcpp::traits::input_parameter< std::string >::type tgttzstr(tgttzstrSEXP);
    rcpp_result_gen = Rcpp::wrap(formatDatetime(dtv, fmt, lcltzstr, tgttzstr));
    return rcpp_result_gen;
END_RCPP
}
// parseDatetime
Rcpp::DatetimeVector parseDatetime(Rcpp::CharacterVector svec, std::string fmt, std::string tzstr);
RcppExport SEXP _RcppCCTZ_parseDatetime(SEXP svecSEXP, SEXP fmtSEXP, SEXP tzstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< std::string >::type fmt(fmtSEXP);
    Rcpp::traits::input_parameter< std::string >::type tzstr(tzstrSEXP);
    rcpp_result_gen = Rcpp::wrap(parseDatetime(svec, fmt, tzstr));
    return rcpp_result_gen;
END_RCPP
}
// formatDouble
Rcpp::CharacterVector formatDouble(Rcpp::NumericVector secv, Rcpp::NumericVector nanov, std::string fmt, std::string tgttzstr);
RcppExport SEXP _RcppCCTZ_formatDouble(SEXP secvSEXP, SEXP nanovSEXP, SEXP fmtSEXP, SEXP tgttzstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type secv(secvSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nanov(nanovSEXP);
    Rcpp::traits::input_parameter< std::string >::type fmt(fmtSEXP);
    Rcpp::traits::input_parameter< std::string >::type tgttzstr(tgttzstrSEXP);
    rcpp_result_gen = Rcpp::wrap(formatDouble(secv, nanov, fmt, tgttzstr));
    return rcpp_result_gen;
END_RCPP
}
// parseDouble
Rcpp::NumericMatrix parseDouble(Rcpp::CharacterVector svec, std::string fmt, std::string tzstr);
RcppExport SEXP _RcppCCTZ_parseDouble(SEXP svecSEXP, SEXP fmtSEXP, SEXP tzstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type svec(svecSEXP);
    Rcpp::traits::input_parameter< std::string >::type fmt(fmtSEXP);
    Rcpp::traits::input_parameter< std::string >::type tzstr(tzstrSEXP);
    rcpp_result_gen = Rcpp::wrap(parseDouble(svec, fmt, tzstr));
    return rcpp_result_gen;
END_RCPP
}
// now
void now();
RcppExport SEXP _RcppCCTZ_now() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    now();
    return R_NilValue;
END_RCPP
}



static const R_CallMethodDef CallEntries[] = {
    {"_RcppCCTZ_example0", (DL_FUNC) &_RcppCCTZ_example0, 0},
    {"_RcppCCTZ_helloMoon", (DL_FUNC) &_RcppCCTZ_helloMoon, 1},
    {"_RcppCCTZ_example1", (DL_FUNC) &_RcppCCTZ_example1, 0},
    {"_RcppCCTZ_example2", (DL_FUNC) &_RcppCCTZ_example2, 0},
    {"_RcppCCTZ_example3", (DL_FUNC) &_RcppCCTZ_example3, 0},
    {"_RcppCCTZ_example4", (DL_FUNC) &_RcppCCTZ_example4, 0},
    {"_RcppCCTZ_exampleFormat", (DL_FUNC) &_RcppCCTZ_exampleFormat, 0},
    {"_RcppCCTZ_tzDiff", (DL_FUNC) &_RcppCCTZ_tzDiff, 4},
    {"_RcppCCTZ_toTz", (DL_FUNC) &_RcppCCTZ_toTz, 4},
    {"_RcppCCTZ_formatDatetime", (DL_FUNC) &_RcppCCTZ_formatDatetime, 4},
    {"_RcppCCTZ_parseDatetime", (DL_FUNC) &_RcppCCTZ_parseDatetime, 3},
    {"_RcppCCTZ_formatDouble", (DL_FUNC) &_RcppCCTZ_formatDouble, 4},
    {"_RcppCCTZ_parseDouble", (DL_FUNC) &_RcppCCTZ_parseDouble, 3},
    {"_RcppCCTZ_now", (DL_FUNC) &_RcppCCTZ_now, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppCCTZ(DllInfo *dll) {
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_getOffset", (DL_FUNC) &_RcppCCTZ_getOffset);
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_convertToCivilSecond", (DL_FUNC) &_RcppCCTZ_convertToCivilSecond);
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_convertToTimePoint", (DL_FUNC) &_RcppCCTZ_convertToTimePoint);
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_getOffset_nothrow", (DL_FUNC) &_RcppCCTZ_getOffset_nothrow);
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_convertToCivilSecond_nothrow", (DL_FUNC) &_RcppCCTZ_convertToCivilSecond_nothrow);
    R_RegisterCCallable("RcppCCTZ", "_RcppCCTZ_convertToTimePoint_nothrow", (DL_FUNC) &_RcppCCTZ_convertToTimePoint_nothrow);
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
