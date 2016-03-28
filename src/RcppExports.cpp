// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cesfitterwrap
RcppExport SEXP cesfitterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP Stype, SEXP seasfreq, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_cesfitterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP StypeSEXP, SEXP seasfreqSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seasfreq(seasfreqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(cesfitterwrap(matvt, matF, matw, yt, vecg, Stype, seasfreq, matxt, matat));
    return __result;
END_RCPP
}
// cesforecasterwrap
RcppExport SEXP cesforecasterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP h, SEXP Stype, SEXP seasfreq, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_cesforecasterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP hSEXP, SEXP StypeSEXP, SEXP seasfreqSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seasfreq(seasfreqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(cesforecasterwrap(matvt, matF, matw, h, Stype, seasfreq, matxt, matat));
    return __result;
END_RCPP
}
// ceserrorerwrap
RcppExport SEXP ceserrorerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP h, SEXP Stype, SEXP seasfreq, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_ceserrorerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP hSEXP, SEXP StypeSEXP, SEXP seasfreqSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seasfreq(seasfreqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(ceserrorerwrap(matvt, matF, matw, yt, h, Stype, seasfreq, matxt, matat));
    return __result;
END_RCPP
}
// cesoptimizerwrap
RcppExport double cesoptimizerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP h, SEXP Stype, SEXP seasfreq, SEXP multisteps, SEXP CFt, SEXP normalizer, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_cesoptimizerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP hSEXP, SEXP StypeSEXP, SEXP seasfreqSEXP, SEXP multistepsSEXP, SEXP CFtSEXP, SEXP normalizerSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seasfreq(seasfreqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type multisteps(multistepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CFt(CFtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type normalizer(normalizerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(cesoptimizerwrap(matvt, matF, matw, yt, vecg, h, Stype, seasfreq, multisteps, CFt, normalizer, matxt, matat));
    return __result;
END_RCPP
}
// ssfitterwrap
RcppExport SEXP ssfitterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP modellags, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_ssfitterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP modellagsSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(ssfitterwrap(matvt, matF, matw, yt, vecg, modellags, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// ssstatetailwrap
RcppExport SEXP ssstatetailwrap(SEXP matvt, SEXP matF, SEXP matat, SEXP matFX, SEXP modellags);
RcppExport SEXP smooth_ssstatetailwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP modellagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    __result = Rcpp::wrap(ssstatetailwrap(matvt, matF, matat, matFX, modellags));
    return __result;
END_RCPP
}
// ssforecasterwrap
RcppExport SEXP ssforecasterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP h, SEXP modellags, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_ssforecasterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP hSEXP, SEXP modellagsSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(ssforecasterwrap(matvt, matF, matw, h, modellags, matxt, matat));
    return __result;
END_RCPP
}
// sserrorerwrap
RcppExport SEXP sserrorerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP h, SEXP modellags, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_sserrorerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP hSEXP, SEXP modellagsSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(sserrorerwrap(matvt, matF, matw, yt, h, modellags, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// ssoptimizerwrap
RcppExport SEXP ssoptimizerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP h, SEXP modellags, SEXP multisteps, SEXP CFt, SEXP normalizer, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_ssoptimizerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP hSEXP, SEXP modellagsSEXP, SEXP multistepsSEXP, SEXP CFtSEXP, SEXP normalizerSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type multisteps(multistepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CFt(CFtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type normalizer(normalizerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(ssoptimizerwrap(matvt, matF, matw, yt, vecg, h, modellags, multisteps, CFt, normalizer, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// initparams
RcppExport SEXP initparams(SEXP Ttype, SEXP Stype, SEXP datafreq, SEXP obsR, SEXP yt, SEXP damped, SEXP phi, SEXP smoothingparameters, SEXP initialstates, SEXP seasonalcoefs);
RcppExport SEXP smooth_initparams(SEXP TtypeSEXP, SEXP StypeSEXP, SEXP datafreqSEXP, SEXP obsRSEXP, SEXP ytSEXP, SEXP dampedSEXP, SEXP phiSEXP, SEXP smoothingparametersSEXP, SEXP initialstatesSEXP, SEXP seasonalcoefsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type datafreq(datafreqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type obsR(obsRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type damped(dampedSEXP);
    Rcpp::traits::input_parameter< SEXP >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type smoothingparameters(smoothingparametersSEXP);
    Rcpp::traits::input_parameter< SEXP >::type initialstates(initialstatesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seasonalcoefs(seasonalcoefsSEXP);
    __result = Rcpp::wrap(initparams(Ttype, Stype, datafreq, obsR, yt, damped, phi, smoothingparameters, initialstates, seasonalcoefs));
    return __result;
END_RCPP
}
// etsmatrices
RcppExport SEXP etsmatrices(SEXP matvt, SEXP vecg, SEXP phi, SEXP Cvalues, SEXP ncomponentsR, SEXP modellags, SEXP Ttype, SEXP Stype, SEXP nexovars, SEXP matat, SEXP estimpersistence, SEXP estimphi, SEXP estiminit, SEXP estiminitseason, SEXP estimxreg);
RcppExport SEXP smooth_etsmatrices(SEXP matvtSEXP, SEXP vecgSEXP, SEXP phiSEXP, SEXP CvaluesSEXP, SEXP ncomponentsRSEXP, SEXP modellagsSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP nexovarsSEXP, SEXP matatSEXP, SEXP estimpersistenceSEXP, SEXP estimphiSEXP, SEXP estiminitSEXP, SEXP estiminitseasonSEXP, SEXP estimxregSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Cvalues(CvaluesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ncomponentsR(ncomponentsRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nexovars(nexovarsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type estimpersistence(estimpersistenceSEXP);
    Rcpp::traits::input_parameter< SEXP >::type estimphi(estimphiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type estiminit(estiminitSEXP);
    Rcpp::traits::input_parameter< SEXP >::type estiminitseason(estiminitseasonSEXP);
    Rcpp::traits::input_parameter< SEXP >::type estimxreg(estimxregSEXP);
    __result = Rcpp::wrap(etsmatrices(matvt, vecg, phi, Cvalues, ncomponentsR, modellags, Ttype, Stype, nexovars, matat, estimpersistence, estimphi, estiminit, estiminitseason, estimxreg));
    return __result;
END_RCPP
}
// fitterwrap
RcppExport SEXP fitterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP modellags, SEXP Etype, SEXP Ttype, SEXP Stype, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_fitterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP modellagsSEXP, SEXP EtypeSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Etype(EtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(fitterwrap(matvt, matF, matw, yt, vecg, modellags, Etype, Ttype, Stype, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// statetailwrap
RcppExport SEXP statetailwrap(SEXP matvt, SEXP matF, SEXP matat, SEXP matFX, SEXP modellags, SEXP Ttype, SEXP Stype);
RcppExport SEXP smooth_statetailwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP modellagsSEXP, SEXP TtypeSEXP, SEXP StypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    __result = Rcpp::wrap(statetailwrap(matvt, matF, matat, matFX, modellags, Ttype, Stype));
    return __result;
END_RCPP
}
// forecasterwrap
RcppExport SEXP forecasterwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP h, SEXP Ttype, SEXP Stype, SEXP modellags, SEXP matxt, SEXP matat);
RcppExport SEXP smooth_forecasterwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP hSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP modellagsSEXP, SEXP matxtSEXP, SEXP matatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    __result = Rcpp::wrap(forecasterwrap(matvt, matF, matw, h, Ttype, Stype, modellags, matxt, matat));
    return __result;
END_RCPP
}
// errorerwrap
RcppExport SEXP errorerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP h, SEXP Etype, SEXP Ttype, SEXP Stype, SEXP modellags, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_errorerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP hSEXP, SEXP EtypeSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP modellagsSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Etype(EtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(errorerwrap(matvt, matF, matw, yt, h, Etype, Ttype, Stype, modellags, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// optimizerwrap
RcppExport SEXP optimizerwrap(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP h, SEXP modellags, SEXP Etype, SEXP Ttype, SEXP Stype, SEXP multisteps, SEXP CFt, SEXP normalizer, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX);
RcppExport SEXP smooth_optimizerwrap(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP hSEXP, SEXP modellagsSEXP, SEXP EtypeSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP multistepsSEXP, SEXP CFtSEXP, SEXP normalizerSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Etype(EtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type multisteps(multistepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CFt(CFtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type normalizer(normalizerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    __result = Rcpp::wrap(optimizerwrap(matvt, matF, matw, yt, vecg, h, modellags, Etype, Ttype, Stype, multisteps, CFt, normalizer, matxt, matat, matFX, vecgX));
    return __result;
END_RCPP
}
// costfunc
RcppExport SEXP costfunc(SEXP matvt, SEXP matF, SEXP matw, SEXP yt, SEXP vecg, SEXP h, SEXP modellags, SEXP Etype, SEXP Ttype, SEXP Stype, SEXP multisteps, SEXP CFt, SEXP normalizer, SEXP matxt, SEXP matat, SEXP matFX, SEXP vecgX, SEXP bounds, SEXP phi, SEXP Theta);
RcppExport SEXP smooth_costfunc(SEXP matvtSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP ytSEXP, SEXP vecgSEXP, SEXP hSEXP, SEXP modellagsSEXP, SEXP EtypeSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP multistepsSEXP, SEXP CFtSEXP, SEXP normalizerSEXP, SEXP matxtSEXP, SEXP matatSEXP, SEXP matFXSEXP, SEXP vecgXSEXP, SEXP boundsSEXP, SEXP phiSEXP, SEXP ThetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type h(hSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Etype(EtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type multisteps(multistepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CFt(CFtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type normalizer(normalizerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matxt(matxtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matat(matatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matFX(matFXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecgX(vecgXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type bounds(boundsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Theta(ThetaSEXP);
    __result = Rcpp::wrap(costfunc(matvt, matF, matw, yt, vecg, h, modellags, Etype, Ttype, Stype, multisteps, CFt, normalizer, matxt, matat, matFX, vecgX, bounds, phi, Theta));
    return __result;
END_RCPP
}
// simulateETSwrap
RcppExport SEXP simulateETSwrap(SEXP matvt, SEXP errors, SEXP ot, SEXP matF, SEXP matw, SEXP vecg, SEXP Etype, SEXP Ttype, SEXP Stype, SEXP modellags);
RcppExport SEXP smooth_simulateETSwrap(SEXP matvtSEXP, SEXP errorsSEXP, SEXP otSEXP, SEXP matFSEXP, SEXP matwSEXP, SEXP vecgSEXP, SEXP EtypeSEXP, SEXP TtypeSEXP, SEXP StypeSEXP, SEXP modellagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type matvt(matvtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type errors(errorsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ot(otSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matF(matFSEXP);
    Rcpp::traits::input_parameter< SEXP >::type matw(matwSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vecg(vecgSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Etype(EtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Ttype(TtypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Stype(StypeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type modellags(modellagsSEXP);
    __result = Rcpp::wrap(simulateETSwrap(matvt, errors, ot, matF, matw, vecg, Etype, Ttype, Stype, modellags));
    return __result;
END_RCPP
}
