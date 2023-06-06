/* parmin.f -- translated by f2c (version 20100827).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Common Block Declarations */

struct vnewcb_1_ {
    doublereal vnew[12];
};

#define vnewcb_1 (*(struct vnewcb_1_ *) &vnewcb_)

struct {
    integer ilast, idebug, itrack, ishort, imilne, imodpt, istor, iowr;
} luout_;

#define luout_1 luout_

struct {
    integer ifirst, irun, istand, ifermi, iopmod, iopenv, iopatm, idyn, 
	    illdat, isnu, iscomp, ikur;
} lunum_;

#define lunum_1 lunum_

struct {
    char flast[256], ffirst[256], frun[256], fstand[256], ffermi[256], fdebug[
	    256], ftrack[256], fshort[256], fmilne[256], fmodpt[256], fstor[
	    256], fpmod[256], fpenv[256], fpatm[256], fdyn[256], flldat[256], 
	    fsnu[256], fscomp[256], fkur[256], fmhd1[256], fmhd2[256], fmhd3[
	    256], fmhd4[256], fmhd5[256], fmhd6[256], fmhd7[256], fmhd8[256];
} lufnm_;

#define lufnm_1 lufnm_

struct {
    char fmonte1[256], fmonte2[256];
    integer imonte1, imonte2;
} iomonte_;

#define iomonte_1 iomonte_

struct {
    char descrip[512];
} desc_;

#define desc_1 desc_

struct ccout_1_ {
    logical lscrib, lpshll, lchemo, lconzo, ljout, lprtin, lpenv;
};

#define ccout_1 (*(struct ccout_1_ *) &ccout_)

struct ccout1_1_ {
    integer npenv, nprt1, nprt2, nprtpt, npoint;
};

#define ccout1_1 (*(struct ccout1_1_ *) &ccout1_)

struct ccout2_1_ {
    logical ldebug, lcorr, lmilne, ltrack, lstore, lstpch;
    integer npunch;
};

#define ccout2_1 (*(struct ccout2_1_ *) &ccout2_)

struct cenv_1_ {
    doublereal tridt, tridl, senv0;
    logical lsenv0, lnew0;
};

#define cenv_1 (*(struct cenv_1_ *) &cenv_)

struct ckind_1_ {
    doublereal rescal[200]	/* was [4][50] */;
    integer nmodls[50], iresca[50];
    logical lfirst[50];
    integer numrun;
};

#define ckind_1 (*(struct ckind_1_ *) &ckind_)

struct {
    doublereal xenv, zenv, zenvm, amuenv, fxenv[12], xnew, znew, stotal, senv;
} comp_;

#define comp_1 comp_

struct const_1_ {
    doublereal clsun, clsunl, clnsun, cmsun, cmsunl, crsun, crsunl, cmbol;
};

#define const_1 (*(struct const_1_ *) &const_)

struct const3_1_ {
    doublereal cdelrl, cmixl, cmixl2, cmixl3, clndp, csecyr;
};

#define const3_1 (*(struct const3_1_ *) &const3_)

struct ctlim_1_ {
    doublereal atime[14], tcut[5], tscut, tenv0, tenv1, tenv, tgcut;
};

#define ctlim_1 (*(struct ctlim_1_ *) &ctlim_)

struct ct2_1_ {
    doublereal dtwind;
};

#define ct2_1 (*(struct ct2_1_ *) &ct2_)

struct ct3_1_ {
    logical lptime;
};

#define ct3_1 (*(struct ct3_1_ *) &ct3_)

struct ctol_1_ {
    doublereal htoler[10]	/* was [5][2] */, fcorr0, fcorri, fcorr, 
	    hpttol[12];
    integer niter1, niter2, niter3;
};

#define ctol_1 (*(struct ctol_1_ *) &ctol_)

struct cwind_1_ {
    doublereal wmax, exmd, exw, exr, exm, factor;
    logical ljdot0;
};

#define cwind_1 (*(struct cwind_1_ *) &cwind_)

struct difus_1_ {
    doublereal dtdif, djok;
    integer itdif1, itdif2;
};

#define difus_1 (*(struct difus_1_ *) &difus_)

struct dpmix_1_ {
    doublereal dpenv, alphac, alphae, alpham;
    integer iov1, iov2, iovim;
    logical lovstc, lovste, lovstm, lsemic, ladov;
};

#define dpmix_1 (*(struct dpmix_1_ *) &dpmix_)

struct envgen_1_ {
    doublereal atmstp, envstp;
    logical lenvg;
};

#define envgen_1 (*(struct envgen_1_ *) &envgen_)

struct flag_1_ {
    logical lexcom;
};

#define flag_1 (*(struct flag_1_ *) &flag_)

struct heflsh_1_ {
    logical lkuthe;
};

#define heflsh_1 (*(struct heflsh_1_ *) &heflsh_)

struct intatm_1_ {
    doublereal atmerr, atmd0, atmbeg, atmmin, atmmax;
};

#define intatm_1 (*(struct intatm_1_ *) &intatm_)

struct intenv_1_ {
    doublereal enverr, envbeg, envmin, envmax;
};

#define intenv_1 (*(struct intenv_1_ *) &intenv_)

struct intpar_1_ {
    doublereal stolr0;
    integer imax, nuse;
};

#define intpar_1 (*(struct intpar_1_ *) &intpar_)

struct label_1_ {
    doublereal xenv0, zenv0;
};

#define label_1 (*(struct label_1_ *) &label_)

struct newcmp_1_ {
    doublereal xnewcp;
    integer inewcp;
    logical lnewcp, lrel;
    char anewcp[3];
};

#define newcmp_1 (*(struct newcmp_1_ *) &newcmp_)

struct optab_1_ {
    doublereal optol, zsi;
    integer idt, idd[4];
};

#define optab_1 (*(struct optab_1_ *) &optab_)

struct rot_1_ {
    doublereal wnew, walpcz, acfpft;
    integer itfp1, itfp2;
    logical lrot, linstb, lwnew;
};

#define rot_1 (*(struct rot_1_ *) &rot_)

struct sett_1_ {
    doublereal endage[50], setdt[50];
    logical lendag[50], lsetdt[50];
};

#define sett_1 (*(struct sett_1_ *) &sett_)

struct vmult_1_ {
    doublereal fw, fc, fo, fes, fgsf, fmu, fss, rcrit;
};

#define vmult_1 (*(struct vmult_1_ *) &vmult_)

struct debhu_1_ {
    doublereal cdh, etadh0, etadh1, zdh[18], xxdh, yydh, zzdh, dhnue[18];
    logical ldh;
};

#define debhu_1 (*(struct debhu_1_ *) &debhu_)

struct vmult2_1_ {
    doublereal fesc, fssc, fgsfc;
    integer ies, igsf, imu;
};

#define vmult2_1 (*(struct vmult2_1_ *) &vmult2_)

struct gravst_1_ {
    doublereal grtol;
    integer ilambda, niter_gs__;
    logical ldify;
};

#define gravst_1 (*(struct gravst_1_ *) &gravst_)

struct neweng_1_ {
    integer niter4;
    logical lnews, lsnu;
};

#define neweng_1 (*(struct neweng_1_ *) &neweng_)

struct burtol_1_ {
    doublereal cmin, abstol, reltol;
    integer kemmax;
};

#define burtol_1 (*(struct burtol_1_ *) &burtol_)

struct {
    char fliv95[256];
    integer iliv95;
} lopal95_;

#define lopal95_1 lopal95_

struct gravs2_1_ {
    doublereal dt_gs__, xmin, ymin;
    logical lthoulfit;
};

#define gravs2_1 (*(struct gravs2_1_ *) &gravs2_)

struct gravs3_1_ {
    doublereal fgry, fgrz;
    logical lthoul, ldifz;
};

#define gravs3_1 (*(struct gravs3_1_ *) &gravs3_)

struct pulse_1_ {
    doublereal xmsol;
    logical lpulse;
    integer ipver;
};

#define pulse_1 (*(struct pulse_1_ *) &pulse_)

struct po_1_ {
    doublereal poa, pob, poc, pomax;
    logical lpout;
};

#define po_1 (*(struct po_1_ *) &po_)

struct track_1_ {
    integer itrver;
};

#define track_1 (*(struct track_1_ *) &track_)

struct atmos_1_ {
    doublereal hras;
    integer kttau;
};

#define atmos_1 (*(struct atmos_1_ *) &atmos_)

struct mhd_1_ {
    logical lmhd;
    integer iomhd1, iomhd2, iomhd3, iomhd4, iomhd5, iomhd6, iomhd7, iomhd8;
};

#define mhd_1 (*(struct mhd_1_ *) &mhd_)

struct core_1_ {
    logical lcore;
    integer mcore;
    doublereal fcore;
};

#define core_1 (*(struct core_1_ *) &core_)

struct nwlaol_1_ {
    doublereal olaol[64896]	/* was [12][104][52] */, oxa[12], ot[52], 
	    orho[104], tollaol;
    integer iolaol, numofxyz, numrho, numt;
    logical llaol, lpurez;
    integer iopurez;
    char flaol[256], fpurez[256];
};

#define nwlaol_1 (*(struct nwlaol_1_ *) &nwlaol_)

struct chrone_1_ {
    logical lrwsh, liso;
    integer iiso;
    char fiso[256];
};

#define chrone_1 (*(struct chrone_1_ *) &chrone_)

struct newxym_1_ {
    doublereal xenv0a[50], zenv0a[50], cmixla[50];
    logical lsenv0a[50];
    doublereal senv0a[50];
};

#define newxym_1 (*(struct newxym_1_ *) &newxym_)

struct {
    doublereal atmpl[627]	/* was [57][11] */, atmtl[57], atmgl[11], 
	    atmz;
    integer ioatm;
    char fatm[256];
} atmos2_;

#define atmos2_1 atmos2_

struct nuloss_1_ {
    logical lnulos1;
    doublereal dsnudt, dsnudd;
};

#define nuloss_1 (*(struct nuloss_1_ *) &nuloss_)

struct cals2_1_ {
    doublereal toll, tolr;
    logical lcals;
};

#define cals2_1 (*(struct cals2_1_ *) &cals2_)

struct zramp_1_ {
    doublereal rsclzc[50], rsclzm1[50], rsclzm2[50];
    integer iolaol2, ioopal2, nk;
    logical lzramp;
    char flaol2[256], fopal2[256];
};

#define zramp_1 (*(struct zramp_1_ *) &zramp_)

struct calstar_1_ {
    doublereal xls, xlstol, steff, sr, bli, alri, ager, blr, blrp, agei;
    logical lstar, lteff, lpassr, lcalst;
};

#define calstar_1 (*(struct calstar_1_ *) &calstar_)

struct opaleos_1_ {
    char fopale[256];
    logical lopale;
    integer iopale;
    char fopale01[256];
    logical lopale01;
    char fopale06[256];
    logical lopale06, lnumderiv;
};

#define opaleos_1 (*(struct opaleos_1_ *) &opaleos_)

struct newopac_1_ {
    doublereal zlaol1, zlaol2, zopal1, zopal2, zopal951, zalex1, zkur1, zkur2,
	     tmolmin, tmolmax;
    logical lalex06, llaol89, lopal92, lopal95, lkur90, lalex95, l2z;
};

#define newopac_1 (*(struct newopac_1_ *) &newopac_)

struct miscopac_1_ {
    integer ikur2;
    char fkur2[256];
    integer icondopacp;
    char fcondopacp[256];
    logical lcondopacp;
};

#define miscopac_1 (*(struct miscopac_1_ *) &miscopac_)

struct alexo_1_ {
    char opecalex[1792];
    integer ialxo;
};

#define alexo_1 (*(struct alexo_1_ *) &alexo_)

struct {
    char falex06[256];
    integer ialex06;
} alex06_;

#define alex06_1 alex06_

struct alexmix_1_ {
    doublereal xalex, zalex;
};

#define alexmix_1 (*(struct alexmix_1_ *) &alexmix_)

struct varfc_1_ {
    doublereal vfc[5000];
    logical lvfc, ldifad;
};

#define varfc_1 (*(struct varfc_1_ *) &varfc_)

struct notran_1_ {
    logical lnoj;
};

#define notran_1 (*(struct notran_1_ *) &notran_)

struct cross_1_ {
    doublereal sstandard[17];
};

#define cross_1 (*(struct cross_1_ *) &cross_)

struct monte_1_ {
    logical lmonte;
    integer imbeg, imend;
};

#define monte_1 (*(struct monte_1_ *) &monte_)

struct scveos_1_ {
    doublereal tlogx[63], tablex[57456]	/* was [63][76][12] */, tabley[57456]	
	    /* was [63][76][12] */, smix[4788]	/* was [63][76] */, tablez[
	    62244]	/* was [63][76][13] */, tablenv[57456]	/* was [63][
	    76][12] */;
    integer nptsx[63];
    logical lscv;
    integer idtt, idp;
};

#define scveos_1 (*(struct scveos_1_ *) &scveos_)

struct {
    char fscvh[256], fscvhe[256], fscvz[256];
    integer iscvh, iscvhe, iscvz;
} scv2_;

#define scv2_1 scv2_

struct {
    doublereal alatm_feh__, alatm_alpha__;
    logical laltptau100;
    integer ioatma;
} alatm03_;

#define alatm03_1 alatm03_

struct {
    doublereal dummy1, dummy2;
    char fallard[256];
    doublereal dummy3, dummy4;
} alatm04_;

#define alatm04_1 alatm04_

struct disk_1_ {
    doublereal sage, tdisk, pdisk;
    logical ldisk;
};

#define disk_1 (*(struct disk_1_ *) &disk_)

struct weak_1_ {
    doublereal weakscreening;
};

#define weak_1 (*(struct weak_1_ *) &weak_)

struct sbrot_1_ {
    logical lsolid;
};

#define sbrot_1 (*(struct sbrot_1_ *) &sbrot_)

struct masschg_1_ {
    doublereal dmdt0, fczdmdt, ftotdmdt, compacc[15], creim;
    logical lreimer, lmdot;
};

#define masschg_1 (*(struct masschg_1_ *) &masschg_)

/* Initialized data */

struct {
    doublereal e_1[12];
    } vnewcb_ = { .001999, .003238, .037573, .071794, .04052, .173285, 0., 
	    .482273, .053152, .005379, .098668, 0. };

struct {
    doublereal e_1[2];
    integer fill_2[3];
    logical e_3;
    } cenv_ = { .01, .08, {0}, FALSE_ };

