// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// whmx
int whmx(NumericVector vettore);
RcppExport SEXP GeDS_whmx(SEXP vettoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vettore(vettoreSEXP);
    rcpp_result_gen = Rcpp::wrap(whmx(vettore));
    return rcpp_result_gen;
END_RCPP
}
// Knotnewtest
NumericVector Knotnewtest(NumericVector wht, NumericVector restmp, NumericVector x, NumericVector dcm, NumericVector oldknots, double tol);
RcppExport SEXP GeDS_Knotnewtest(SEXP whtSEXP, SEXP restmpSEXP, SEXP xSEXP, SEXP dcmSEXP, SEXP oldknotsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type wht(whtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type restmp(restmpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dcm(dcmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type oldknots(oldknotsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(Knotnewtest(wht, restmp, x, dcm, oldknots, tol));
    return rcpp_result_gen;
END_RCPP
}
// Knotnew
NumericVector Knotnew(NumericVector wht, NumericVector restmp, NumericVector x, NumericVector dcm, NumericVector oldknots, double tol);
RcppExport SEXP GeDS_Knotnew(SEXP whtSEXP, SEXP restmpSEXP, SEXP xSEXP, SEXP dcmSEXP, SEXP oldknotsSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type wht(whtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type restmp(restmpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dcm(dcmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type oldknots(oldknotsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(Knotnew(wht, restmp, x, dcm, oldknots, tol));
    return rcpp_result_gen;
END_RCPP
}
// makenewknots
NumericVector makenewknots(NumericVector knots, int degree);
RcppExport SEXP GeDS_makenewknots(SEXP knotsSEXP, SEXP degreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type knots(knotsSEXP);
    Rcpp::traits::input_parameter< int >::type degree(degreeSEXP);
    rcpp_result_gen = Rcpp::wrap(makenewknots(knots, degree));
    return rcpp_result_gen;
END_RCPP
}
// makeEpsilonsb
NumericVector makeEpsilonsb(NumericVector data, NumericVector Xs, NumericVector Ys, int degree);
RcppExport SEXP GeDS_makeEpsilonsb(SEXP dataSEXP, SEXP XsSEXP, SEXP YsSEXP, SEXP degreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< int >::type degree(degreeSEXP);
    rcpp_result_gen = Rcpp::wrap(makeEpsilonsb(data, Xs, Ys, degree));
    return rcpp_result_gen;
END_RCPP
}
// makeRatSplines
NumericMatrix makeRatSplines(NumericMatrix matrice, NumericVector h);
RcppExport SEXP GeDS_makeRatSplines(SEXP matriceSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrice(matriceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(makeRatSplines(matrice, h));
    return rcpp_result_gen;
END_RCPP
}
// makeWeights
NumericVector makeWeights(NumericMatrix x);
RcppExport SEXP GeDS_makeWeights(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(makeWeights(x));
    return rcpp_result_gen;
END_RCPP
}
// tensorProd
NumericMatrix tensorProd(NumericMatrix Xmat, NumericMatrix Ymat);
RcppExport SEXP GeDS_tensorProd(SEXP XmatSEXP, SEXP YmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Xmat(XmatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ymat(YmatSEXP);
    rcpp_result_gen = Rcpp::wrap(tensorProd(Xmat, Ymat));
    return rcpp_result_gen;
END_RCPP
}