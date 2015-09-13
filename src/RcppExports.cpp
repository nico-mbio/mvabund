// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "mvabund_types.h"
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// RtoAnovaCpp
List RtoAnovaCpp(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& isXvarIn, Rcpp::Nullable<RcppGSL::Matrix>& bID);
RcppExport SEXP mvabund_RtoAnovaCpp(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP isXvarInSEXP, SEXP bIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type isXvarIn(isXvarInSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    __result = Rcpp::wrap(RtoAnovaCpp(rparam, Y, X, isXvarIn, bID));
    return __result;
END_RCPP
}
// RtoGlmAnova
List RtoGlmAnova(const List& sparam, const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O, RcppGSL::Matrix& isXvarIn, Rcpp::Nullable<RcppGSL::Matrix>& bID, RcppGSL::Vector& lambda);
RcppExport SEXP mvabund_RtoGlmAnova(SEXP sparamSEXP, SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP isXvarInSEXP, SEXP bIDSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type sparam(sparamSEXP);
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type isXvarIn(isXvarInSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Vector& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(RtoGlmAnova(sparam, rparam, Y, X, O, isXvarIn, bID, lambda));
    return __result;
END_RCPP
}
// RtoGlm
List RtoGlm(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O);
RcppExport SEXP mvabund_RtoGlm(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    __result = Rcpp::wrap(RtoGlm(rparam, Y, X, O));
    return __result;
END_RCPP
}
// RtoGlmSmry
List RtoGlmSmry(const List& sparam, const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O, Rcpp::Nullable<RcppGSL::Matrix>& bID, RcppGSL::Vector& lambda);
RcppExport SEXP mvabund_RtoGlmSmry(SEXP sparamSEXP, SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP bIDSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type sparam(sparamSEXP);
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Vector& >::type lambda(lambdaSEXP);
    __result = Rcpp::wrap(RtoGlmSmry(sparam, rparam, Y, X, O, bID, lambda));
    return __result;
END_RCPP
}
// RtoSmryCpp
List RtoSmryCpp(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, Rcpp::Nullable<RcppGSL::Matrix>& bID);
RcppExport SEXP mvabund_RtoSmryCpp(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP bIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    __result = Rcpp::wrap(RtoSmryCpp(rparam, Y, X, bID));
    return __result;
END_RCPP
}
