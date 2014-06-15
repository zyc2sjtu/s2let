// S2LET package
// Copyright (C) 2012
// Boris Leistedt & Jason McEwen

#ifndef S2LET_SYNTHESIS
#define S2LET_SYNTHESIS

#include <complex.h>

/** Harmonic-space wavelet transform **/

void s2let_wav_synthesis_harmonic(
    complex double *flm,
    const complex double *f_wav_lmn,
    const complex double *f_scal_lm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform for real signals **/

void s2let_wav_synthesis_harmonic_real(
    complex double *flm,
    const complex double *f_wav_lmn,
    const complex double *f_scal_lm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Multi-resolution harmonic-space wavelet transform **/

void s2let_wav_synthesis_harmonic_multires(
    complex double *flm,
    const complex double *f_wav_lmn,
    const complex double *f_scal_lm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Multi-resolution harmonic-space wavelet transform for real signals **/

void s2let_wav_synthesis_harmonic_multires_real(
    complex double *flm,
    const complex double *f_wav_lmn,
    const complex double *f_scal_lm,
    const complex double *wav_lm,
    const double *scal_l,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform **/

void s2let_wav_synthesis_lm2wav(
    complex double *flm,
    const complex double *f_wav,
    const complex double *f_scal,
    const s2let_parameters_t *parameters
);

/** Harmonic-space wavelet transform for real signals **/

void s2let_wav_synthesis_lm2wav_real(
    complex double *flm,
    const double *f_wav,
    const double *f_scal,
    const s2let_parameters_t *parameters
);

/** Multi-resolution harmonic-space wavelet transform **/

void s2let_wav_synthesis_lm2wav_multires(
    complex double *flm,
    const complex double *f_wav,
    const complex double *f_scal,
    const s2let_parameters_t *parameters
);

/** Multi-resolution harmonic-space wavelet transform for real signals **/

void s2let_wav_synthesis_lm2wav_multires_real(
    complex double *flm,
    const double *f_wav,
    const double *f_scal,
    const s2let_parameters_t *parameters
);

/** Pixel-space wavelet transform **/

void s2let_wav_synthesis_mw(
    complex double *f,
    const complex double *f_wav,
    const complex double *f_scal,
    const s2let_parameters_t *parameters
);

void s2let_wav_synthesis_mw_real(
    double *f,
    const double *f_wav,
    const double *f_scal,
    const s2let_parameters_t *parameters
);

/** Multi-resolution harmonic-space wavelet transform **/

void s2let_wav_synthesis_mw_multires(
    complex double *f,
    const complex double *f_wav,
    const complex double *f_scal,
    const s2let_parameters_t *parameters
);

void s2let_wav_synthesis_mw_multires_real(
    double *f,
    const double *f_wav,
    const double *f_scal,
    const s2let_parameters_t *parameters
);

#endif