struct {
    doublereal fill_1[200];
    integer e_2[50];
    integer fill_3[50];
    logical e_4[50];
    integer e_5;
    } ckind_ = { {0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	     0, 0, 0, 0, 0, 0, 0, 0, 0, {0}, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, TRUE_, 
	    TRUE_, 1 };

struct {
    doublereal e_1;
    doublereal fill_2[4];
    doublereal e_3;
    doublereal fill_4[2];
    } const_ = { 3.8515e33, {0}, 6.9598e10 };

struct {
    doublereal fill_1[1];
    doublereal e_2;
    doublereal fill_3[4];
    } const3_ = { {0}, 1.4 };

struct {
    doublereal e_1[22];
    doublereal fill_2[1];
    doublereal e_3;
    } ctlim_ = { .001, .02, .5, .02, .3, .0015, .1, .02, .04, .02, .02, .25, 
	    1.5, .25, 6.5, 6.5, 6.82, 7.7, 7.5, 6., 3., 9., {0}, 6.9 };

struct {
    doublereal e_1;
    } ct2_ = { 10. };

struct {
    logical e_1;
    } ct3_ = { TRUE_ };

struct {
    doublereal e_1[12];
    doublereal fill_2[1];
    doublereal e_3[12];
    integer e_4[3];
    } ctol_ = { 6e-5, 4.5e-5, 3e-5, 9e-5, 3e-5, .9, .5, .5, 2., 2.5e-6, .8, 
	    .1, {0}, 1e-8, .08, .05, .05, 1., 1., 0., .05, .02, .05, .05, .1, 
	    2, 20, 2 };

struct {
    doublereal e_1;
    doublereal fill_2[5];
    logical e_3;
    } cwind_ = { 3e-4, {0}, TRUE_ };

struct {
    doublereal e_1[2];
    integer e_2[2];
    } difus_ = { .01, 1e-4, 1, 1 };

struct {
    doublereal e_1[4];
    integer fill_2[3];
    logical e_3[5];
    } dpmix_ = { 1., 0., 0., 0., {0}, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_ }
	    ;

struct {
    doublereal e_1[2];
    logical e_2;
    } envgen_ = { .5, .5, FALSE_ };

struct {
    logical e_1;
    } flag_ = { FALSE_ };

struct {
    logical e_1;
    } heflsh_ = { FALSE_ };

struct {
    doublereal e_1[5];
    } intatm_ = { 3e-4, 1e-10, .1, .1, .5 };

struct {
    doublereal e_1[4];
    } intenv_ = { 3e-4, .1, .1, .5 };

struct {
    doublereal e_1;
    integer e_2[2];
    } intpar_ = { .001, 11, 7 };

struct {
    doublereal e_1[2];
    } label_ = { .7, .02 };

struct {
    doublereal e_1;
    integer fill_2[1];
    logical e_3;
    integer fill_4[1];
    char e_5[3];
    } newcmp_ = { 13., {0}, FALSE_, {0}, "   " };

struct {
    doublereal e_1[2];
    integer fill_2[5];
    } optab_ = { 1e-8, 0. };

struct {
    doublereal e_1[3];
    integer e_2[2];
    logical e_3[3];
    } rot_ = { 0., 0., 1e-36, 5, 20, FALSE_, FALSE_, FALSE_ };

struct {
    doublereal e_1[100];
    doublereal fill_2[50];
    } sett_ = { 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 
	    0., 0., 0., 0., 0. };

struct {
    doublereal e_1[8];
    } vmult_ = { 1., 1., 1., 1., 1., 1., 1., 1e3 };

struct {
    doublereal fill_1[1];
    doublereal e_2[2];
    doublereal fill_3[39];
    logical e_4;
    } debhu_ = { {0}, -1., 1., {0}, FALSE_ };

struct {
    doublereal e_1[3];
    integer e_2[3];
    } vmult2_ = { 1., 1., 1., 1, 1, 1 };

struct {
    doublereal e_1;
    integer e_2[2];
    logical e_3;
    } gravst_ = { 1e-8, 1, 10, FALSE_ };

struct {
    integer e_1;
    logical e_2[2];
    } neweng_ = { 0, FALSE_, FALSE_ };

struct {
    doublereal e_1[3];
    integer e_2;
    } burtol_ = { 1e-20, 1e-5, 1e-4, 50 };

struct {
    doublereal e_1[3];
    logical e_2;
    } gravs2_ = { .1, .001, .001, FALSE_ };

struct {
    doublereal e_1[2];
    logical e_2[2];
    } gravs3_ = { 1., 1., FALSE_, FALSE_ };

struct {
    doublereal fill_1[1];
    logical e_2;
    integer e_3;
    } pulse_ = { {0}, FALSE_, 1 };

struct {
    doublereal e_1[4];
    logical e_2;
    } po_ = { 1., 10., 0., .1, FALSE_ };

struct {
    integer e_1;
    } track_ = { 1 };

struct {
    doublereal fill_1[1];
    integer e_2;
    } atmos_ = { {0}, 0 };

struct {
    logical e_1;
    integer fill_2[8];
    } mhd_ = { FALSE_ };

struct {
    logical e_1;
    integer e_2;
    doublereal e_3;
    } core_ = { FALSE_, 0, 1. };

struct {
    doublereal fill_1[65064];
    doublereal e_2;
    doublereal fill_3[2];
    logical e_4[2];
    integer fill_5[129];
    } nwlaol_ = { {0}, 10., {0}, FALSE_, FALSE_ };

struct {
    logical e_1[2];
    integer fill_2[65];
    } chrone_ = { FALSE_, FALSE_ };

struct {
    doublereal fill_1[150];
    logical e_2[50];
    doublereal e_3[50];
    } newxym_ = { {0}, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_,
	     FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, 
	    FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, 
	    FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, 
	    FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, 
	    FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_, 
	    FALSE_, FALSE_, FALSE_, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4, 
	    1.26e-4, 1.26e-4, 1.26e-4, 1.26e-4 };

struct {
    logical e_1;
    integer fill_2[5];
    doublereal e_3;
    } nuloss_ = { FALSE_, {0}, 0. };

struct {
    doublereal e_1[2];
    logical e_2;
    } cals2_ = { 1e-5, 1e-4, FALSE_ };

struct {
    doublereal e_1[150];
    integer fill_2[3];
    logical e_3;
    doublereal fill_4[64];
    } zramp_ = { -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., -1., 
	    -1., -1., -1., -1., -1., -1., -1., -1., {0}, FALSE_ };

struct {
    doublereal fill_1[10];
    integer fill_2[1];
    logical e_3;
    integer fill_4[1];
    logical e_5;
    } calstar_ = { {0}, {0}, FALSE_, {0}, FALSE_ };

struct {
    integer fill_1[64];
    logical e_2;
    integer fill_3[65];
    logical e_4;
    integer fill_5[64];
    logical e_6[2];
    } opaleos_ = { {0}, FALSE_, {0}, FALSE_, {0}, FALSE_, FALSE_ };

struct {
    doublereal fill_1[8];
    doublereal e_2[2];
    logical e_3;
    integer fill_4[6];
    } newopac_ = { {0}, 4., 4.1, FALSE_ };

struct {
    integer fill_1[130];
    logical e_2;
    } miscopac_ = { {0}, FALSE_ };

struct {
    char e_1[1792];
    integer fill_2[1];
    integer e_3;
    } alexo_ = { "OPACALEXANDER.X00                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X01                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X02                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X035                                        "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X05                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X07                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      OPACALEXANDER.X08                                         "
	    "                                                                "
	    "                                                                "
	    "                                                                "
	    "      ", {0}, 0 };

struct {
    doublereal e_1[2];
    } alexmix_ = { .7, .02 };

struct {
    doublereal fill_1[5000];
    logical e_2[2];
    } varfc_ = { {0}, FALSE_, FALSE_ };

struct {
    logical e_1;
    } notran_ = { FALSE_ };

struct {
    doublereal e_1[17];
    } cross_ = { .9828, 1.0485, .9815, .9241, 1.3818, 1.0542, 1., 1., 1., 1., 
	    1., 1., 1., 1., 1.0108, .7819, .2875 };

struct {
    logical e_1;
    integer e_2[2];
    } monte_ = { FALSE_, 1, 1 };

struct {
    doublereal fill_1[239494];
    integer fill_2[1];
    logical e_3;
    integer fill_4[2];
    } scveos_ = { {0}, {0}, FALSE_ };

struct {
    logical e_1[6];
    integer fill_2[1];
    } ccout_ = { TRUE_, FALSE_, FALSE_, FALSE_, FALSE_, FALSE_ };

struct {
    doublereal fill_1[1];
    doublereal e_2[2];
    logical e_3;
    } disk_ = { {0}, 0., 7.2722e-6, FALSE_ };

struct {
    doublereal e_1;
    } weak_ = { .03 };

struct {
    logical e_1;
    } sbrot_ = { FALSE_ };

struct {
    doublereal e_1[19];
    logical e_2[2];
    } masschg_ = { -1e-14, .1, .01, .71668, .265721, .01757, 2.9e-5, .003013, 
	    3.385e-5, 9.346e-4, 0., .008462, 0., 1.696e-5, 0., 2e-9, 2e-9, 
	    3e-11, -4e-13, FALSE_, FALSE_ };

struct {
    integer e_1[5];
    } ccout1_ = { 20, 1, -1, 1, 1 };

struct {
    logical e_1[6];
    integer e_2;
    } ccout2_ = { FALSE_, TRUE_, FALSE_, TRUE_, FALSE_, FALSE_, 50 };


/* Table of constant values */

static integer c__1 = 1;
static doublereal c_b56 = 1.452e9;
static integer c__9 = 9;



/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ */
/* PARMIN */
/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ */
/* Subroutine */ int parmin_(void)
{
    /* Initialized data */

    static doublereal alfa = 1.5;
    static doublereal fk = 1.;
    static integer kindrn[50] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
    static doublereal rsclm[50] = { 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0. };
    static doublereal rsclx[50] = { 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0. };
    static doublereal rsclz[50] = { 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0. };
    static doublereal rsclcm[50] = { 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,
	    0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0. };
    static char aid[3*12] = "HE3" "C12" "C13" "N14" "N15" "O16" "O17" "O18" 
	    "H2 " "LI6" "LI7" "BE9";

    /* Format strings */
    static char fmt_2[] = "(1x,\002ERROR IN SUBROUTINE PARMIN\002/\002SEMI-C"
	    "ONVECTION\002,\002 AND OVERSHOOT FLAGS BOTH TURNED ON\002/\002FL"
	    "AGS LSEMIC\002,l2,\002 OVERSHOOT - CORE,ENVELOPE,INTERMEDIATE"
	    "-\002,3l2/\002RUN STOPPED\002)";
    static char fmt_1[] = "(1x,\002PT TOL\002,12f6.3/1x,\002O.S.ENV\002,f6"
	    ".3,\002 O.S.CORE\002,f6.3,\002 LINSTB \002,l1,\002 LJDOT \002,l1,"
	    "\002 WIND IND.\002,f6.3,\002 FK\002,1pe8.2/1x,\002 FV\002,0pf5.2,"
	    "\002 FC\002,f5.2,\002 COUPLING\002,f6.3,\002 F MU\002,f5.2,\002 "
	    "RCRIT\002,f9.1)";
    static char fmt_20[] = "(1x,\002VARIABLE\002,a4,1x,\002NOT A RECOGNIZED "
	    "ELEMENT\002/1x,\002RESCALING NOT PERFORMED\002)";
    static char fmt_50[] = "(30x,\002RUN DATA VALUES\002/3x,\002LINE  1     "
	    "XENV0     ZENV0       ZSI\002/2x,\002STANDARD       N/A       N/"
	    "A  0.00E+00\002/3x,\002CURRENT\002,1p2e10.0,2x,e8.2)";
    static char fmt_70[] = "(3x,\002LINE  2    LDEBUG     LCORR    NPOINT   "
	    " LMILNE    LTRACK    LSTORE    NPUNCH    LSTPCH\002/2x,\002STAND"
	    "ARD\002,2(9x,\002T\002),6x,\0029999\002,9x,\002F\002,2(9x,\002"
	    "T\002),8x,\00225\002,9x,\002T\002/3x,\002CURRENT\002,2(9x,l1),6x"
	    ",i4,3(9x,l1),6x,i4,9x,l1)";
    static char fmt_90[] = "(3x,\002LINE  3    LSCRIB    LPSHLL    LCONZO   "
	    " LCHEMO\002,5x,\002LJOUT    LPRTIN     NPENV\002/2x,\002STANDAR"
	    "D\002,9x,\002T\002,2(9x,\002F\002),9x,\002T\002,2(9x,\002F\002),"
	    "9x,\0023\002/3x,\002CURRENT\002,6(9x,l1),6x,i4)";
    static char fmt_110[] = "(3x,\002LINE 4     LENVG    ATMSTP    ENVSTP"
	    "\002/2x,\002STANDARD\002,7x,\002N/A\002,6x,\0020.50\002,6x,\0020"
	    ".50\002/3x,\002CURRENT\002,9x,l1,2(4x,f6.3))";
    static char fmt_130[] = "(3x,\002LINE  4  PRT.LONG PRT.SHORT    NPRTP"
	    "T\002/2x,\002STANDARD\002,2(7x,\002N/A\002),9x,\0025\002/3x,\002"
	    "CURRENT\002,3(6x,i4))";
    static char fmt_25[] = "(3x,\002LINE  2    TCUT-  E  TCUT- PP  TCUT-CNO "
	    " TCUT-3A  TCUT- NU TCUT-SAHA     TENV0     TENV1     TGCUT\002/2"
	    "x,\002STANDARD\002,9x,\0026.50\002,6x,\0026.50\002,6x,\0026.8"
	    "2\002,6x,\0027.70\002,6x,\0027.50\002,6x,\0026.00\002,6x,\0023.00"
	    "\002,6x,\0029.00\002,6x,\0026.90\002/3x,\002CURRENT\002,9(5x,f5."
	    "2))";
    static char fmt_35[] = "(3x,\002LINE  3     NIATM    ATMERR    ATMMAX   "
	    "  ATMD0\002,5x,\002NIENV    ENVERR    ENVMAX    ENVMIN\002/2x"
	    ",\002STANDARD\002,9x,\0028\002,2x,\0023.00E-04  5.00E-01  1.00E-"
	    "10\002,8x,\00210  3.00E-04  5.00E-01  2.50E-01\002/3x,\002CURRENT"
	    "\002,10x,3(1pe10.2),10x,3(1pe10.2))";
    static char fmt_45[] = "(3x,\002LINE  4     TRIDT     TRIDL    LSENV0"
	    "\002,5x,\002SENV0\002/2x,\002STANDARD\002,6x,\0020.01\002,6x,"
	    "\0020.08\002,9x,\002F\002,2x,\0021.00E-07\002/3x,\002CURRENT\002"
	    ",2f10.4)";
    static char fmt_55[] = "(3x,\002LINE  5 TOL.RHS-P TOL.RHS-T MIN.COR-P MI"
	    "N.COR-T MIN.COR-R MIN.COR-L MAX.COR-P MAX.COR-T MAX.COR-R MAX.CO"
	    "R-L\002/2x,\002STANDARD  3.00E-05  2.50E-06  6.00E-05  4.50E-05 "
	    " 3.00E-05  9.00E-05  9.00E-01  5.00E-01  5.00E-01  2.00E+00\002/"
	    "3x,\002CURRENT\002,10(2x,1pe8.2))";
    static char fmt_65[] = "(3x,\002LINE  6  D(S)-MIN  D(S)-MAX   FLAG-DX   "
	    "FLAG-DZ    MAXDP MAX DL/LT    MAX DX    MAX DZ\002/2x,\002STANDA"
	    "RD  1.00E-08  8.00E-02  5.00E-02  1.00E+00  5.00E-02  2.00E-02  "
	    "1.00E+00  1.00E+00\002/3x,\002CURRENT\002,8(2x,1pe8.2))";
    static char fmt_75[] = "(3x,\002LINE  7    LNEWCP    ANEWCP      LREL   "
	    " XNEWCP\002/2x,\002STANDARD\002,9x,\002F\002,7x,\002N/A\002,9x"
	    ",\002T\002,7x,\002N/A\002/3x,\002CURRENT\002,9x,l1,7x,a3,9x,l1,1"
	    "pe10.2)";
    static char fmt_85[] = "(3x,\002LINE  8    ACFPFT     ITFP1     ITFP2"
	    "\002/2x,\002STANDARD\002,1x,\0021.000E-20\002,9x,\0022\002,8x"
	    ",\00220\002/3x,\002CURRENT\002,1pe10.3,6x,i4,6x,i4)";
    static char fmt_105[] = "(32x,\002RUN DATA VALUES\002/3x,\002LINE  1    "
	    "NITER1    NITER2    FCORR0    FCORRI\002/2x,\002STANDARD\002,9x"
	    ",\0022\002,8x,\00220\002,6x,\0020.80\002,6x,\0020.10\002/3x,\002"
	    "CURRENT\002,2(6x,i4),2(5x,f5.2))";
    static char fmt_145[] = "(3x,\002LINE  5 XCORE MIN  DEL.XCORE FRAC.XCORE"
	    " DEL.XSHELL\002/2x,\002STANDARD     0.001     0.020     0.500   "
	    "  0.100\002/3x,\002CURRENT\002,4(4x,f6.3))";
    static char fmt_155[] = "(3x,\002LINE  7 DEL.YCORE  FRAC.YCORE DEL.YSH"
	    "ELL\002/2x,\002STANDARD    0.020     0.300    0.0015\002/3x,\002"
	    "CURRENT\002,2(5x,f5.3),4x,f6.4)";
    static char fmt_165[] = "(3x,\002LINE  8    LKUTHE\002/,2x,\002STANDAR"
	    "D\002,9x,\002F\002/3x,\002CURRENT\002,9x,l1)";
    static char fmt_175[] = "(3x,\002LINE  9   CMIXL     DPENV    LOVSTC    "
	    "ALPHAC    LOVSTE    ALPHAE\002/2x,\002STANDARD\002,7x,\002N/A"
	    "\002,6x,\0021.00\002,2(9x,\002F\002,6x,\0020.00\002)/3x,\002CURR"
	    "ENT\002,2(5x,f5.2),2(9x,l1,5x,f5.2))";
    static char fmt_185[] = "(3x,\002LINE 10   LNEW0    LEXCOM\002/2x,\002ST"
	    "ANDARD\002,2(9x,\002F\002)/3x,\002CURRENT\002,2(9x,l1))";
    static char fmt_195[] = "(3x,\002LINE 11      LROT    WALPCZ    LINST"
	    "B\002/2x,\002STANDARD\002,7x,\002N/A\002,6x,\0020.00\002,7x,\002"
	    "N/A\002/3x,\002CURRENT\002,9x,l1,5x,f5.2,9x,l1)";
    static char fmt_197[] = "(\002 USING EDDINGTON T-TAU RELATION.\002)";
    static char fmt_198[] = "(\002 USING KRISHNA-SWAMY T-TAU RELATION.\002)";
    static char fmt_1999[] = "(\002 USING HARVARD-SMITHSONIAN REFERENCE ATMO"
	    "SPHERE\002)";
    static char fmt_1888[] = "(\002 USING KURUCZ ATMOSPHERE TABLE\002)";
    static char fmt_1889[] = "(\002 USING ALLARD ATMOSPHERE TABLE\002)";
    static char fmt_196[] = "(/,\002 CALCULATE PULSATION OUTPUT ON LAST MO"
	    "DEL\002)";
    static char fmt_310[] = "(/,\002 \002,125(\002=\002),/,\002 \002,\002 DE"
	    "SCRIPTION OF RUN: \002,a80,/,\002 \002,9x,\002  \002,8x,\002:"
	    " \002,a80,/,\002 \002,130(\002=\002),/,\002 \002)";
    static char fmt_320[] = "(\002#\002,/,\002#\002,100(\002=\002),/,\002"
	    "#\002,\002 DESCRIPTION OF RUN: \002,a80,/,\002#\002,9x,\002  "
	    "\002,8x,\002: \002,a80,/,\002#\002,100(\002=\002))";
    static char fmt_323[] = "(\002 USING OSCILATORY SPLINE INTERPOLATION IN "
	    "HPOINT\002)";
    static char fmt_200[] = "(/35x,\002RUN CARDS\002/)";
    static char fmt_350[] = "(/1x,\002RUN #\002,i3,\002   EVOLVE \002,i5,"
	    "\002 MODELS, STARTING\002,\002 WITH THE INPUT \"FIRST MODEL\""
	    ".\002)";
    static char fmt_351[] = "(/1x,\002RUN #\002,i3,\002   EVOLVE \002,i5,"
	    "\002 MODELS, STARTING\002,\002 WITH THE PREVIOUS RUN'S LAST MODE"
	    "L.\002)";
    static char fmt_370[] = "(1x,\002EVOLVE TO AGE \002,l1,\002 SET DELT "
	    "\002,l1,\002 FINAL AGE \002,1pe9.2,\002 FIXED TSTEP \002,1pe9.2)";
    static char fmt_450[] = "(/1x,\002RUN #\002,i3,\002   RESCALE THE INPUT "
	    "MODEL: \"FIRST MODEL\".\002)";
    static char fmt_451[] = "(/1x,\002RUN #\002,i3,\002   RESCALE THE PREVIO"
	    "US RUN'S LAST MODEL.\002)";
    static char fmt_452[] = "(1x,\002RELAX RESCALED MODEL\002,i3,\002 TIMES."
	    " RESCALE THE FOLLOW\002,\002ING(0=USE CURRENT VALUE):\002/1x,"
	    "\002MASS \002,f9.6,3x,\002X\002,f9.6,3x,\002Z\002,f9.6,3x,\002CO"
	    "RE MASS\002,f9.6)";
    static char fmt_550[] = "(/1x,\002RUN #\002,i3,\002   RESCALE & EVOLVE T"
	    "HE INPUT MODEL: \"FIRST MODEL\".\002)";

    /* System generated locals */
    integer i__1;
    doublereal d__1;
    olist o__1;
    cllist cl__1;
    alist al__1;

    /* Builtin functions */
    integer f_open(olist *), s_rsne(cilist *), f_clos(cllist *), f_rew(alist *
	    ), s_wsne(cilist *), s_wsfe(cilist *), do_fio(integer *, char *, 
	    ftnlen), e_wsfe(void);
    /* Subroutine */ int s_stop(char *, ftnlen);
    double pow_dd(doublereal *, doublereal *), log(doublereal);
    integer s_cmp(char *, char *, ftnlen, ftnlen), s_wsle(cilist *), do_lio(
	    integer *, integer *, char *, ftnlen), e_wsle(void);

    /* Local variables */
    static integer i__, j;
    static doublereal cc13, cc23, cln;
    static char atmp[3];
    static doublereal zopal952, zalex2;
    static integer ilstbn, istobn, ifstbn, nkind;

    /* Namelist stuff */

    static ftnlen opecalex_dims[] = { 1, 7, 1 };
    static Vardesc opecalex_dv = { "OPECALEX", alexo_1.opecalex, 
	    opecalex_dims, -256 };
    static Vardesc niter_gs___dv = { "NITER_GS", (char *)&gravst_1.niter_gs__,
	     (ftnlen *)0, 3 };
    static Vardesc ftotdmdt_dv = { "FTOTDMDT", (char *)&masschg_1.ftotdmdt, (
	    ftnlen *)0, 5 };
    static Vardesc alatm_feh___dv = { "ALATM_FEH", (char *)&
	    alatm03_1.alatm_feh__, (ftnlen *)0, 5 };
    static ftnlen sstandard_dims[] = { 1, 17, 1 };
    static Vardesc sstandard_dv = { "SSTANDARD", (char *)cross_1.sstandard, 
	    sstandard_dims, 5 };
    static Vardesc lnumderiv_dv = { "LNUMDERIV", (char *)&opaleos_1.lnumderiv,
	     (ftnlen *)0, 8 };
    static Vardesc lthoulfit_dv = { "LTHOULFIT", (char *)&gravs2_1.lthoulfit, 
	    (ftnlen *)0, 8 };
    static Vardesc fc_dv = { "FC", (char *)&vmult_1.fc, (ftnlen *)0, 5 };
    static Vardesc fk_dv = { "FK", (char *)&fk, (ftnlen *)0, 5 };
    static Vardesc fo_dv = { "FO", (char *)&vmult_1.fo, (ftnlen *)0, 5 };
    static Vardesc laltptau100_dv = { "LALTPTAU100", (char *)&
	    alatm03_1.laltptau100, (ftnlen *)0, 8 };
    static Vardesc fw_dv = { "FW", (char *)&vmult_1.fw, (ftnlen *)0, 5 };
    static Vardesc sr_dv = { "SR", (char *)&calstar_1.sr, (ftnlen *)0, 5 };
    static Vardesc fcondopacp_dv = { "FCONDOPACP", miscopac_1.fcondopacp, (
	    ftnlen *)0, -256 };
    static Vardesc lcondopacp_dv = { "LCONDOPACP", (char *)&
	    miscopac_1.lcondopacp, (ftnlen *)0, 8 };
    static Vardesc ldh_dv = { "LDH", (char *)&debhu_1.ldh, (ftnlen *)0, 8 };
    static Vardesc fes_dv = { "FES", (char *)&vmult_1.fes, (ftnlen *)0, 5 };
    static Vardesc poa_dv = { "POA", (char *)&po_1.poa, (ftnlen *)0, 5 };
    static Vardesc ies_dv = { "IES", (char *)&vmult2_1.ies, (ftnlen *)0, 3 };
    static Vardesc pob_dv = { "POB", (char *)&po_1.pob, (ftnlen *)0, 5 };
    static Vardesc poc_dv = { "POC", (char *)&po_1.poc, (ftnlen *)0, 5 };
    static Vardesc fmu_dv = { "FMU", (char *)&vmult_1.fmu, (ftnlen *)0, 5 };
    static Vardesc imu_dv = { "IMU", (char *)&vmult2_1.imu, (ftnlen *)0, 3 };
    static Vardesc fss_dv = { "FSS", (char *)&vmult_1.fss, (ftnlen *)0, 5 };
    static Vardesc alatm_alpha___dv = { "ALATM_ALPHA", (char *)&
	    alatm03_1.alatm_alpha__, (ftnlen *)0, 5 };
    static Vardesc xls_dv = { "XLS", (char *)&calstar_1.xls, (ftnlen *)0, 5 };
    static Vardesc alfa_dv = { "ALFA", (char *)&alfa, (ftnlen *)0, 5 };
    static Vardesc fesc_dv = { "FESC", (char *)&vmult2_1.fesc, (ftnlen *)0, 5 
	    };
    static Vardesc lmhd_dv = { "LMHD", (char *)&mhd_1.lmhd, (ftnlen *)0, 8 };
    static Vardesc fgsf_dv = { "FGSF", (char *)&vmult_1.fgsf, (ftnlen *)0, 5 }
	    ;
    static Vardesc cmin_dv = { "CMIN", (char *)&burtol_1.cmin, (ftnlen *)0, 5 
	    };
    static Vardesc fatm_dv = { "FATM", atmos2_1.fatm, (ftnlen *)0, -256 };
    static Vardesc djok_dv = { "DJOK", (char *)&difus_1.djok, (ftnlen *)0, 5 }
	    ;
    static Vardesc igsf_dv = { "IGSF", (char *)&vmult2_1.igsf, (ftnlen *)0, 3 
	    };
    static Vardesc lvfc_dv = { "LVFC", (char *)&varfc_1.lvfc, (ftnlen *)0, 8 }
	    ;
    static Vardesc imax_dv = { "IMAX", (char *)&intpar_1.imax, (ftnlen *)0, 3 
	    };
    static Vardesc fiso_dv = { "FISO", chrone_1.fiso, (ftnlen *)0, -256 };
    static Vardesc atmp_dv = { "ATMP", atmp, (ftnlen *)0, -3 };
    static Vardesc fdyn_dv = { "FDYN", lufnm_1.fdyn, (ftnlen *)0, -256 };
    static Vardesc fssc_dv = { "FSSC", (char *)&vmult2_1.fssc, (ftnlen *)0, 5 
	    };
    static Vardesc liso_dv = { "LISO", (char *)&chrone_1.liso, (ftnlen *)0, 8 
	    };
    static Vardesc fkur_dv = { "FKUR", lufnm_1.fkur, (ftnlen *)0, -256 };
    static Vardesc fsnu_dv = { "FSNU", lufnm_1.fsnu, (ftnlen *)0, -256 };
    static ftnlen vnew_dims[] = { 1, 12, 1 };
    static Vardesc vnew_dv = { "VNEW", (char *)vnewcb_1.vnew, vnew_dims, 5 };
    static ftnlen tcut_dims[] = { 1, 5, 1 };
    static Vardesc tcut_dv = { "TCUT", (char *)ctlim_1.tcut, tcut_dims, 5 };
    static Vardesc wmax_dv = { "WMAX", (char *)&cwind_1.wmax, (ftnlen *)0, 5 }
	    ;
    static Vardesc nuse_dv = { "NUSE", (char *)&intpar_1.nuse, (ftnlen *)0, 3 
	    };
    static Vardesc wnew_dv = { "WNEW", (char *)&rot_1.wnew, (ftnlen *)0, 5 };
    static Vardesc lrot_dv = { "LROT", (char *)&rot_1.lrot, (ftnlen *)0, 8 };
    static Vardesc fmhd1_dv = { "FMHD1", lufnm_1.fmhd1, (ftnlen *)0, -256 };
    static Vardesc fmhd2_dv = { "FMHD2", lufnm_1.fmhd2, (ftnlen *)0, -256 };
    static Vardesc fmhd3_dv = { "FMHD3", lufnm_1.fmhd3, (ftnlen *)0, -256 };
    static Vardesc fmhd4_dv = { "FMHD4", lufnm_1.fmhd4, (ftnlen *)0, -256 };
    static Vardesc fmhd5_dv = { "FMHD5", lufnm_1.fmhd5, (ftnlen *)0, -256 };
    static Vardesc fmhd6_dv = { "FMHD6", lufnm_1.fmhd6, (ftnlen *)0, -256 };
    static Vardesc fmhd7_dv = { "FMHD7", lufnm_1.fmhd7, (ftnlen *)0, -256 };
    static Vardesc fmhd8_dv = { "FMHD8", lufnm_1.fmhd8, (ftnlen *)0, -256 };
    static Vardesc atmd0_dv = { "ATMD0", (char *)&intatm_1.atmd0, (ftnlen *)0,
	     5 };
    static Vardesc lsnu_dv = { "LSNU", (char *)&neweng_1.lsnu, (ftnlen *)0, 8 
	    };
    static Vardesc xmin_dv = { "XMIN", (char *)&gravs2_1.xmin, (ftnlen *)0, 5 
	    };
    static Vardesc ymin_dv = { "YMIN", (char *)&gravs2_1.ymin, (ftnlen *)0, 5 
	    };
    static Vardesc fgry_dv = { "FGRY", (char *)&gravs3_1.fgry, (ftnlen *)0, 5 
	    };
    static Vardesc fgrz_dv = { "FGRZ", (char *)&gravs3_1.fgrz, (ftnlen *)0, 5 
	    };
    static Vardesc toll_dv = { "TOLL", (char *)&cals2_1.toll, (ftnlen *)0, 5 }
	    ;
    static Vardesc tolr_dv = { "TOLR", (char *)&cals2_1.tolr, (ftnlen *)0, 5 }
	    ;
    static Vardesc itfp1_dv = { "ITFP1", (char *)&rot_1.itfp1, (ftnlen *)0, 3 
	    };
    static Vardesc itfp2_dv = { "ITFP2", (char *)&rot_1.itfp2, (ftnlen *)0, 3 
	    };
    static Vardesc lnew0_dv = { "LNEW0", (char *)&cenv_1.lnew0, (ftnlen *)0, 
	    8 };
    static Vardesc lnoj_dv = { "LNOJ", (char *)&notran_1.lnoj, (ftnlen *)0, 8 
	    };
    static Vardesc lscv_dv = { "LSCV", (char *)&scveos_1.lscv, (ftnlen *)0, 8 
	    };
    static Vardesc fkur2_dv = { "FKUR2", miscopac_1.fkur2, (ftnlen *)0, -256 }
	    ;
    static Vardesc tenv0_dv = { "TENV0", (char *)&ctlim_1.tenv0, (ftnlen *)0, 
	    5 };
    static Vardesc tenv1_dv = { "TENV1", (char *)&ctlim_1.tenv1, (ftnlen *)0, 
	    5 };
    static Vardesc dmdt0_dv = { "DMDT0", (char *)&masschg_1.dmdt0, (ftnlen *)
	    0, 5 };
    static Vardesc nprt1_dv = { "NPRT1", (char *)&ccout1_1.nprt1, (ftnlen *)0,
	     3 };
    static Vardesc nprt2_dv = { "NPRT2", (char *)&ccout1_1.nprt2, (ftnlen *)0,
	     3 };
    static Vardesc zkur1_dv = { "ZKUR1", (char *)&newopac_1.zkur1, (ftnlen *)
	    0, 5 };
    static Vardesc zkur2_dv = { "ZKUR2", (char *)&newopac_1.zkur2, (ftnlen *)
	    0, 5 };
    static Vardesc imbeg_dv = { "IMBEG", (char *)&monte_1.imbeg, (ftnlen *)0, 
	    3 };
    static Vardesc fgsfc_dv = { "FGSFC", (char *)&vmult2_1.fgsfc, (ftnlen *)0,
	     5 };
    static Vardesc dtdif_dv = { "DTDIF", (char *)&difus_1.dtdif, (ftnlen *)0, 
	    5 };
    static Vardesc flaol_dv = { "FLAOL", nwlaol_1.flaol, (ftnlen *)0, -256 };
    static Vardesc fcore_dv = { "FCORE", (char *)&core_1.fcore, (ftnlen *)0, 
	    5 };
    static ftnlen atime_dims[] = { 1, 14, 1 };
    static Vardesc atime_dv = { "ATIME", (char *)ctlim_1.atime, atime_dims, 5 
	    };
    static Vardesc dt_gs___dv = { "DT_GS", (char *)&gravs2_1.dt_gs__, (ftnlen 
	    *)0, 5 };
    static Vardesc lcals_dv = { "LCALS", (char *)&cals2_1.lcals, (ftnlen *)0, 
	    8 };
    static Vardesc lcore_dv = { "LCORE", (char *)&core_1.lcore, (ftnlen *)0, 
	    8 };
    static Vardesc fpmod_dv = { "FPMOD", lufnm_1.fpmod, (ftnlen *)0, -256 };
    static Vardesc fpatm_dv = { "FPATM", lufnm_1.fpatm, (ftnlen *)0, -256 };
    static Vardesc ladov_dv = { "LADOV", (char *)&dpmix_1.ladov, (ftnlen *)0, 
	    8 };
    static Vardesc fscvh_dv = { "FSCVH", scv2_1.fscvh, (ftnlen *)0, -256 };
    static Vardesc flast_dv = { "FLAST", lufnm_1.flast, (ftnlen *)0, -256 };
    static Vardesc fpenv_dv = { "FPENV", lufnm_1.fpenv, (ftnlen *)0, -256 };
    static Vardesc tridl_dv = { "TRIDL", (char *)&cenv_1.tridl, (ftnlen *)0, 
	    5 };
    static ftnlen rsclm_dims[] = { 1, 50, 1 };
    static Vardesc rsclm_dv = { "RSCLM", (char *)rsclm, rsclm_dims, 5 };
    static Vardesc lcorr_dv = { "LCORR", (char *)&ccout2_1.lcorr, (ftnlen *)0,
	     8 };
    static Vardesc dpenv_dv = { "DPENV", (char *)&dpmix_1.dpenv, (ftnlen *)0, 
	    5 };
    static Vardesc clsun_dv = { "CLSUN", (char *)&const_1.clsun, (ftnlen *)0, 
	    5 };
    static Vardesc npenv_dv = { "NPENV", (char *)&ccout1_1.npenv, (ftnlen *)0,
	     3 };
    static Vardesc tridt_dv = { "TRIDT", (char *)&cenv_1.tridt, (ftnlen *)0, 
	    5 };
    static Vardesc crsun_dv = { "CRSUN", (char *)&const_1.crsun, (ftnlen *)0, 
	    5 };
    static ftnlen rsclx_dims[] = { 1, 50, 1 };
    static Vardesc rsclx_dv = { "RSCLX", (char *)rsclx, rsclx_dims, 5 };
    static Vardesc fscvz_dv = { "FSCVZ", scv2_1.fscvz, (ftnlen *)0, -256 };
    static ftnlen rsclz_dims[] = { 1, 50, 1 };
    static Vardesc rsclz_dv = { "RSCLZ", (char *)rsclz, rsclz_dims, 5 };
    static Vardesc fstor_dv = { "FSTOR", lufnm_1.fstor, (ftnlen *)0, -256 };
    static Vardesc ljout_dv = { "LJOUT", (char *)&ccout_1.ljout, (ftnlen *)0, 
	    8 };
    static Vardesc tscut_dv = { "TSCUT", (char *)&ctlim_1.tscut, (ftnlen *)0, 
	    5 };
    static Vardesc tgcut_dv = { "TGCUT", (char *)&ctlim_1.tgcut, (ftnlen *)0, 
	    5 };
    static Vardesc lenvg_dv = { "LENVG", (char *)&envgen_1.lenvg, (ftnlen *)0,
	     8 };
    static Vardesc optol_dv = { "OPTOL", (char *)&optab_1.optol, (ftnlen *)0, 
	    5 };
    static Vardesc lwnew_dv = { "LWNEW", (char *)&rot_1.lwnew, (ftnlen *)0, 8 
	    };
    static ftnlen setdt_dims[] = { 1, 50, 1 };
    static Vardesc setdt_dv = { "SETDT", (char *)sett_1.setdt, setdt_dims, 5 }
	    ;
    static Vardesc rcrit_dv = { "RCRIT", (char *)&vmult_1.rcrit, (ftnlen *)0, 
	    5 };
    static Vardesc etadh0_dv = { "ETADH0", (char *)&debhu_1.etadh0, (ftnlen *)
	    0, 5 };
    static Vardesc etadh1_dv = { "ETADH1", (char *)&debhu_1.etadh1, (ftnlen *)
	    0, 5 };
    static Vardesc grtol_dv = { "GRTOL", (char *)&gravst_1.grtol, (ftnlen *)0,
	     5 };
    static Vardesc ldify_dv = { "LDIFY", (char *)&gravst_1.ldify, (ftnlen *)0,
	     8 };
    static Vardesc lnews_dv = { "LNEWS", (char *)&neweng_1.lnews, (ftnlen *)0,
	     8 };
    static Vardesc fliv95_dv = { "FLIV95", lopal95_1.fliv95, (ftnlen *)0, 
	    -256 };
    static Vardesc flaol2_dv = { "FLAOL2", zramp_1.flaol2, (ftnlen *)0, -256 }
	    ;
    static Vardesc itdif1_dv = { "ITDIF1", (char *)&difus_1.itdif1, (ftnlen *)
	    0, 3 };
    static Vardesc itdif2_dv = { "ITDIF2", (char *)&difus_1.itdif2, (ftnlen *)
	    0, 3 };
    static Vardesc fopal2_dv = { "FOPAL2", zramp_1.fopal2, (ftnlen *)0, -256 }
	    ;
    static Vardesc ldifz_dv = { "LDIFZ", (char *)&gravs3_1.ldifz, (ftnlen *)0,
	     8 };
    static Vardesc ipver_dv = { "IPVER", (char *)&pulse_1.ipver, (ftnlen *)0, 
	    3 };
    static Vardesc pomax_dv = { "POMAX", (char *)&po_1.pomax, (ftnlen *)0, 5 }
	    ;
    static Vardesc lpout_dv = { "LPOUT", (char *)&po_1.lpout, (ftnlen *)0, 8 }
	    ;
    static Vardesc kttau_dv = { "KTTAU", (char *)&atmos_1.kttau, (ftnlen *)0, 
	    3 };
    static Vardesc fcorr0_dv = { "FCORR0", (char *)&ctol_1.fcorr0, (ftnlen *)
	    0, 5 };
    static Vardesc ljdot0_dv = { "LJDOT0", (char *)&cwind_1.ljdot0, (ftnlen *)
	    0, 8 };
    static Vardesc niter1_dv = { "NITER1", (char *)&ctol_1.niter1, (ftnlen *)
	    0, 3 };
    static Vardesc niter2_dv = { "NITER2", (char *)&ctol_1.niter2, (ftnlen *)
	    0, 3 };
    static Vardesc niter3_dv = { "NITER3", (char *)&ctol_1.niter3, (ftnlen *)
	    0, 3 };
    static Vardesc niter4_dv = { "NITER4", (char *)&neweng_1.niter4, (ftnlen *
	    )0, 3 };
    static Vardesc mcore_dv = { "MCORE", (char *)&core_1.mcore, (ftnlen *)0, 
	    3 };
    static Vardesc lrwsh_dv = { "LRWSH", (char *)&chrone_1.lrwsh, (ftnlen *)0,
	     8 };
    static ftnlen xenv0a_dims[] = { 1, 50, 1 };
    static Vardesc xenv0a_dv = { "XENV0A", (char *)newxym_1.xenv0a, 
	    xenv0a_dims, 5 };
    static ftnlen zenv0a_dims[] = { 1, 50, 1 };
    static Vardesc zenv0a_dv = { "ZENV0A", (char *)newxym_1.zenv0a, 
	    zenv0a_dims, 5 };
    static ftnlen senv0a_dims[] = { 1, 50, 1 };
    static Vardesc senv0a_dv = { "SENV0A", (char *)newxym_1.senv0a, 
	    senv0a_dims, 5 };
    static Vardesc stolr0_dv = { "STOLR0", (char *)&intpar_1.stolr0, (ftnlen *
	    )0, 5 };
    static ftnlen endage_dims[] = { 1, 50, 1 };
    static Vardesc endage_dv = { "ENDAGE", (char *)sett_1.endage, endage_dims,
	     5 };
    static Vardesc steff_dv = { "STEFF", (char *)&calstar_1.steff, (ftnlen *)
	    0, 5 };
    static Vardesc alphac_dv = { "ALPHAC", (char *)&dpmix_1.alphac, (ftnlen *)
	    0, 5 };
    static Vardesc alphae_dv = { "ALPHAE", (char *)&dpmix_1.alphae, (ftnlen *)
	    0, 5 };
    static Vardesc fdebug_dv = { "FDEBUG", lufnm_1.fdebug, (ftnlen *)0, -256 }
	    ;
    static Vardesc lteff_dv = { "LTEFF", (char *)&calstar_1.lteff, (ftnlen *)
	    0, 8 };
    static Vardesc zlaol1_dv = { "ZLAOL1", (char *)&newopac_1.zlaol1, (ftnlen 
	    *)0, 5 };
    static Vardesc atmbeg_dv = { "ATMBEG", (char *)&intatm_1.atmbeg, (ftnlen *
	    )0, 5 };
    static Vardesc zlaol2_dv = { "ZLAOL2", (char *)&newopac_1.zlaol2, (ftnlen 
	    *)0, 5 };
    static Vardesc ldebug_dv = { "LDEBUG", (char *)&ccout2_1.ldebug, (ftnlen *
	    )0, 8 };
    static Vardesc alpham_dv = { "ALPHAM", (char *)&dpmix_1.alpham, (ftnlen *)
	    0, 5 };
    static Vardesc acfpft_dv = { "ACFPFT", (char *)&rot_1.acfpft, (ftnlen *)0,
	     5 };
    static Vardesc flldat_dv = { "FLLDAT", lufnm_1.flldat, (ftnlen *)0, -256 }
	    ;
    static Vardesc lchemo_dv = { "LCHEMO", (char *)&ccout_1.lchemo, (ftnlen *)
	    0, 8 };
    static Vardesc ffermi_dv = { "FFERMI", lufnm_1.ffermi, (ftnlen *)0, -256 }
	    ;
    static Vardesc ftrack_dv = { "FTRACK", lufnm_1.ftrack, (ftnlen *)0, -256 }
	    ;
    static Vardesc fmilne_dv = { "FMILNE", lufnm_1.fmilne, (ftnlen *)0, -256 }
	    ;
    static Vardesc anewcp_dv = { "ANEWCP", newcmp_1.anewcp, (ftnlen *)0, -3 };
    static Vardesc fscvhe_dv = { "FSCVHE", scv2_1.fscvhe, (ftnlen *)0, -256 };
    static ftnlen rsclcm_dims[] = { 1, 50, 1 };
    static Vardesc rsclcm_dv = { "RSCLCM", (char *)rsclcm, rsclcm_dims, 5 };
    static Vardesc lscrib_dv = { "LSCRIB", (char *)&ccout_1.lscrib, (ftnlen *)
	    0, 8 };
    static ftnlen kindrn_dims[] = { 1, 50, 1 };
    static Vardesc kindrn_dv = { "KINDRN", (char *)kindrn, kindrn_dims, 3 };
    static Vardesc fscomp_dv = { "FSCOMP", lufnm_1.fscomp, (ftnlen *)0, -256 }
	    ;
    static Vardesc fmodpt_dv = { "FMODPT", lufnm_1.fmodpt, (ftnlen *)0, -256 }
	    ;
    static Vardesc ffirst_dv = { "FFIRST", lufnm_1.ffirst, (ftnlen *)0, -256 }
	    ;
    static Vardesc lpshll_dv = { "LPSHLL", (char *)&ccout_1.lpshll, (ftnlen *)
	    0, 8 };
    static Vardesc lmilne_dv = { "LMILNE", (char *)&ccout2_1.lmilne, (ftnlen *
	    )0, 8 };
    static Vardesc ltrack_dv = { "LTRACK", (char *)&ccout2_1.ltrack, (ftnlen *
	    )0, 8 };
    static Vardesc lstpch_dv = { "LSTPCH", (char *)&ccout2_1.lstpch, (ftnlen *
	    )0, 8 };
    static Vardesc lconzo_dv = { "LCONZO", (char *)&ccout_1.lconzo, (ftnlen *)
	    0, 8 };
    static Vardesc fshort_dv = { "FSHORT", lufnm_1.fshort, (ftnlen *)0, -256 }
	    ;
    static Vardesc npunch_dv = { "NPUNCH", (char *)&ccout2_1.npunch, (ftnlen *
	    )0, 3 };
    static Vardesc npoint_dv = { "NPOINT", (char *)&ccout1_1.npoint, (ftnlen *
	    )0, 3 };
    static Vardesc lprtin_dv = { "LPRTIN", (char *)&ccout_1.lprtin, (ftnlen *)
	    0, 8 };
    static Vardesc lstore_dv = { "LSTORE", (char *)&ccout2_1.lstore, (ftnlen *
	    )0, 8 };
    static Vardesc fpurez_dv = { "FPUREZ", nwlaol_1.fpurez, (ftnlen *)0, -256 
	    };
    static ftnlen nmodls_dims[] = { 1, 50, 1 };
    static Vardesc nmodls_dv = { "NMODLS", (char *)ckind_1.nmodls, 
	    nmodls_dims, 3 };
    static ftnlen lfirst_dims[] = { 1, 50, 1 };
    static Vardesc lfirst_dv = { "LFIRST", (char *)ckind_1.lfirst, 
	    lfirst_dims, 8 };
    static Vardesc numrun_dv = { "NUMRUN", (char *)&ckind_1.numrun, (ftnlen *)
	    0, 3 };
    static Vardesc nprtpt_dv = { "NPRTPT", (char *)&ccout1_1.nprtpt, (ftnlen *
	    )0, 3 };
    static Vardesc dtwind_dv = { "DTWIND", (char *)&ct2_1.dtwind, (ftnlen *)0,
	     5 };
    static Vardesc lptime_dv = { "LPTIME", (char *)&ct3_1.lptime, (ftnlen *)0,
	     8 };
    static ftnlen htoler_dims[] = { 2, 10, 6, 5 };
    static Vardesc htoler_dv = { "HTOLER", (char *)ctol_1.htoler, htoler_dims,
	     5 };
    static Vardesc fcorri_dv = { "FCORRI", (char *)&ctol_1.fcorri, (ftnlen *)
	    0, 5 };
    static ftnlen hpttol_dims[] = { 1, 12, 1 };
    static Vardesc hpttol_dv = { "HPTTOL", (char *)ctol_1.hpttol, hpttol_dims,
	     5 };
    static Vardesc lovstc_dv = { "LOVSTC", (char *)&dpmix_1.lovstc, (ftnlen *)
	    0, 8 };
    static Vardesc lovste_dv = { "LOVSTE", (char *)&dpmix_1.lovste, (ftnlen *)
	    0, 8 };
    static Vardesc lovstm_dv = { "LOVSTM", (char *)&dpmix_1.lovstm, (ftnlen *)
	    0, 8 };
    static Vardesc lsemic_dv = { "LSEMIC", (char *)&dpmix_1.lsemic, (ftnlen *)
	    0, 8 };
    static Vardesc atmstp_dv = { "ATMSTP", (char *)&envgen_1.atmstp, (ftnlen *
	    )0, 5 };
    static Vardesc envstp_dv = { "ENVSTP", (char *)&envgen_1.envstp, (ftnlen *
	    )0, 5 };
    static Vardesc lexcom_dv = { "LEXCOM", (char *)&flag_1.lexcom, (ftnlen *)
	    0, 8 };
    static Vardesc lkuthe_dv = { "LKUTHE", (char *)&heflsh_1.lkuthe, (ftnlen *
	    )0, 8 };
    static Vardesc atmerr_dv = { "ATMERR", (char *)&intatm_1.atmerr, (ftnlen *
	    )0, 5 };
    static Vardesc atmmin_dv = { "ATMMIN", (char *)&intatm_1.atmmin, (ftnlen *
	    )0, 5 };
    static Vardesc fmonte1_dv = { "FMONTE1", iomonte_1.fmonte1, (ftnlen *)0, 
	    -256 };
    static Vardesc fmonte2_dv = { "FMONTE2", iomonte_1.fmonte2, (ftnlen *)0, 
	    -256 };
    static Vardesc atmmax_dv = { "ATMMAX", (char *)&intatm_1.atmmax, (ftnlen *
	    )0, 5 };
    static Vardesc enverr_dv = { "ENVERR", (char *)&intenv_1.enverr, (ftnlen *
	    )0, 5 };
    static Vardesc envbeg_dv = { "ENVBEG", (char *)&intenv_1.envbeg, (ftnlen *
	    )0, 5 };
    static Vardesc envmin_dv = { "ENVMIN", (char *)&intenv_1.envmin, (ftnlen *
	    )0, 5 };
    static Vardesc envmax_dv = { "ENVMAX", (char *)&intenv_1.envmax, (ftnlen *
	    )0, 5 };
    static Vardesc xnewcp_dv = { "XNEWCP", (char *)&newcmp_1.xnewcp, (ftnlen *
	    )0, 5 };
    static Vardesc lnewcp_dv = { "LNEWCP", (char *)&newcmp_1.lnewcp, (ftnlen *
	    )0, 8 };
    static Vardesc walpcz_dv = { "WALPCZ", (char *)&rot_1.walpcz, (ftnlen *)0,
	     5 };
    static Vardesc linstb_dv = { "LINSTB", (char *)&rot_1.linstb, (ftnlen *)0,
	     8 };
    static Vardesc abstol_dv = { "ABSTOL", (char *)&burtol_1.abstol, (ftnlen *
	    )0, 5 };
    static Vardesc ilambda_dv = { "ILAMBDA", (char *)&gravst_1.ilambda, (
	    ftnlen *)0, 3 };
    static Vardesc reltol_dv = { "RELTOL", (char *)&burtol_1.reltol, (ftnlen *
	    )0, 5 };
    static Vardesc kemmax_dv = { "KEMMAX", (char *)&burtol_1.kemmax, (ftnlen *
	    )0, 3 };
    static Vardesc lthoul_dv = { "LTHOUL", (char *)&gravs3_1.lthoul, (ftnlen *
	    )0, 8 };
    static Vardesc lpulse_dv = { "LPULSE", (char *)&pulse_1.lpulse, (ftnlen *)
	    0, 8 };
    static Vardesc itrver_dv = { "ITRVER", (char *)&track_1.itrver, (ftnlen *)
	    0, 3 };
    static Vardesc lpurez_dv = { "LPUREZ", (char *)&nwlaol_1.lpurez, (ftnlen *
	    )0, 8 };
    static ftnlen cmixla_dims[] = { 1, 50, 1 };
    static Vardesc cmixla_dv = { "CMIXLA", (char *)newxym_1.cmixla, 
	    cmixla_dims, 5 };
    static ftnlen lsenv0a_dims[] = { 1, 50, 1 };
    static Vardesc lsenv0a_dv = { "LSENV0A", (char *)newxym_1.lsenv0a, 
	    lsenv0a_dims, 8 };
    static Vardesc lnulos1_dv = { "LNULOS1", (char *)&nuloss_1.lnulos1, (
	    ftnlen *)0, 8 };
    static Vardesc fallard_dv = { "FALLARD", alatm04_1.fallard, (ftnlen *)0, 
	    -256 };
    static ftnlen rsclzc_dims[] = { 1, 50, 1 };
    static Vardesc rsclzc_dv = { "RSCLZC", (char *)zramp_1.rsclzc, 
	    rsclzc_dims, 5 };
    static ftnlen rsclzm1_dims[] = { 1, 50, 1 };
    static Vardesc rsclzm1_dv = { "RSCLZM1", (char *)zramp_1.rsclzm1, 
	    rsclzm1_dims, 5 };
    static ftnlen rsclzm2_dims[] = { 1, 50, 1 };
    static Vardesc rsclzm2_dv = { "RSCLZM2", (char *)zramp_1.rsclzm2, 
	    rsclzm2_dims, 5 };
    static Vardesc lzramp_dv = { "LZRAMP", (char *)&zramp_1.lzramp, (ftnlen *)
	    0, 8 };
    static Vardesc xlstol_dv = { "XLSTOL", (char *)&calstar_1.xlstol, (ftnlen 
	    *)0, 5 };
    static Vardesc lcalst_dv = { "LCALST", (char *)&calstar_1.lcalst, (ftnlen 
	    *)0, 8 };
    static Vardesc fopale_dv = { "FOPALE", opaleos_1.fopale, (ftnlen *)0, 
	    -256 };
    static Vardesc fopale01_dv = { "FOPALE01", opaleos_1.fopale01, (ftnlen *)
	    0, -256 };
    static Vardesc fopale06_dv = { "FOPALE06", opaleos_1.fopale06, (ftnlen *)
	    0, -256 };
    static Vardesc lopale_dv = { "LOPALE", (char *)&opaleos_1.lopale, (ftnlen 
	    *)0, 8 };
    static Vardesc lopale01_dv = { "LOPALE01", (char *)&opaleos_1.lopale01, (
	    ftnlen *)0, 8 };
    static Vardesc lopale06_dv = { "LOPALE06", (char *)&opaleos_1.lopale06, (
	    ftnlen *)0, 8 };
    static Vardesc zopal1_dv = { "ZOPAL1", (char *)&newopac_1.zopal1, (ftnlen 
	    *)0, 5 };
    static ftnlen descrip_dims[] = { 1, 2, 1 };
    static Vardesc descrip_dv = { "DESCRIP", desc_1.descrip, descrip_dims, 
	    -256 };
    static Vardesc zopal2_dv = { "ZOPAL2", (char *)&newopac_1.zopal2, (ftnlen 
	    *)0, 5 };
    static Vardesc zopal951_dv = { "ZOPAL951", (char *)&newopac_1.zopal951, (
	    ftnlen *)0, 5 };
    static Vardesc zalex1_dv = { "ZALEX1", (char *)&newopac_1.zalex1, (ftnlen 
	    *)0, 5 };
    static Vardesc lalex06_dv = { "LALEX06", (char *)&newopac_1.lalex06, (
	    ftnlen *)0, 8 };
    static Vardesc llaol89_dv = { "LLAOL89", (char *)&newopac_1.llaol89, (
	    ftnlen *)0, 8 };
    static Vardesc lopal92_dv = { "LOPAL92", (char *)&newopac_1.lopal92, (
	    ftnlen *)0, 8 };
    static Vardesc lopal95_dv = { "LOPAL95", (char *)&newopac_1.lopal95, (
	    ftnlen *)0, 8 };
    static Vardesc lkur90_dv = { "LKUR90", (char *)&newopac_1.lkur90, (ftnlen 
	    *)0, 8 };
    static Vardesc lalex95_dv = { "LALEX95", (char *)&newopac_1.lalex95, (
	    ftnlen *)0, 8 };
    static Vardesc falex06_dv = { "FALEX06", alex06_1.falex06, (ftnlen *)0, 
	    -256 };
    static Vardesc tollaol_dv = { "TOLLAOL", (char *)&nwlaol_1.tollaol, (
	    ftnlen *)0, 5 };
    static Vardesc ldifad_dv = { "LDIFAD", (char *)&varfc_1.ldifad, (ftnlen *)
	    0, 8 };
    static Vardesc lmonte_dv = { "LMONTE", (char *)&monte_1.lmonte, (ftnlen *)
	    0, 8 };
    static Vardesc imend_dv = { "IMEND", (char *)&monte_1.imend, (ftnlen *)0, 
	    3 };
    static Vardesc tmolmin_dv = { "TMOLMIN", (char *)&newopac_1.tmolmin, (
	    ftnlen *)0, 5 };
    static Vardesc tmolmax_dv = { "TMOLMAX", (char *)&newopac_1.tmolmax, (
	    ftnlen *)0, 5 };
    static Vardesc tdisk_dv = { "TDISK", (char *)&disk_1.tdisk, (ftnlen *)0, 
	    5 };
    static Vardesc pdisk_dv = { "PDISK", (char *)&disk_1.pdisk, (ftnlen *)0, 
	    5 };
    static Vardesc ldisk_dv = { "LDISK", (char *)&disk_1.ldisk, (ftnlen *)0, 
	    8 };
    static Vardesc weakscreening_dv = { "WEAKSCREENING", (char *)&
	    weak_1.weakscreening, (ftnlen *)0, 5 };
    static Vardesc lsolid_dv = { "LSOLID", (char *)&sbrot_1.lsolid, (ftnlen *)
	    0, 8 };
    static Vardesc fczdmdt_dv = { "FCZDMDT", (char *)&masschg_1.fczdmdt, (
	    ftnlen *)0, 5 };
    static ftnlen compacc_dims[] = { 1, 15, 1 };
    static Vardesc compacc_dv = { "COMPACC", (char *)masschg_1.compacc, 
	    compacc_dims, 5 };
    static Vardesc creim_dv = { "CREIM", (char *)&masschg_1.creim, (ftnlen *)
	    0, 5 };
    static Vardesc lreimer_dv = { "LREIMER", (char *)&masschg_1.lreimer, (
	    ftnlen *)0, 8 };
    static Vardesc lmdot_dv = { "LMDOT", (char *)&masschg_1.lmdot, (ftnlen *)
	    0, 8 };
    static Vardesc zopal952_dv = { "ZOPAL952", (char *)&zopal952, (ftnlen *)0,
	     5 };
    static Vardesc zalex2_dv = { "ZALEX2", (char *)&zalex2, (ftnlen *)0, 5 };

    static Vardesc *control_vl[] = { &cmixla_dv, &descrip_dv, &endage_dv, &
	    flaol_dv, &fpurez_dv, &flaol2_dv, &fopal2_dv, &flast_dv, &
	    ffirst_dv, &ffermi_dv, &fdebug_dv, &ftrack_dv, &fshort_dv, &
	    fmilne_dv, &fmodpt_dv, &fstor_dv, &fpmod_dv, &fpatm_dv, &fpenv_dv,
	     &fdyn_dv, &flldat_dv, &fsnu_dv, &fscomp_dv, &fkur_dv, &fmhd1_dv, 
	    &fmhd2_dv, &fmhd3_dv, &fmhd4_dv, &fmhd5_dv, &fmhd6_dv, &fmhd7_dv, 
	    &fmhd8_dv, &fiso_dv, &fatm_dv, &fkur2_dv, &fallard_dv, &fscvh_dv, 
	    &fscvhe_dv, &fscvz_dv, &fopale_dv, &fliv95_dv, &fmonte1_dv, &
	    fmonte2_dv, &ipver_dv, &itrver_dv, &kindrn_dv, &ldebug_dv, &
	    lcorr_dv, &lmilne_dv, &ltrack_dv, &lstore_dv, &lfirst_dv, &
	    lstpch_dv, &lscrib_dv, &lpshll_dv, &lconzo_dv, &lchemo_dv, &
	    ljout_dv, &lprtin_dv, &lpulse_dv, &lzramp_dv, &lteff_dv, &
	    lcalst_dv, &lpurez_dv, &liso_dv, &lrwsh_dv, &lsenv0a_dv, &
	    lpout_dv, &lcals_dv, &llaol89_dv, &lopal92_dv, &lopal95_dv, &
	    lkur90_dv, &lalex95_dv, &npoint_dv, &npunch_dv, &npenv_dv, &
	    nprt1_dv, &nprt2_dv, &nprtpt_dv, &numrun_dv, &nmodls_dv, &
	    opecalex_dv, &poa_dv, &pob_dv, &poc_dv, &pomax_dv, &rsclm_dv, &
	    rsclx_dv, &rsclz_dv, &rsclcm_dv, &rsclzc_dv, &rsclzm1_dv, &
	    rsclzm2_dv, &setdt_dv, &senv0a_dv, &steff_dv, &sr_dv, &tolr_dv, &
	    toll_dv, &xenv0a_dv, &xls_dv, &xlstol_dv, &zenv0a_dv, &zlaol1_dv, 
	    &zlaol2_dv, &zopal1_dv, &zopal2_dv, &zopal951_dv, &zopal952_dv, &
	    zalex1_dv, &zalex2_dv, &zkur1_dv, &zkur2_dv, &fopale01_dv, &
	    fcondopacp_dv, &fopale06_dv, &falex06_dv, &lalex06_dv };
    static Namelist control = { "CONTROL", control_vl, 119 };

    static Vardesc *physics_vl[] = { &atmmin_dv, &atmbeg_dv, &atmerr_dv, &
	    atmmax_dv, &atmd0_dv, &anewcp_dv, &atmp_dv, &acfpft_dv, &atime_dv,
	     &alphac_dv, &alphae_dv, &alfa_dv, &alpham_dv, &atmstp_dv, &
	    abstol_dv, &cmin_dv, &clsun_dv, &crsun_dv, &dpenv_dv, &dtdif_dv, &
	    dtwind_dv, &djok_dv, &dt_gs___dv, &enverr_dv, &envmax_dv, &
	    envmin_dv, &envbeg_dv, &envstp_dv, &etadh0_dv, &etadh1_dv, &
	    fcorr0_dv, &fcorri_dv, &fk_dv, &fw_dv, &fc_dv, &fo_dv, &fmu_dv, &
	    fes_dv, &fcore_dv, &fgsf_dv, &fss_dv, &fesc_dv, &fssc_dv, &
	    fgsfc_dv, &fgry_dv, &fgrz_dv, &grtol_dv, &htoler_dv, &hpttol_dv, &
	    itfp1_dv, &itfp2_dv, &imax_dv, &itdif1_dv, &itdif2_dv, &ies_dv, &
	    igsf_dv, &imu_dv, &ilambda_dv, &kttau_dv, &kemmax_dv, &lvfc_dv, &
	    ldifad_dv, &lnoj_dv, &ldify_dv, &ldifz_dv, &lsnu_dv, &ldh_dv, &
	    lnewcp_dv, &lkuthe_dv, &lovstc_dv, &lovste_dv, &lovstm_dv, &
	    lexcom_dv, &lrot_dv, &lnew0_dv, &linstb_dv, &lwnew_dv, &ljdot0_dv,
	     &lptime_dv, &ladov_dv, &lenvg_dv, &lnulos1_dv, &lthoul_dv, &
	    lthoulfit_dv, &lopale_dv, &lmhd_dv, &lcore_dv, &lsemic_dv, &
	    lnews_dv, &mcore_dv, &niter1_dv, &niter2_dv, &niter3_dv, &
	    niter4_dv, &nuse_dv, &niter_gs___dv, &optol_dv, &rcrit_dv, &
	    reltol_dv, &stolr0_dv, &tcut_dv, &tscut_dv, &tenv0_dv, &tenv1_dv, 
	    &tgcut_dv, &tridt_dv, &tridl_dv, &tollaol_dv, &vnew_dv, &
	    walpcz_dv, &wnew_dv, &weakscreening_dv, &xnewcp_dv, &xmin_dv, &
	    ymin_dv, &tmolmin_dv, &tmolmax_dv, &lmonte_dv, &imbeg_dv, &
	    imend_dv, &sstandard_dv, &lscv_dv, &ldisk_dv, &tdisk_dv, &
	    pdisk_dv, &wmax_dv, &lsolid_dv, &dmdt0_dv, &fczdmdt_dv, &
	    ftotdmdt_dv, &compacc_dv, &creim_dv, &lreimer_dv, &lmdot_dv, &
	    lopale01_dv, &lcondopacp_dv, &lopale06_dv, &lnumderiv_dv, &
	    alatm_feh___dv, &alatm_alpha___dv, &laltptau100_dv };
    static Namelist physics = { "PHYSICS", physics_vl, 141 };

    /* Fortran I/O blocks */
    static cilist io___15 = { 0, 0, 0, (char *)&control, 0 };
    static cilist io___16 = { 0, 0, 0, (char *)&physics, 0 };
    static cilist io___17 = { 0, 0, 0, (char *)&physics, 0 };
    static cilist io___18 = { 0, 0, 0, (char *)&control, 0 };
    static cilist io___19 = { 0, 0, 0, fmt_2, 0 };
    static cilist io___20 = { 0, 0, 0, fmt_1, 0 };
    static cilist io___26 = { 0, 0, 0, fmt_20, 0 };
    static cilist io___27 = { 0, 0, 0, fmt_50, 0 };
    static cilist io___28 = { 0, 0, 0, fmt_70, 0 };
    static cilist io___29 = { 0, 0, 0, fmt_90, 0 };
    static cilist io___30 = { 0, 0, 0, fmt_110, 0 };
    static cilist io___31 = { 0, 0, 0, fmt_130, 0 };
    static cilist io___32 = { 0, 0, 0, fmt_25, 0 };
    static cilist io___34 = { 0, 0, 0, fmt_35, 0 };
    static cilist io___35 = { 0, 0, 0, fmt_45, 0 };
    static cilist io___36 = { 0, 0, 0, fmt_55, 0 };
    static cilist io___37 = { 0, 0, 0, fmt_65, 0 };
    static cilist io___38 = { 0, 0, 0, fmt_75, 0 };
    static cilist io___39 = { 0, 0, 0, fmt_85, 0 };
    static cilist io___40 = { 0, 0, 0, fmt_105, 0 };
    static cilist io___41 = { 0, 0, 0, fmt_145, 0 };
    static cilist io___42 = { 0, 0, 0, fmt_155, 0 };
    static cilist io___43 = { 0, 0, 0, fmt_165, 0 };
    static cilist io___44 = { 0, 0, 0, fmt_175, 0 };
    static cilist io___45 = { 0, 0, 0, fmt_185, 0 };
    static cilist io___46 = { 0, 0, 0, fmt_195, 0 };
    static cilist io___47 = { 0, 0, 0, fmt_197, 0 };
    static cilist io___48 = { 0, 0, 0, fmt_198, 0 };
    static cilist io___49 = { 0, 0, 0, fmt_1999, 0 };
    static cilist io___50 = { 0, 0, 0, fmt_1888, 0 };
    static cilist io___51 = { 0, 0, 0, fmt_1889, 0 };
    static cilist io___52 = { 0, 0, 0, fmt_196, 0 };
    static cilist io___53 = { 0, 0, 0, 0, 0 };
    static cilist io___54 = { 0, 0, 0, fmt_310, 0 };
    static cilist io___55 = { 0, 0, 0, fmt_310, 0 };
    static cilist io___56 = { 0, 0, 0, fmt_320, 0 };
    static cilist io___57 = { 0, 0, 0, fmt_323, 0 };
    static cilist io___58 = { 0, 0, 0, fmt_200, 0 };
    static cilist io___60 = { 0, 0, 0, fmt_350, 0 };
    static cilist io___61 = { 0, 0, 0, fmt_350, 0 };
    static cilist io___62 = { 0, 0, 0, fmt_351, 0 };
    static cilist io___63 = { 0, 0, 0, fmt_351, 0 };
    static cilist io___64 = { 0, 0, 0, fmt_370, 0 };
    static cilist io___65 = { 0, 0, 0, fmt_370, 0 };
    static cilist io___66 = { 0, 0, 0, fmt_450, 0 };
    static cilist io___67 = { 0, 0, 0, fmt_450, 0 };
    static cilist io___68 = { 0, 0, 0, fmt_451, 0 };
    static cilist io___69 = { 0, 0, 0, fmt_451, 0 };
    static cilist io___70 = { 0, 0, 0, fmt_452, 0 };
    static cilist io___71 = { 0, 0, 0, fmt_452, 0 };
    static cilist io___72 = { 0, 0, 0, fmt_550, 0 };
    static cilist io___73 = { 0, 0, 0, fmt_550, 0 };
    static cilist io___74 = { 0, 0, 0, fmt_451, 0 };
    static cilist io___75 = { 0, 0, 0, fmt_451, 0 };
    static cilist io___76 = { 0, 0, 0, fmt_452, 0 };
    static cilist io___77 = { 0, 0, 0, fmt_452, 0 };


/* PARAMETERS NT AND NG FOR TABULATED SURFACE PRESSURES. */
/* PARAMETERS NTA AND NGA FOR TABULATED ALLARD MODEL SURFACE PRESSURES. */
/* MHP 6/98 */
/* 7/91 LSEMIC (SEMI-CONVECTION) ADDED TO COMMON BLOCK. */
/* DBG 7/92 COMMON BLOCK ADDED TO COMPUTE DEBYE-HUCKEL CORRECTION. */
/* MHP 10/90 DIFFERENT FC FOR DIFFERENT MECHANISMS INTRODUCED. */
/* ALSO OPTION FOR SMOOTHING VELOCITIES FOR LENGTH SCALE CALCULATIONS. */
/* MHP 5/90 ADD COMMON BLOCK FOR GRAVITATIONAL SETTLING. */
/* MHP 5/90 ADD COMMON BLOCK FOR NEW TREATMENT OF */
/* ENTROPY TERM(LNEWS),AND THE CALCULATION */
/* OF SOLAR NEUTRINOS(LSNU).ALSO ALLOWS A FOURTH LEVEL OF ITERATION(NITER4). */
/* MHP 7/91 ADDED COMMON BLOCK FOR NUMERICAL PARAMETERS IN KEMCOM. */
/* YCK >>> OPAL95 */
/* <<< YCK */
/* MHP 6/90 ADDITIONAL COMMON BLOCK FOR SETTLING. */
/* DBG PULSE */
/* DBG PULSE OUT 7/92 */
/* VARIABLES USED TO CONTROL OUTPUT OF PULSATION MODELS.  MODEL */
/* OUTPUT AFTER HAS TRAVELED POMAX IN HR DIAGRAM */
/* LPOUT AND POMAX ADDED TO CONTROL COMMON BLOCK, REST IN PHYSICS */
/* DBGLAOL */
/* DBG 11/11/91 ADDED TO NAMELIST */
/* DBG 1/92 let XENV0, ZENV0, and CMIXL be arrays so can change during */
/* a set of runs. */
/* JMH 8/18/91 */
/* JMH */
/* 9/06 GN --- New neutrino loss common block */
/* MHP 1/93 ADD OPTION TO AUTOMATICALLY CALIBRATE SOLAR MODEL. */
/* DBG 7/92 ADDED DEBYE HUCKEL PARAMETERS TO NAMELIST, ETADH0, ETADH1 */
/* DBG 4/94 ADDED PARAMETERS TO CONTROL RAMP Z IN CORE */
/* IF LZRAMP=T THEN RESCALE Z IN CORE FROM RSCLZC VALUE TO ZENV VALUE */
/* WHERE CHANGE IS LINEAR. Z MEETS ZENV AT RSCLZM. */
/* DBG 12/94 ADDED CALIBRATE STELLAR MODEL */
/* OPAL eos */
/* OPACITY COMMON BLOCKS - modified 3/09 */
/* 9/95 Alex low T opacity tables */
/* switch */
/* 2006 version added 3/09 */
/* 8/96 MHP NEW COMMON BLOCK FOR NUCLEAR REACTION RATES. */
/* MHP 6/96 MONTE CARLO OPTION FOR SNUS ADDED. */
/* MHP  5/97 ADDED COMMON BLOCK FOR SCV EOS TABLES */
/* LLP 9/08 New ALATM03 COMMON to share info with Allard atmosphere routines */
/* Shared: ALFILEIN, */
/* ALSURFP and PARMIN */
/* MHP 9/94 ADDED DISK LOCKING OPTION - FLAG, TIME OVER WHICH LOCKING */
/* IS ENFORCED, AND PERIOD AT WHICH LOCKING IS SET ARE OPTIONS. */
/* MHP 3/99 ADDED FLAG TO TREAT THE ENTIRE STAR AS 'CONVECTIVE' */
/* FOR ANGULAR MOMENTUM PURPOSES. */
/* MHP 10/01 ADDED COMMON BLOCK FOR MASS LOSS/ACCRETION */

/* SPLIT NAMELIST INTO TWO: CONTROL and PHYSICS */


/* DBG DATA CARDS FOR THE RUN PARAMETERS */
/* MHP DATA FOR MONTE CARLO OPTION, ETC */
/* For new Allard Atmospheres */
/* Changed slightly 3He-3He on 9/25/97 to take account of the S'. */
/*  Previously (6/16/97) used S at Gamow Peak. Agrees with Workshop paper. */

/* MHP 7/93 VARIABLE FC OPTION */
/* MHP 9/94 COMBINED DIFFUSION/ADVECTION OPTION */
/* MHP 9/93 */
/* DBG PULSE DATA CARD FOR PULSATION */
/* YC  If LMHD is TRUE use MHD equation of state tables.  LU numbers */
/*     are stored in IOMHDi. */
/* DBG If LCORE is TRUE then calculate shells interior to start up */
/*     model's inner most shell. */
/* MHP 5/90 NEW DATA STATEMENTS FOR NEW PARAMETERS */
/* DBGLAOL */
/* DBG 11/11/91 */
/* 3/92 DBG */
/* DBG PULSE OUT 7/92 */
/* DBG 4/94 ZRAMP STUFF */
/* DBG 12/94 CALIBRATED STELLAR MODEL STUFF */
/* YCK >>>  2/95 OPAL eos */
/* LLP >>> OPAL 2001 EOS, Potekhin Conductive Opacities, */
/*         OPAL 2006 EOS, Use Numerical Derivitives switches */
/* Alex low T opacity */
/* DBG 1/96 THE ARRAY V, READ IN VIA RDLAOL, CONTAINED THE MASS FRACTIONS */
/* OF THE ENVELOPE ELEMENTS. IT WAS USED IN STARIN TO DEFINE FXENV, */
/* WHICH ARE THE NUMBER FRACTION OF THE ENVELOPE ELEMENTS. FXENV WAS */
/* THEN UPDATED IN EQSTAT AND EQSAHA. HERE WE DEFINE VNEW PASSED */
/* IN A COMMON BLOCK VNEWCB. IT IS IDENTICAL TO V EXCEPT THAT THE NUMBERS */
/* ARE DEFINED HERE EXPLICITY FOR A G&N93 SOLAR MIXTURE. YOU CAN */
/* CHANGE THEM VIA THE PHYSICS NAMELIST. V IS SET EQUAL TO VNEW IN */
/*  STARIN EXCEPT WHEN LLAOL=T (TO MAINTAIN BACKWARD COMPATIBILITY. */
/*            Na          Al          Mg          Fe */
/*            Si          C           H           O */
/*            N           Ar          Ne          He */
/* MHP 5/97 OPTION FOR SAUMON, CHABRIER, AND VAN HORN EOS ADDED */
/* MHP 3/99 OPTION FOR SB ROTATION ENFORED IN THE ENTIRE STAR AT */
/* ALL TIMES */
/* 3/09 Alexander 2006 opacity table options and opacity ramp options */
/* THIS SUBROUTINE READS ALL USER DEFINED QUANTITIES FROM THE */
/* FILES yrec8.nml1 and yrec8.nml2 */
/* VALUES FOR LOGICAL UNITS USED IN READS AND WRITES SET IN DATA */
/* STATEMENT; THEY CAN BE CHANGED IN THE NAMELIST IF NEEDED. */
/* LOGICAL UNIT 5 = READ FROM SCREEN */
/* LOGICAL UNIT 6 = WRITE TO SCREEN: FOR BATCH USE STATUS FILE INSTEAD */
/* SPECIFY ALL LOGICAL UNIT NUMBERS HERE: */
/* OUTPUT: STATUS FILE */
    luout_1.iowr = 6;
/* OUTPUT: LAST MODEL (TEXT) */
    luout_1.ilast = 11;
/* INPUT: FIRST MODEL (TEXT) */
    lunum_1.ifirst = 12;
/* INPUT: PHYSICS NAMELIST */
    lunum_1.irun = 13;
/* INPUT: CONTROL NAMELIST */
    lunum_1.istand = 14;
/* INPUT: FERMI TABLES */
    lunum_1.ifermi = 15;
/* OUTPUT: RESERVED for DEBUGGING */
    luout_1.idebug = 18;
/* OUTPUT: TRACK */
    luout_1.itrack = 19;
/* OUTPUT: ALL DIAGNOSTIC INFO */
    luout_1.ishort = 20;
/* OUTPUT: MILNE INVARIANT VARIABLES */
    luout_1.imilne = 21;
/* OUTPUT: SHELL BY SHELL INFO ON MODELS */
    luout_1.imodpt = 22;
/* OUTPUT: SAVED MODELS, CAN BE USED AS STARTING MODEL */
    luout_1.istor = 23;
/* OUTPUT: FOR PULSATION CODE, INTERIOR */
    lunum_1.iopmod = 24;
/* OUTPUT: FOR PULSATION CODE, ENVELOPE */
    lunum_1.iopenv = 25;
/* OUTPUT: FOR PULSATION CODE, ATMOSPHERE */
    lunum_1.iopatm = 26;
/* OUTPUT: BINARY OUTPUT OF LAST MODEL */
    ilstbn = 27;
/* OUTPUT: BINARY OUTPUT OF STORED MODELS */
    istobn = 28;
/* INPUT: BINARY STARTING MODEL */
    ifstbn = 29;
/* OUTPUT: INFO RELAVENT TO DYNAMO */
    lunum_1.idyn = 30;
/* YCK INPUT: OPAL92 OPACITY TABLES */
    lunum_1.illdat = 32;
/* YCK INPUT: OPAL95 OPACITY TABLE */
    lopal95_1.iliv95 = 48;
/* OUTPUT: SNU FLUXES */
    lunum_1.isnu = 33;
/* OUTPUT: EXTENDED COMPOSITION INFO */
    lunum_1.iscomp = 34;
/* YCK INPUT: KURUCZ LOW T OPACITIES */
    lunum_1.ikur = 36;
/* OUPUT: ISOCHRONE INFORMATION */
    chrone_1.iiso = 37;
/* INPUT: KURUCZ ATMOSPHER TABLE */
    atmos2_1.ioatm = 38;
/* YCK INPUT: Alex LOW T OPACITIES */
    alexo_1.ialxo = 39;
/* INPUT: MHD EQU. OF STATE TABLES */
    mhd_1.iomhd1 = 40;
    mhd_1.iomhd2 = 41;
    mhd_1.iomhd3 = 42;
    mhd_1.iomhd4 = 43;
    mhd_1.iomhd5 = 44;
    mhd_1.iomhd6 = 45;
    mhd_1.iomhd7 = 46;
    mhd_1.iomhd8 = 47;
/* INPUT: OPAL EQUATION OF STATE */
    opaleos_1.iopale = 49;
/* INPUT LAOL OPACITIES IN DENSE GRID FORMAT */
    nwlaol_1.iolaol = 61;
/* INPUT: LAOL OPACITIES FOR PURE CN IN DENSE GRID FORMAT */
    nwlaol_1.iopurez = 62;
/* DBG 4/94 */
/*     INPUT: */
/* DBG 8/95 SECOND OPOACITY TABLES FOR ZRAMP AND Z DIFFUSION */
    zramp_1.iolaol2 = 63;
    zramp_1.ioopal2 = 64;
    miscopac_1.ikur2 = 65;
/* MHP 6/97 ADDED OPTION FOR ALLARD MODEL ATMOSPHERES */
    alatm03_1.ioatma = 66;
/* MHP 6/98 MONTE CARLO FOR SNUs */
    iomonte_1.imonte1 = 70;
    iomonte_1.imonte2 = 71;
/* INPUT FILES FOR THE SCV EOS */
    scv2_1.iscvh = 72;
    scv2_1.iscvhe = 73;
    scv2_1.iscvz = 74;
/* Input files for Potekhin conductive opacities. LLP 7/8/06 */
    miscopac_1.icondopacp = 75;
/*      FcondOpacP = 'condall.d' */
/* Default FeH and Alpha for new Allard Atmospheres */
    alatm03_1.alatm_feh__ = 0.;
    alatm03_1.alatm_alpha__ = 0.;
    alatm03_1.laltptau100 = FALSE_;
/* 3/09 Input file for 2006 Alexander opacities */
    alex06_1.ialex06 = 90;
    o__1.oerr = 0;
    o__1.ounit = lunum_1.istand;
    o__1.ofnmlen = 10;
    o__1.ofnm = "yrec8.nml1";
    o__1.orl = 0;
    o__1.osta = "OLD";
    o__1.oacc = 0;
    o__1.ofm = 0;
    o__1.oblnk = 0;
    f_open(&o__1);
    o__1.oerr = 0;
    o__1.ounit = lunum_1.irun;
    o__1.ofnmlen = 10;
    o__1.ofnm = "yrec8.nml2";
    o__1.orl = 0;
    o__1.osta = "OLD";
    o__1.oacc = 0;
    o__1.ofm = 0;
    o__1.oblnk = 0;
    f_open(&o__1);
    io___15.ciunit = lunum_1.istand;
    s_rsne(&io___15);
    io___16.ciunit = lunum_1.irun;
    s_rsne(&io___16);
    cl__1.cerr = 0;
    cl__1.cunit = lunum_1.istand;
    cl__1.csta = 0;
    f_clos(&cl__1);
    cl__1.cerr = 0;
    cl__1.cunit = lunum_1.irun;
    cl__1.csta = 0;
    f_clos(&cl__1);
/*  Disable Older OPAL EOS's if a newer one is specified */
    if (opaleos_1.lopale06) {
	opaleos_1.lopale01 = FALSE_;
	opaleos_1.lopale = FALSE_;
    }
    if (opaleos_1.lopale01) {
	opaleos_1.lopale = FALSE_;
    }
/* 3/09 Disable older Alexander opacities if a newer one is specified */
    if (newopac_1.lalex06) {
	newopac_1.lalex95 = FALSE_;
	newopac_1.lkur90 = FALSE_;
    }
    if (newopac_1.lalex95) {
	newopac_1.lkur90 = FALSE_;
    }
    o__1.oerr = 0;
    o__1.ounit = luout_1.istor;
    o__1.ofnmlen = 256;
    o__1.ofnm = lufnm_1.fstor;
    o__1.orl = 0;
    o__1.osta = "UNKNOWN";
    o__1.oacc = 0;
    o__1.ofm = "FORMATTED";
    o__1.oblnk = 0;
    f_open(&o__1);
    al__1.aerr = 0;
    al__1.aunit = luout_1.istor;
    f_rew(&al__1);
    o__1.oerr = 0;
    o__1.ounit = luout_1.ishort;
    o__1.ofnmlen = 256;
    o__1.ofnm = lufnm_1.fshort;
    o__1.orl = 0;
    o__1.osta = "UNKNOWN";
    o__1.oacc = 0;
    o__1.ofm = "FORMATTED";
    o__1.oblnk = 0;
    f_open(&o__1);
    al__1.aerr = 0;
    al__1.aunit = luout_1.ishort;
    f_rew(&al__1);
    if (ccout2_1.ltrack) {
	o__1.oerr = 0;
	o__1.ounit = luout_1.itrack;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.ftrack;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
	al__1.aerr = 0;
	al__1.aunit = luout_1.itrack;
	f_rew(&al__1);
    }
/* SNU OUTPUT */
    if (neweng_1.lsnu) {
	o__1.oerr = 0;
	o__1.ounit = lunum_1.isnu;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.fsnu;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
	al__1.aerr = 0;
	al__1.aunit = lunum_1.isnu;
	f_rew(&al__1);
    }
    if (ccout2_1.ldebug) {
	o__1.oerr = 0;
	o__1.ounit = luout_1.idebug;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.fdebug;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
    }
/* MHP 10/02 LBNIN never set, ignore loop */
/*      IF (.NOT.LBNIN) THEN */
    o__1.oerr = 0;
    o__1.ounit = lunum_1.ifirst;
    o__1.ofnmlen = 256;
    o__1.ofnm = lufnm_1.ffirst;
    o__1.orl = 0;
    o__1.osta = "OLD";
    o__1.oacc = 0;
    o__1.ofm = "FORMATTED";
    o__1.oblnk = 0;
    f_open(&o__1);
/*      END IF */
    o__1.oerr = 0;
    o__1.ounit = luout_1.ilast;
    o__1.ofnmlen = 256;
    o__1.ofnm = lufnm_1.flast;
    o__1.orl = 0;
    o__1.osta = "UNKNOWN";
    o__1.oacc = 0;
    o__1.ofm = "FORMATTED";
    o__1.oblnk = 0;
    f_open(&o__1);
    o__1.oerr = 0;
    o__1.ounit = luout_1.imodpt;
    o__1.ofnmlen = 256;
    o__1.ofnm = lufnm_1.fmodpt;
    o__1.orl = 0;
    o__1.osta = "UNKNOWN";
    o__1.oacc = 0;
    o__1.ofm = "FORMATTED";
    o__1.oblnk = 0;
    f_open(&o__1);
/*     OPEN ALL PULSE FILES */
    if (pulse_1.lpulse) {
	o__1.oerr = 0;
	o__1.ounit = lunum_1.iopmod;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.fpmod;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = lunum_1.iopenv;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.fpenv;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = lunum_1.iopatm;
	o__1.ofnmlen = 256;
	o__1.ofnm = lufnm_1.fpatm;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
    }
/* MHP 6/98 */
    if (monte_1.lmonte) {
	o__1.oerr = 0;
	o__1.ounit = iomonte_1.imonte1;
	o__1.ofnmlen = 256;
	o__1.ofnm = iomonte_1.fmonte1;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = iomonte_1.imonte2;
	o__1.ofnmlen = 256;
	o__1.ofnm = iomonte_1.fmonte2;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (chrone_1.liso) {
	o__1.oerr = 0;
	o__1.ounit = chrone_1.iiso;
	o__1.ofnmlen = 256;
	o__1.ofnm = chrone_1.fiso;
	o__1.orl = 0;
	o__1.osta = "UNKNOWN";
	o__1.oacc = 0;
	o__1.ofm = "FORMATTED";
	o__1.oblnk = 0;
	f_open(&o__1);
    }
/* DBG WRITE OUT ENTIRE NAMELIST TO ISHORT */
    io___17.ciunit = luout_1.ishort;
    s_wsne(&io___17);
    io___18.ciunit = luout_1.ishort;
    s_wsne(&io___18);
    if (dpmix_1.lsemic) {
	if (dpmix_1.lovstc || dpmix_1.lovste || dpmix_1.lovstm) {
	    io___19.ciunit = luout_1.ishort;
	    s_wsfe(&io___19);
	    do_fio(&c__1, (char *)&dpmix_1.lsemic, (ftnlen)sizeof(logical));
	    do_fio(&c__1, (char *)&dpmix_1.lovste, (ftnlen)sizeof(logical));
	    do_fio(&c__1, (char *)&dpmix_1.lovstc, (ftnlen)sizeof(logical));
	    do_fio(&c__1, (char *)&dpmix_1.lovstm, (ftnlen)sizeof(logical));
	    e_wsfe();
	    s_stop("", (ftnlen)0);
	}
    }
    io___20.ciunit = luout_1.ishort;
    s_wsfe(&io___20);
    for (i__ = 1; i__ <= 12; ++i__) {
	do_fio(&c__1, (char *)&ctol_1.hpttol[i__ - 1], (ftnlen)sizeof(
		doublereal));
    }
    do_fio(&c__1, (char *)&dpmix_1.alphae, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&dpmix_1.alphac, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&rot_1.linstb, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&cwind_1.ljdot0, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&alfa, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&fk, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&vmult_1.fw, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&vmult_1.fc, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&vmult_1.fo, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&vmult_1.fmu, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&vmult_1.rcrit, (ftnlen)sizeof(doublereal));
    e_wsfe();
    ctlim_1.tenv = (ctlim_1.tenv0 + ctlim_1.tenv1) * .5;
    if (rot_1.lrot) {
	cenv_1.lnew0 = TRUE_;
	if (rot_1.walpcz < -2.) {
	    rot_1.walpcz = -2.;
	}
	if (rot_1.walpcz > 0.) {
	    rot_1.walpcz = 0.;
	}
/* SET UP COEFFICIENTS FOR ANGULAR MOMENTUM LOSS VIA WINDS. */
/* GIVEN THE INDEX ALFA, THE FORMULA FOR JDOT IS */
/* JDOT = FK*2.036D33*1.452D9**ALFA*(MDOT/1.0D-14)**(1-2ALFA/3) */
/* *OMEGA**(1+4ALFA/3)*(R/RSUN)**(2-ALFA)*(M/MSUN)**-ALFA/3 */
/* EXMD = EXPONENT OF MDOT TERM; EXW SAME FOR OMEGA;EXR FOR R;EXM FOR M. */
/* FK IS A FUDGE FACTOR,SET TO 1 TO REPRODUCE THE OBSERVED SOLAR ANGULAR */
/* MOMENTUM LOSS. */
	cc13 = .33333333333333331;
	cc23 = .66666666666666663;
	cwind_1.factor = fk * 2.036e33 * pow_dd(&c_b56, &alfa);
	cwind_1.exmd = 1. - cc23 * alfa;
	cwind_1.exw = cc23 * 2. * alfa + 1.;
	cwind_1.exr = 2. - alfa;
	cwind_1.exm = -cc13 * alfa;
    }
    cln = log(10.);
    if (newcmp_1.lnewcp) {
	newcmp_1.lrel = TRUE_;
	if (s_cmp(atmp, "ABS", (ftnlen)3, (ftnlen)3) == 0) {
	    newcmp_1.lrel = FALSE_;
	}
/* DECIDE WHICH ELEMENT IN ARRAY HCOMP TO BE RESCALED */
/* USING CHARACTER ARRAY AID AND INPUT CHARACTER VARIABLE ANEWCP */
	for (i__ = 1; i__ <= 12; ++i__) {
	    if (s_cmp(newcmp_1.anewcp, aid + (i__ - 1) * 3, (ftnlen)3, (
		    ftnlen)3) == 0) {
/* INEWCP IS THE INDEX OF THE ELEMENT BEING ALTERED */
		newcmp_1.inewcp = i__ + 3;
		goto L30;
	    }
/* L10: */
	}
/* ANEWCP NOT A RECOGNIZED ELEMENT */
	newcmp_1.lnewcp = FALSE_;
	io___26.ciunit = luout_1.ishort;
	s_wsfe(&io___26);
	do_fio(&c__1, newcmp_1.anewcp, (ftnlen)3);
	e_wsfe();
L30:
	;
    }
/* DBG 12/95 ENSURE CORRECT PARAMETERS FOR Z DIFFUSION */
    if (gravs3_1.ldifz) {
	gravst_1.ldify = TRUE_;
	gravs3_1.lthoul = TRUE_;
    }
/*     WRITE OUT RUN PARAMETERS. */
    io___27.ciunit = luout_1.ishort;
    s_wsfe(&io___27);
    do_fio(&c__1, (char *)&label_1.xenv0, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&label_1.zenv0, (ftnlen)sizeof(doublereal));
    e_wsfe();
    if (ccout1_1.npoint <= 0) {
	ccout1_1.npoint = 9999;
    }
    if (ccout2_1.npunch <= 0) {
	ccout2_1.npunch = 9999;
    }
    io___28.ciunit = luout_1.ishort;
    s_wsfe(&io___28);
    do_fio(&c__1, (char *)&ccout2_1.ldebug, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout2_1.lcorr, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout1_1.npoint, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ccout2_1.lmilne, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout2_1.ltrack, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout2_1.lstore, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout2_1.npunch, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ccout2_1.lstpch, (ftnlen)sizeof(logical));
    e_wsfe();
    if (ccout1_1.npenv <= 0) {
	ccout1_1.npenv = 9999;
    }
    io___29.ciunit = luout_1.ishort;
    s_wsfe(&io___29);
    do_fio(&c__1, (char *)&ccout_1.lscrib, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout_1.lpshll, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout_1.lconzo, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout_1.lchemo, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout_1.ljout, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout_1.lprtin, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&ccout1_1.npenv, (ftnlen)sizeof(integer));
    e_wsfe();
    io___30.ciunit = luout_1.ishort;
    s_wsfe(&io___30);
    do_fio(&c__1, (char *)&envgen_1.lenvg, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&envgen_1.atmstp, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&envgen_1.envstp, (ftnlen)sizeof(doublereal));
    e_wsfe();
    if (ccout1_1.nprt1 <= 0) {
	ccout1_1.nprt1 = 9999;
    }
    if (ccout1_1.nprt2 <= 0) {
	ccout1_1.nprt2 = 9999;
    }
    if (ccout1_1.nprtpt <= 0) {
	ccout1_1.nprtpt = 9999;
    }
    io___31.ciunit = luout_1.ishort;
    s_wsfe(&io___31);
    do_fio(&c__1, (char *)&ccout1_1.nprt1, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ccout1_1.nprt2, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ccout1_1.nprtpt, (ftnlen)sizeof(integer));
    e_wsfe();
/*     SPIT OUT NAMELIST VARIABLES TO ISHORT */
    io___32.ciunit = luout_1.ishort;
    s_wsfe(&io___32);
    for (j = 1; j <= 5; ++j) {
	do_fio(&c__1, (char *)&ctlim_1.tcut[j - 1], (ftnlen)sizeof(doublereal)
		);
    }
    do_fio(&c__1, (char *)&ctlim_1.tscut, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&ctlim_1.tenv0, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&ctlim_1.tenv1, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&ctlim_1.tgcut, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___34.ciunit = luout_1.ishort;
    s_wsfe(&io___34);
    do_fio(&c__1, (char *)&intatm_1.atmerr, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&intatm_1.atmmax, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&intatm_1.atmd0, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&intenv_1.enverr, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&intenv_1.envmax, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&intenv_1.envmin, (ftnlen)sizeof(doublereal));
    e_wsfe();
/* MHP 10/02 obsolete variables removed */
/*      WRITE(ISHORT,35) NIATM,ATMERR,ATMMAX,ATMD0,NIENV,ENVERR,ENVMAX, */
/*     *ENVMIN */
/*     *1'/3X,'CURRENT',7X,I3,3(1PE10.2),7X,I3,3(1PE10.2)) */
    io___35.ciunit = luout_1.ishort;
    s_wsfe(&io___35);
    do_fio(&c__1, (char *)&cenv_1.tridt, (ftnlen)sizeof(doublereal));
    d__1 = cenv_1.tridl / cenv_1.tridt / cenv_1.tridl;
    do_fio(&c__1, (char *)&d__1, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___36.ciunit = luout_1.ishort;
    s_wsfe(&io___36);
    for (j = 1; j <= 2; ++j) {
	do_fio(&c__1, (char *)&ctol_1.htoler[j * 5 - 1], (ftnlen)sizeof(
		doublereal));
    }
    for (j = 1; j <= 2; ++j) {
	for (i__ = 1; i__ <= 4; ++i__) {
	    do_fio(&c__1, (char *)&ctol_1.htoler[i__ + j * 5 - 6], (ftnlen)
		    sizeof(doublereal));
	}
    }
    e_wsfe();
    io___37.ciunit = luout_1.ishort;
    s_wsfe(&io___37);
    for (j = 1; j <= 8; ++j) {
	do_fio(&c__1, (char *)&ctol_1.hpttol[j - 1], (ftnlen)sizeof(
		doublereal));
    }
    e_wsfe();
    io___38.ciunit = luout_1.ishort;
    s_wsfe(&io___38);
    do_fio(&c__1, (char *)&newcmp_1.lnewcp, (ftnlen)sizeof(logical));
    do_fio(&c__1, newcmp_1.anewcp, (ftnlen)3);
    do_fio(&c__1, (char *)&newcmp_1.lrel, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&newcmp_1.xnewcp, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___39.ciunit = luout_1.ishort;
    s_wsfe(&io___39);
    do_fio(&c__1, (char *)&rot_1.acfpft, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&rot_1.itfp1, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&rot_1.itfp2, (ftnlen)sizeof(integer));
    e_wsfe();
    io___40.ciunit = luout_1.ishort;
    s_wsfe(&io___40);
    do_fio(&c__1, (char *)&ctol_1.niter1, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ctol_1.niter2, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&ctol_1.fcorr0, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&ctol_1.fcorri, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___41.ciunit = luout_1.ishort;
    s_wsfe(&io___41);
    for (i__ = 1; i__ <= 3; ++i__) {
	do_fio(&c__1, (char *)&ctlim_1.atime[i__ - 1], (ftnlen)sizeof(
		doublereal));
    }
    do_fio(&c__1, (char *)&ctlim_1.atime[6], (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___42.ciunit = luout_1.ishort;
    s_wsfe(&io___42);
    for (i__ = 4; i__ <= 6; ++i__) {
	do_fio(&c__1, (char *)&ctlim_1.atime[i__ - 1], (ftnlen)sizeof(
		doublereal));
    }
    e_wsfe();
    io___43.ciunit = luout_1.ishort;
    s_wsfe(&io___43);
    do_fio(&c__1, (char *)&heflsh_1.lkuthe, (ftnlen)sizeof(logical));
    e_wsfe();
    io___44.ciunit = luout_1.ishort;
    s_wsfe(&io___44);
    do_fio(&c__1, (char *)&const3_1.cmixl, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&dpmix_1.dpenv, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&dpmix_1.lovstc, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&dpmix_1.alphac, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&dpmix_1.lovste, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&dpmix_1.alphae, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___45.ciunit = luout_1.ishort;
    s_wsfe(&io___45);
    do_fio(&c__1, (char *)&cenv_1.lnew0, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&flag_1.lexcom, (ftnlen)sizeof(logical));
    e_wsfe();
    io___46.ciunit = luout_1.ishort;
    s_wsfe(&io___46);
    do_fio(&c__1, (char *)&rot_1.lrot, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&rot_1.walpcz, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&rot_1.linstb, (ftnlen)sizeof(logical));
    e_wsfe();
    if (atmos_1.kttau == 0) {
	io___47.ciunit = luout_1.ishort;
	s_wsfe(&io___47);
	e_wsfe();
    } else if (atmos_1.kttau == 1) {
	io___48.ciunit = luout_1.ishort;
	s_wsfe(&io___48);
	e_wsfe();
    } else if (atmos_1.kttau == 2) {
	io___49.ciunit = luout_1.ishort;
	s_wsfe(&io___49);
	e_wsfe();
    } else if (atmos_1.kttau == 3) {
	io___50.ciunit = luout_1.ishort;
	s_wsfe(&io___50);
	e_wsfe();
    } else if (atmos_1.kttau == 4) {
	io___51.ciunit = luout_1.ishort;
	s_wsfe(&io___51);
	e_wsfe();
    }
/* DBG PULSE */
    if (pulse_1.lpulse) {
	io___52.ciunit = luout_1.ishort;
	s_wsfe(&io___52);
	e_wsfe();
    }
    if (nwlaol_1.lpurez) {
	io___53.ciunit = luout_1.ishort;
	s_wsle(&io___53);
	do_lio(&c__9, &c__1, " USING PURE C AND N OPACITY TABLES", (ftnlen)34)
		;
	e_wsle();
    }
    io___54.ciunit = luout_1.imodpt;
    s_wsfe(&io___54);
    do_fio(&c__1, desc_1.descrip, (ftnlen)256);
    do_fio(&c__1, desc_1.descrip + 256, (ftnlen)256);
    e_wsfe();
    io___55.ciunit = luout_1.ishort;
    s_wsfe(&io___55);
    do_fio(&c__1, desc_1.descrip, (ftnlen)256);
    do_fio(&c__1, desc_1.descrip + 256, (ftnlen)256);
    e_wsfe();
    if (ccout2_1.ltrack) {
	io___56.ciunit = luout_1.itrack;
	s_wsfe(&io___56);
	do_fio(&c__1, desc_1.descrip, (ftnlen)256);
	do_fio(&c__1, desc_1.descrip + 256, (ftnlen)256);
	e_wsfe();
    }
    io___57.ciunit = luout_1.ishort;
    s_wsfe(&io___57);
    e_wsfe();
/*     INTERPRET RUN FROM SEQUENCE OF "KIND" CARDS */
    io___58.ciunit = luout_1.ishort;
    s_wsfe(&io___58);
    e_wsfe();
    ckind_1.lfirst[0] = TRUE_;
/*     RUN LOOP */
    i__1 = ckind_1.numrun;
    for (nkind = 1; nkind <= i__1; ++nkind) {
/* READ IN NMODLS AND MODEL SOURCE(MEMORY OR FIRST MODEL)-SAME FOR ALL */
	ckind_1.iresca[nkind - 1] = kindrn[nkind - 1];
	if (kindrn[nkind - 1] == 1) {
/* EVOLVE CARD */
	    sett_1.lendag[nkind - 1] = sett_1.endage[nkind - 1] > 0.;
	    sett_1.lsetdt[nkind - 1] = sett_1.setdt[nkind - 1] > 0.;
	    if (ckind_1.nmodls[nkind - 1] > 0) {
		if (ckind_1.lfirst[nkind - 1]) {
		    io___60.ciunit = luout_1.iowr;
		    s_wsfe(&io___60);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			    sizeof(integer));
		    e_wsfe();
		    io___61.ciunit = luout_1.ishort;
		    s_wsfe(&io___61);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			    sizeof(integer));
		    e_wsfe();
		} else {
		    io___62.ciunit = luout_1.iowr;
		    s_wsfe(&io___62);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			    sizeof(integer));
		    e_wsfe();
		    io___63.ciunit = luout_1.ishort;
		    s_wsfe(&io___63);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			    sizeof(integer));
		    e_wsfe();
		}
		if (sett_1.lendag[nkind - 1] || sett_1.lsetdt[nkind - 1]) {
		    io___64.ciunit = luout_1.iowr;
		    s_wsfe(&io___64);
		    do_fio(&c__1, (char *)&sett_1.lendag[nkind - 1], (ftnlen)
			    sizeof(logical));
		    do_fio(&c__1, (char *)&sett_1.lsetdt[nkind - 1], (ftnlen)
			    sizeof(logical));
		    do_fio(&c__1, (char *)&sett_1.endage[nkind - 1], (ftnlen)
			    sizeof(doublereal));
		    do_fio(&c__1, (char *)&sett_1.setdt[nkind - 1], (ftnlen)
			    sizeof(doublereal));
		    e_wsfe();
		    io___65.ciunit = luout_1.ishort;
		    s_wsfe(&io___65);
		    do_fio(&c__1, (char *)&sett_1.lendag[nkind - 1], (ftnlen)
			    sizeof(logical));
		    do_fio(&c__1, (char *)&sett_1.lsetdt[nkind - 1], (ftnlen)
			    sizeof(logical));
		    do_fio(&c__1, (char *)&sett_1.endage[nkind - 1], (ftnlen)
			    sizeof(doublereal));
		    do_fio(&c__1, (char *)&sett_1.setdt[nkind - 1], (ftnlen)
			    sizeof(doublereal));
		    e_wsfe();
		}
	    }
	} else if (kindrn[nkind - 1] == 2) {
/* RESCALE CARD:  RESCALE STARTING MODEL */
/* QUANTITIES TO BE RESCALED STORED IN ARRAY RESCALE(4,50) */
/* WHERE THE ELEMENTS MASS,X,Z,CORE MASS ARE STORED IN ORDER */
	    ckind_1.rescal[(nkind << 2) - 4] = rsclm[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 3] = rsclx[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 2] = rsclz[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 1] = rsclcm[nkind - 1];
	    if (ckind_1.nmodls[nkind - 1] > 0) {
		if (ckind_1.lfirst[nkind - 1]) {
		    io___66.ciunit = luout_1.iowr;
		    s_wsfe(&io___66);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    e_wsfe();
		    io___67.ciunit = luout_1.ishort;
		    s_wsfe(&io___67);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    e_wsfe();
		} else {
		    io___68.ciunit = luout_1.iowr;
		    s_wsfe(&io___68);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    e_wsfe();
		    io___69.ciunit = luout_1.ishort;
		    s_wsfe(&io___69);
		    do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		    e_wsfe();
		}
		io___70.ciunit = luout_1.iowr;
		s_wsfe(&io___70);
		do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			sizeof(integer));
		for (i__ = 1; i__ <= 4; ++i__) {
		    do_fio(&c__1, (char *)&ckind_1.rescal[i__ + (nkind << 2) 
			    - 5], (ftnlen)sizeof(doublereal));
		}
		e_wsfe();
		io___71.ciunit = luout_1.ishort;
		s_wsfe(&io___71);
		do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)
			sizeof(integer));
		for (i__ = 1; i__ <= 4; ++i__) {
		    do_fio(&c__1, (char *)&ckind_1.rescal[i__ + (nkind << 2) 
			    - 5], (ftnlen)sizeof(doublereal));
		}
		e_wsfe();
	    }
	} else if (kindrn[nkind - 1] == 3) {
/* RESCALE AND EVOLVE CARD:  RESCALE STARTING MODEL */
/* QUANTITIES TO BE RESCALED STORED IN ARRAY RESCALE(4,50) */
/* WHERE THE ELEMENTS MASS,X,Z,CORE MASS ARE STORED IN ORDER */
	    ckind_1.rescal[(nkind << 2) - 4] = rsclm[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 3] = rsclx[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 2] = rsclz[nkind - 1];
	    ckind_1.rescal[(nkind << 2) - 1] = rsclcm[nkind - 1];
	    if (ckind_1.lfirst[nkind - 1]) {
		io___72.ciunit = luout_1.iowr;
		s_wsfe(&io___72);
		do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		e_wsfe();
		io___73.ciunit = luout_1.ishort;
		s_wsfe(&io___73);
		do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		e_wsfe();
	    } else {
		io___74.ciunit = luout_1.iowr;
		s_wsfe(&io___74);
		do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		e_wsfe();
		io___75.ciunit = luout_1.ishort;
		s_wsfe(&io___75);
		do_fio(&c__1, (char *)&nkind, (ftnlen)sizeof(integer));
		e_wsfe();
/* L551: */
	    }
	    io___76.ciunit = luout_1.iowr;
	    s_wsfe(&io___76);
	    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)sizeof(
		    integer));
	    for (i__ = 1; i__ <= 4; ++i__) {
		do_fio(&c__1, (char *)&ckind_1.rescal[i__ + (nkind << 2) - 5],
			 (ftnlen)sizeof(doublereal));
	    }
	    e_wsfe();
	    io___77.ciunit = luout_1.ishort;
	    s_wsfe(&io___77);
	    do_fio(&c__1, (char *)&ckind_1.nmodls[nkind - 1], (ftnlen)sizeof(
		    integer));
	    for (i__ = 1; i__ <= 4; ++i__) {
		do_fio(&c__1, (char *)&ckind_1.rescal[i__ + (nkind << 2) - 5],
			 (ftnlen)sizeof(doublereal));
	    }
	    e_wsfe();
	}
	if (ckind_1.rescal[(nkind << 2) - 2] >= 0.) {
	    comp_1.zenv = ckind_1.rescal[(nkind << 2) - 2];
	}
/* L1000: */
    }
    return 0;
} /* parmin_ */

