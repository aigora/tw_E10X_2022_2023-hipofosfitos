#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Prototipos de funciones

void identificarse();
float calcularMedia(float arr[], float n);
float calcularModa(float arr[], float n); 
float calcularVarianza(float arr[], float n); 




int main()
{
    //El usuario se registra

    identificarse();
     

    //Se abre el archivo, se escanea, se imprime y se cierra

	FILE *pf;
	pf = fopen ("/Users/luciarcoss/Desktop/generacion_por_tecnologias_21_22_puntos_simplificado.csv", "r");
	
	if (pf == NULL)
	{
		printf("El archivo no se abre correctamente\n");
	}
	else
	{
	    printf("El archivo si se abre correctamente\n");
        printf("Los datos del archivo son:\n")	;
	}


    printf("\n");


    char chh[25], coma[25], 
    hd[25], punto[25], 
    bmeo[25], coma1[25], 
    nclear[25], coma2[25], 
    crbon[25], coma3[25],
    mtres[25], coma4[25], 
    tgas[25], coma5[25], 
    vapor[25], coma6[25], 
    comb[25], coma7[25], 
    hdeoli[25], coma8[25],
    eoli[24], coma9[25],
    solarft[25], coma10[25],
    solarter[25], coma20[25],
    otras[25], coma11[25],
    cogenera[25], coma12[25],
    residuosno[35], coma13[25], residuosno1[35], residuosno2[35],
    residuossi[25], coma14[25],
    genera[25], coma15[25];
    
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, 
    aa, ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, an, ao, ap, aq, ar, as, at, au, av, aw, ax, 
    ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn, bo, bp, bq, br, bs, bt, bu, bv, bw, bx, by, bz, 
    bba, bbb, bbc, bbd, bbe, bbf, bbg, bbh, bbi, bbj, bbk, bbl, bbm, bbn, bbo, bbp, bbq, bbr, bbs, bbt, bbu, bbv,  
    ca, cb, cc, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, 
    cca, ccb, ccc, ccd, cce, ccf, ccg, cch, cci, ccj, cck, ccl, ccm, ccn, cco, ccp, ccq, ccr, ccs, cct, ccu, ccv,  
    da, db, dc, dd, de, df, dg, dh, di, dj, dk, dl, dm, dn, doo, dp, dq, dr, ds, dt, du, dv, dw, dx, dy, dz, 
    dda, ddb, ddc, ddd, dde, ddf, ddg, ddh, ddi, ddj, ddk, ddl, ddm, ddn, ddo, ddp, ddq, ddr, dds, ddt, ddu, ddv,
    ea, eb, ec, ed, ee, ef, eg, eh, ei, ej, ek, el, em, en, eo, ep, eq, er, es, et, eu, ev, ew, ex, ey, ez, 
    eea, eeb, eec, eed, eee, eef, eeg, eeh, eei, eej, eek, eel, eem, een, eeo, eep, eeq, eer, ees, eet, eeu, eev,
    fa, fb, fc, fd, fe, ff, fg, fh, fi, fj, fk, fl, fm, fn, fo, fp, fq, fr, fs, ft, fu, fv, fw, fx, fy, fz, 
    ffa, ffb, ffc, ffd, ffe, fff, ffg, ffh, ffi, ffj, ffk, ffl, ffm, ffn, ffo, ffp, ffq, ffr, ffs, fft, ffu, ffv,
    ga, gb, gc, gd, ge, gf, gg, gh, gi, gj, gk, gl, gm, gn, go, gp, gq, gr, gs, gt, gu, gv, gw, gx, gy, gz, 
    gga, ggb, ggc, ggd, gge, ggf, ggg, ggh, ggi, ggj, ggk, ggl, ggm, ggn, ggo, ggp, ggq, ggr, ggs, ggt, ggu, ggv,
    ha, hb, hc, hdd, he, hf, hg, hh, hi, hj, hk, hl, hm, hn, ho, hp, hq, hr, hs, ht, hu, hv, hw, hx, hy, hz, 
    hha, hhb, hhc, hhd, hhe, hhf, hhg, hhh, hhi, hhj, hhk, hhl, hhm, hhn, hho, hhp, hhq, hhr, hhs, hht, hhu, hhv,
    ia, ib, ic, id, ie, iff, ig, ih, ii, ij, ik, il, im, in, io, ip, iq, ir, is, it, iu, iv, iw, ix, iy, iz, 
    iia, iib, iic, iid, iie, iif, iig, iih, iii, iij, iik, iil, iim, iin, iio, iip, iiq, iir, iis, iit, iiu, iiv,
    ja, jb, jc, jd, je, jf, jg, jh, ji, jj, jk, jl, jm, jn, jo, jp, jq, jr, js, jt, ju, jv, jw, jx, jy, jz, 
    jja, jjb, jjc, jjd, jje, jjf, jjg, jjh, jji, jjj, jjk, jjl, jjm, jjn, jjo, jjp, jjq, jjr, jjs, jjt, jju, jjv,
    ka, kb, kc, kd, ke, kf, kg, kh, ki, kj, kk, kl, km, kn, ko, kp, kq, kr, ks, kt, ku, kv, kw, kx, ky, kz, 
    kka, kkb, kkc, kkd, kke, kkf, kkg, kkh, kki, kkj, kkk, kkl, kkm, kkn, kko, kkp, kkq, kkr, kks, kkt, kku, kkv,
    la, lb, lc, ld, le, lf, lg, lh, li, lj, lk, ll, lm, ln, lo, lp, lq, lr, ls, lt, lu, lv, lw, lx, ly, lz, 
    lla, llb, llc, lld, lle, llf, llg, llh, lli, llj, llk, lll, llm, lln, llo, llp, llq, llr, lls, llt, llu, llv,
    ma, mb, mc, md, me, mf, mg, mh, mi, mj, mk, ml, mm, mn, mo, mp, mq, mr, ms, mt, mu, mv, mw, mx, my, mz, 
    mma, mmb, mmc, mmd, mme, mmf, mmg, mmh, mmi, mmj, mmk, mml, mmm, mmn, mmo, mmp, mmq, mmr, mms, mmt, mmu, mmv,
    na, nb, nc, nd, ne, nf, ng, nh, ni, nj, nk, nl, nm, nn, no, np, nq, nr, ns, nt, nu, nv, nw, nx, ny, nz, 
    nna, nnb, nnc, nnd, nne, nnf, nng, nnh, nni, nnj, nnk, nnl, nnm, nnn, nno, nnp, nnq, nnr, nns, nnt, nnu, nnv,
    oa, ob, oc, od, oe, of, og, oh, oi, oj, ok, ol, om, on, oo, op, oq, or, os, ot, ou, ov, ow, ox, oy, oz, 
    ooa, oob, ooc, ood, ooe, oof, oog, ooh, ooi, ooj, ook, ool, oom, oon, ooo, oop, ooq, oor, oos, oot, oou, oov,
    pa, pb, pc, pd, pe, pff, pg, ph, pi, pj, pk, pl, pm, pn, po, pp, pq, pr, ps, pt, pu, pv, pw, px, py, pz, 
    ppa, ppb, ppc, ppd, ppe, ppf, ppg, pph, ppi, ppj, ppk, ppl, ppm, ppn, ppo, ppp, ppq, ppr, pps, ppt, ppu, ppv, 
    qa, qb, qc, qd, qe, qf, qg, qh, qi, qj, qk, ql, qm, qn, qo, qp, qq, qr, qs, qt, qu, qv, qw, qx, qy, qz, 
    qqa, qqb, qqc, qqd, qqe, qqf, qqg, qqh, qqi, qqj, qqk, qql, qqm, qqn, qqo, qqp, qqq, qqr, qqs, qqt, qqu, qqv,
    lxa, lxb, lxc, lxd, lxe, lxf, lxg, lxh, lxi, lxj, lxk, lxl, lxm, lxn, lxo, lxp, lxq, lxr, lxs, lxt, lxu, lxv, lxw, lxx, lxy, lxz, 
    llxa, llxb, llxc, llxd, llxe, llxf, llxg, llxh, llxi, llxj, llxk, llxl, llxm, llxn, llxo, llxp, llxq, llxr, llxs, llxt, llxu, llxv;



	fscanf(pf,"%[^,]", chh);
	printf("%s,", chh);

    fscanf(pf,"%c",coma);
	//printf("%c",coma);	

    fscanf(pf,"%d-%d,",&a,&b);	
    printf("%d-%d,",a,b);

    fscanf(pf,"%d-%d,",&c,&d);
	printf("%d-%d,",c,d);

    fscanf(pf,"%d-%d,", &e,&f);
    printf("%d-%d,",e,f);

    fscanf(pf,"%d-%d,", &g,&h);
    printf("%d-%d,",g,h);
    
    fscanf(pf,"%d-%d,", &i,&j);
    printf("%d-%d,",i,j);

    fscanf(pf,"%d-%d,", &k,&l);
    printf("%d-%d,",k,l);

    fscanf(pf,"%d-%d,", &m,&n);
    printf("%d-%d,",m,n);

    fscanf(pf,"%d-%d,", &o,&p);
    printf("%d-%d,",o,p);

    fscanf(pf,"%d-%d,", &q,&r);
    printf("%d-%d,",q,r);

    fscanf(pf,"%d-%d,", &s,&t);
    printf("%d-%d,",s,t);

    fscanf(pf,"%d-%d,", &u,&v);
    printf("%d-%d,",u,v);

    fscanf(pf,"%d-%d,", &w,&x);
    printf("%d-%d,",w,x);

    fscanf(pf,"%d-%d,", &aa,&ab);
    printf("%d-%d,",aa,ab);

    fscanf(pf,"%d-%d,", &ac,&ad);
    printf("%d-%d,",ac,ad);

    fscanf(pf,"%d-%d,", &ae,&af);
    printf("%d-%d,",ae,af);

    fscanf(pf,"%d-%d,", &ag,&ah);
    printf("%d-%d,",ag,ah);

    fscanf(pf,"%d-%d,", &ai,&aj);
    printf("%d-%d,",ai,aj);

    fscanf(pf,"%d-%d,", &ak,&al);
    printf("%d-%d,",ak,al);

    fscanf(pf,"%d-%d,", &am,&an);
    printf("%d-%d,",am,an);

    fscanf(pf,"%d-%d,", &ao,&ap);
    printf("%d-%d,",ao,ap);

    fscanf(pf,"%d-%d,", &aq,&ar);
    printf("%d-%d,",aq,ar);

    fscanf(pf,"%d-%d,", &as,&at);
    printf("%d-%d,",as,at);

    fscanf(pf,"%d-%d,", &au,&av);
    printf("%d-%d,",au,av);

    fscanf(pf,"%d-%d", &aw,&ax);
    printf("%d-%d", aw,ax);


    printf("\n");


    fscanf(pf,"%[^,]", hd);
	printf("%s,", hd);

    fscanf(pf,"%c",punto);

    fscanf(pf,"%d.%d,", &ba,&bb);
    printf("%d.%d,",ba,bb);

    fscanf(pf,"%d.%d,", &bc,&bd);
    printf("%d.%d,",bc,bd);

    fscanf(pf,"%d.%d,", &be,&bf);
    printf("%d.%d,",be,bf);

    fscanf(pf,"%d.%d,", &bg,&bh);
    printf("%d.0%d,",bg,bh);

    fscanf(pf,"%d.%d,", &bi,&bj);
    printf("%d.%d,",bi,bj);

    fscanf(pf,"%d.%d,", &bk,&bl);
    printf("%d.%d,",bk,bl);

    fscanf(pf,"%d.%d,", &bm, &bn);
    printf("%d.%d,",bm,bn);

    fscanf(pf,"%d.%d,", &bo,&bp);
    printf("%d.%d,",bo,bp);

    fscanf(pf,"%d.%d,", &bq,&br);
    printf("%d.%d,",bq,br);

    fscanf(pf,"%d.%d,", &bs,&bt);
    printf("%d.%d,",bs,bt);

    fscanf(pf,"%d.%d,", &bu,&bv);
    printf("%d.%d,",bu,bv);

    fscanf(pf,"%d.%d,", &bw,&bx);
    printf("%d.%d,",bw,bx);

    fscanf(pf,"%d.%d,", &by,&bz);
    printf("%d.%d,",by,bz);

    fscanf(pf,"%d.%d,", &bba,&bbb);
    printf("%d.%d,",bba,bbb);

    fscanf(pf,"%d.%d,", &bbc,&bbd);
    printf("%d.0%d,",bbc,bbd);

    fscanf(pf,"%d.%d,", &bbe,&bbf);
    printf("%d.%d,",bbe,bbf);

    fscanf(pf,"%d.%d,", &bbg,&bbh);
    printf("%d.%d,",bbg,bbh);

    fscanf(pf,"%d.%d,", &bbi,&bbj);
    printf("%d.%d,",bbi,bbj);

    fscanf(pf,"%d.%d,", &bbk,&bbl);
    printf("%d.%d,",bbk,bbl);

    fscanf(pf,"%d.%d,", &bbm,&bbn);
    printf("%d.%d,",bbm,bbn);

    fscanf(pf,"%d.%d,", &bbo,&bbp);
    printf("%d.%d,",bbo,bbp);

    fscanf(pf,"%d.%d,", &bbq,&bbr);
    printf("%d.%d,",bbq,bbr);

    fscanf(pf,"%d.%d,", &bbs,&bbt);
    printf("%d.%d,",bbs,bbt);

    fscanf(pf,"%d.%d", &bbu,&bbv);
    printf("%d.%d",bbu,bbv);


    printf("\n");


    fscanf(pf,"%[^,]", bmeo);
	printf("%s,", bmeo);

	fscanf(pf,"%c",coma1);

    fscanf(pf,"%d.%d,", &ca,&cb);
    printf("%d.%d,",ca,cb);

    fscanf(pf,"%d.%d,", &cc,&cd);
    printf("%d.%d,",cc,cd);

    fscanf(pf,"%d.%d,", &ce,&cf);
    printf("%d.%d,",ce,cf);

    fscanf(pf,"%d.%d,", &cg,&ch);
    printf("%d.%d,",cg,ch);

    fscanf(pf,"%d.%d,", &ci,&cj);
    printf("%d.%d,",ci,cj);

    fscanf(pf,"%d.%d,", &ck,&cl);
    printf("%d.%d,",ck,cl);

    fscanf(pf,"%d.%d,", &cm,&cn);
    printf("%d.%d,",cm,cn);

    fscanf(pf,"%d.%d,", &co,&cp);
    printf("%d.%d,",co,cp);

    fscanf(pf,"%d.%d,", &cq,&cr);
    printf("%d.%d,",cq,cr);

    fscanf(pf,"%d.%d,", &cs,&ct);
    printf("%d.%d,",cs,ct);

    fscanf(pf,"%d.%d,", &cu,&cv);
    printf("%d.%d,",cu,cv);

    fscanf(pf,"%d.%d,", &cw,&cx);
    printf("%d.%d,",cw,cx);

    fscanf(pf,"%d.%d,", &cy,&cz);
    printf("%d.%d,",cy,cz);

    fscanf(pf,"%d.%d,", &cca,&ccb);
    printf("%d.0%d,",cca,ccb);

    fscanf(pf,"%d.%d,", &ccc,&ccd);
    printf("%d.%d,",ccc,ccd);

    fscanf(pf,"%d.%d,", &cce,&ccf);
    printf("%d.%d,",cce,ccf);

    fscanf(pf,"%d.%d,", &ccg,&cch);
    printf("%d.%d,",ccg,cch);

    fscanf(pf,"%d.%d,", &cci,&ccj);
    printf("%d.%d,",cci,ccj);

    fscanf(pf,"%d.%d,", &cck,&ccl);
    printf("%d.%d,",cck,ccl);

    fscanf(pf,"%d.%d,", &ccm,&ccn);
    printf("%d.%d,",ccm,ccn);

    fscanf(pf,"%d.%d,", &cco,&ccp);
    printf("%d.%d,",cco,ccp);

    fscanf(pf,"%d.%d,", &ccq,&ccr);
    printf("%d.%d,",ccq,ccr);

    fscanf(pf,"%d.%d,", &ccs,&cct);
    printf("%d.%d,",ccs,cct);

    fscanf(pf,"%d.%d", &ccu,&ccv);
    printf("%d.%d",ccu,ccv);


    printf("\n");


    fscanf(pf,"%[^,]", nclear);
	printf("%s,", nclear);

    fscanf(pf,"%c",coma2);

    fscanf(pf,"%d.%d,", &da,&db);
    printf("%d.%d,",da,db);

    fscanf(pf,"%d.%d,", &dc,&dd);
    printf("%d.%d,",dc,dd);

    fscanf(pf,"%d.%d,", &de,&df);
    printf("%d.0%d,",de,df);

    fscanf(pf,"%d.%d,", &dg,&dh);
    printf("%d.%d,",dg,dh);

    fscanf(pf,"%d.%d,", &di,&dj);
    printf("%d.%d,",di,dj);

    fscanf(pf,"%d.%d,", &dk,&dl);
    printf("%d.%d,",dk,dl);

    fscanf(pf,"%d.%d,", &dm,&dn);
    printf("%d.%d,",dm,dn);

    fscanf(pf,"%d.%d,", &doo,&dp);
    printf("%d.%d,",doo,dp);

    fscanf(pf,"%d.%d,", &dq,&dr);
    printf("%d.%d,",dq,dr);

    fscanf(pf,"%d.%d,", &ds,&dt);
    printf("%d.%d,",ds,dt);

    fscanf(pf,"%d.%d,", &du,&dv);
    printf("%d.%d,",du,dv);

    fscanf(pf,"%d.%d,", &dw,&dx);
    printf("%d.%d,",dw,dx);

    fscanf(pf,"%d.%d,", &dy,&dz);
    printf("%d.%d,",dy,dz);

    fscanf(pf,"%d.%d,", &dda,&ddb);
    printf("%d.0%d,",dda,ddb);

    fscanf(pf,"%d.%d,", &ddc,&ddd);
    printf("%d.%d,",ddc,ddd);

    fscanf(pf,"%d.%d,", &dde,&ddf);
    printf("%d.%d,",dde,ddf);

    fscanf(pf,"%d.%d,", &ddg,&ddh);
    printf("%d.%d,",ddg,ddh);

    fscanf(pf,"%d.%d,", &ddi,&ddj);
    printf("%d.%d,",ddi,ddj);

    fscanf(pf,"%d.%d,", &ddk,&ddl);
    printf("%d.%d,",ddk,ddl);

    fscanf(pf,"%d.%d,", &ddm,&ddn);
    printf("%d.%d,",ddm,ddn);

    fscanf(pf,"%d.%d,", &ddo,&ddp);
    printf("%d.%d,",ddo,ddp);

    fscanf(pf,"%d.%d,", &ddq,&ddr);
    printf("%d.%d,",ddq,ddr);

    fscanf(pf,"%d.%d,", &dds,&ddt);
    printf("%d.%d,",dds,ddt);

    fscanf(pf,"%d.%d", &ddu,&ddv);
    printf("%d.%d",ddu,ddv);



    printf("\n");


    fscanf(pf,"%[^,]", crbon);
	printf("%s,", crbon);

    fscanf(pf,"%c",coma3);

    fscanf(pf,"%d.%d,", &ea,&eb);
    printf("%d.%d,",ea,eb);

    fscanf(pf,"%d.%d,", &ec,&ed);
    printf("%d.%d,",ec,ed);

    fscanf(pf,"%d.%d,", &ee,&ef);
    printf("%d.%d,",ee,ef);

    fscanf(pf,"%d.%d,", &eg,&eh);
    printf("%d.%d,",eg,eh);

    fscanf(pf,"%d.%d,", &ei,&ej);
    printf("%d.%d,",ei,ej);

    fscanf(pf,"%d.%d,", &ek,&el);
    printf("%d.%d,",ek,el);

    fscanf(pf,"%d.%d,", &em,&en);
    printf("%d.%d,",em,en);

    fscanf(pf,"%d.%d,", &eo,&ep);
    printf("%d.%d,",eo,ep);

    fscanf(pf,"%d.%d,", &eq,&er);
    printf("%d.0%d,",eq,er);

    fscanf(pf,"%d.%d,", &es,&et);
    printf("%d.%d,",es,et);

    fscanf(pf,"%d.%d,", &eu,&ev);
    printf("%d.%d,",eu,ev);

    fscanf(pf,"%d.%d,", &ew,&ex);
    printf("%d.%d,",ew,ex);

    fscanf(pf,"%d.%d,", &ey,&ez);
    printf("%d.%d,",ey,ez);

    fscanf(pf,"%d.%d,", &eea,&eeb);
    printf("%d.%d,",eea,eeb);

    fscanf(pf,"%d.%d,", &eec,&eed);
    printf("%d.%d,",eec,eed);

    fscanf(pf,"%d.%d,", &eee,&eef);
    printf("%d.00%d,",eee,eef);

    fscanf(pf,"%d.%d,", &eeg,&eeh);
    printf("%d.%d,",eeg,eeh);

    fscanf(pf,"%d.%d,", &eei,&eej);
    printf("%d.%d,",eei,eej);

    fscanf(pf,"%d.%d,", &eek,&eel);
    printf("%d.%d,",eek,eel);

    fscanf(pf,"%d.%d,", &eem,&een);
    printf("%d.%d,",eem,een);

    fscanf(pf,"%d.%d,", &eeo,&eep);
    printf("%d.0%d,",eeo,eep);

    fscanf(pf,"%d.%d,", &eeq,&eer);
    printf("%d.%d,",eeq,eer);

    fscanf(pf,"%d.%d,", &ees,&eet);
    printf("%d.%d,",ees,eet);

    fscanf(pf,"%d.%d", &eeu,&eev);
    printf("%d.%d",eeu,eev);


    printf("\n");


    fscanf(pf,"%[^,]", mtres);
	printf("%s,", mtres);

    fscanf(pf,"%c",coma4);

    fscanf(pf,"%d.%d,", &fa,&fb);
    printf("%d.%d,",fa,fb);

    fscanf(pf,"%d.%d,", &fc,&fd);
    printf("%d.%d,",fc,fd);

    fscanf(pf,"%d.%d,", &fe,&ff);
    printf("%d.%d,",fe,ff);

    fscanf(pf,"%d.%d,", &fg,&fh);
    printf("%d.%d,",fg,fh);

    fscanf(pf,"%d.%d,", &fi,&fj);
    printf("%d.%d,",fi,fj);

    fscanf(pf,"%d.%d,", &fk,&fl);
    printf("%d.%d,",fk,fl);

    fscanf(pf,"%d.%d,", &fm,&fn);
    printf("%d.%d,",fm,fn);

    fscanf(pf,"%d.%d,", &fo,&fp);
    printf("%d.%d,",fo,fp);

    fscanf(pf,"%d.%d,", &fq,&fr);
    printf("%d.%d,",fq,fr);

    fscanf(pf,"%d.%d,", &fs,&ft);
    printf("%d.%d,",fs,ft);

    fscanf(pf,"%d.%d,", &fu,&fv);
    printf("%d.0%d,",fu,fv);

    fscanf(pf,"%d.%d,", &fw,&fx);
    printf("%d.%d,",fw,fx);

    fscanf(pf,"%d.%d,", &fy,&fz);
    printf("%d.%d,",fy,fz);

    fscanf(pf,"%d.%d,", &ffa,&ffb);
    printf("%d.%d,",ffa,ffb);

    fscanf(pf,"%d.%d,", &ffc,&ffd);
    printf("%d.%d,",ffc,ffd);

    fscanf(pf,"%d.%d,", &ffe,&fff);
    printf("%d.%d,",ffe,fff);

    fscanf(pf,"%d.%d,", &ffg,&ffh);
    printf("%d.%d,",ffg,ffh);

    fscanf(pf,"%d.%d,", &ffi,&ffj);
    printf("%d.%d,",ffi,ffj);

    fscanf(pf,"%d.%d,", &ffk,&ffl);
    printf("%d.%d,",ffk,ffl);

    fscanf(pf,"%d.%d,", &ffm,&ffn);
    printf("%d.%d,",ffm,ffn);

    fscanf(pf,"%d.%d,", &ffo,&ffp);
    printf("%d.0%d,",ffo,ffp);

    fscanf(pf,"%d.%d,", &ffq,&ffr);
    printf("%d.%d,",ffq,ffr);

    fscanf(pf,"%d.%d,", &ffs,&fft);
    printf("%d.%d,",ffs,fft);

    fscanf(pf,"%d.%d", &ffu,&ffv);
    printf("%d.%d",ffu,ffv);


    printf("\n");


    fscanf(pf,"%[^,]", tgas);
	printf("%s,", tgas);

	fscanf(pf,"%c",coma5);

    fscanf(pf,"%d.%d,", &ga,&gb);
    printf("%d.%d,",ga,gb);

    fscanf(pf,"%d.%d,", &gc,&gd);
    printf("%d.0%d,",gc,gd);

    fscanf(pf,"%d.%d,", &ge,&gf);
    printf("%d.%d,",ge,gf);

    fscanf(pf,"%d.%d,", &gg,&gh);
    printf("%d.%d,",gg,gh);

    fscanf(pf,"%d.%d,", &gi,&gj);
    printf("%d.%d,",gi,gj);

    fscanf(pf,"%d.%d,", &gk,&gl);
    printf("%d.%d,",gk,gl);

    fscanf(pf,"%d.%d,", &gm,&gn);
    printf("%d.%d,",gm,gn);

    fscanf(pf,"%d.%d,", &go,&gp);
    printf("%d.%d,",go,gp);

    fscanf(pf,"%d.%d,", &gq,&gr);
    printf("%d.%d,",gq,gr);

    fscanf(pf,"%d.%d,", &gs,&gt);
    printf("%d.%d,",gs,gt);

    fscanf(pf,"%d.%d,", &gu,&gv);
    printf("%d.0%d,",gu, gv);

    fscanf(pf,"%d.%d,", &gw,&gx);
    printf("%d.0%d,",gw,gx);

    fscanf(pf,"%d.%d,", &gy,&gz);
    printf("%d.%d,", gy,gz);

    fscanf(pf,"%d.%d,", &gga,&ggb);
    printf("%d.%d,", gga,ggb);

    fscanf(pf,"%d.%d,", &ggc,&ggd);
    printf("%d.%d,",ggc,ggd);

    fscanf(pf,"%d.%d,", &gge,&ggf);
    printf("%d.%d,",gge,ggf);

    fscanf(pf,"%d.%d,", &ggg,&ggh);
    printf("%d.%d,",ggg,ggh);

    fscanf(pf,"%d.%d,", &ggi,&ggj);
    printf("%d.%d,",ggi,ggj);

    fscanf(pf,"%d.%d,", &ggk,&ggl);
    printf("%d.%d,",ggk,ggl);

    fscanf(pf,"%d.%d,", &ggm,&ggn);
    printf("%d.%d,",ggm,ggn);

    fscanf(pf,"%d.%d,", &ggo,&ggp);
    printf("%d.%d,", ggo,ggp);

    fscanf(pf,"%d.%d,", &ggq,&ggr);
    printf("%d.%d,", ggq,ggr);

    fscanf(pf,"%d.%d,", &ggs,&ggt);
    printf("%d.%d,", ggs,ggt);

    fscanf(pf,"%d.%d", &ggu,&ggv);
    printf("%d.%d",ggu,ggv);


    printf("\n");


    fscanf(pf,"%[^,]", vapor);
	printf("%s,", vapor);

	fscanf(pf,"%c",coma6);

    fscanf(pf,"%d.%d,", &ha,&hb);
    printf("%d.%d,",ha,hb);

    fscanf(pf,"%d.%d,", &hc,&hdd);
    printf("%d.%d,",hc,hdd);

    fscanf(pf,"%d.%d,", &he,&hf);
    printf("%d.%d,",he,hf);

    fscanf(pf,"%d.%d,", &hg,&hh);
    printf("%d.%d,",hg,hh);

    fscanf(pf,"%d.%d,", &hi,&hj);
    printf("%d.%d,",hi,hj);

    fscanf(pf,"%d.%d,", &hk,&hl);
    printf("%d.%d,",hk,hl);

    fscanf(pf,"%d.%d,", &hm,&hn);
    printf("%d.%d,",hm,hn);

    fscanf(pf,"%d.%d,", &ho,&hp);
    printf("%d.%d,",ho,hp);

    fscanf(pf,"%d.%d,", &hq,&hr);
    printf("%d.%d,",hq,hr);

    fscanf(pf,"%d.%d,", &hs,&ht);
    printf("%d.%d,",hs,ht);

    fscanf(pf,"%d.%d,", &hu,&hv);
    printf("%d.%d,",hu,hv);

    fscanf(pf,"%d.%d,", &hw,&hx);
    printf("%d.%d,",hw,hx);

    fscanf(pf,"%d.%d,", &hy,&hz);
    printf("%d.%d,", hy,hz);

    fscanf(pf,"%d.%d,", &hha,&hhb);
    printf("%d.%d,", hha,hhb);

    fscanf(pf,"%d.%d,", &hhc,&hhd);
    printf("%d.%d,",hhc,hhd);

    fscanf(pf,"%d.%d,", &hhe,&hhf);
    printf("%d.%d,",hhe,hhf);

    fscanf(pf,"%d.%d,", &hhg,&hhh);
    printf("%d.%d,",hhg,hhh);

    fscanf(pf,"%d.%d,", &hhi,&hhj);
    printf("%d.%d,",hhi,hhj);

    fscanf(pf,"%d.%d,", &hhk,&hhl);
    printf("%d.%d,",hhk,hhl);

    fscanf(pf,"%d.%d,", &hhm,&hhn);
    printf("%d.%d,",hhm,hhn);

    fscanf(pf,"%d.%d,", &hho,&hhp);
    printf("%d.%d,",hho,hhp);

    fscanf(pf,"%d.%d,", &hhq,&hhr);
    printf("%d.%d,", hhq,hhr);

    fscanf(pf,"%d.%d,", &hhs,&hht);
    printf("%d.%d,",hhs,hht);

    fscanf(pf,"%d.%d", &hhu,&hhv);
    printf("%d.%d",hhu,hhv);


    printf("\n");


    fscanf(pf,"%[^,]", comb);
	printf("%s,", comb);

	fscanf(pf,"%c",coma7);

    fscanf(pf,"%d.%d,", &ia,&ib);
    printf("%d.%d,",ia,ib);

    fscanf(pf,"%d.%d,", &ic,&id);
    printf("%d.0%d,",ic,id);

    fscanf(pf,"%d.%d,", &ie,&iff);
    printf("%d.0%d,",ie,iff);

    fscanf(pf,"%d.%d,", &ig,&ih);
    printf("%d.%d,",ig,ih);

    fscanf(pf,"%d.%d,", &ii,&ij);
    printf("%d.%d,",ii,ij);

    fscanf(pf,"%d.%d,", &ik,&il);
    printf("%d.%d,",ik,il);

    fscanf(pf,"%d.%d,", &im,&in);
    printf("%d.%d,",im,in);

    fscanf(pf,"%d.%d,", &io,&ip);
    printf("%d.%d,",io,ip);

    fscanf(pf,"%d.%d,", &iq,&ir);
    printf("%d.%d,",iq,ir);

    fscanf(pf,"%d.%d,", &is,&it);
    printf("%d.0%d,",is,it);

    fscanf(pf,"%d.%d,", &iu,&iv);
    printf("%d.%d,",iu,iv);

    fscanf(pf,"%d.%d,", &iw,&ix);
    printf("%d.%d,",iw,ix);

    fscanf(pf,"%d.%d,", &iy,&iz);
    printf("%d.%d,", iy,iz);

    fscanf(pf,"%d.%d,", &iia,&iib);
    printf("%d.%d,", iia,iib);

    fscanf(pf,"%d.%d,", &iic,&iid);
    printf("%d.%d,",iic,iid);

    fscanf(pf,"%d.%d,", &iie,&iif);
    printf("%d.%d,",iie,iif);

    fscanf(pf,"%d.%d,", &iig,&iih);
    printf("%d.%d,",iig,iih);

    fscanf(pf,"%d.%d,", &iii,&iij);
    printf("%d.%d,",iii,iij);

    fscanf(pf,"%d.%d,", &iik,&iil);
    printf("%d.%d,",iik,iil);

    fscanf(pf,"%d.%d,", &iim,&iin);
    printf("%d.0%d,",iim,iin);

    fscanf(pf,"%d.%d,", &iio,&iip);
    printf("%d.%d,",iio,iip);

    fscanf(pf,"%d.%d,", &iiq,&iir);
    printf("%d.%d,", iiq,iir);

    fscanf(pf,"%d.%d,", &iis,&iit);
    printf("%d.%d,",iis,iit);

    fscanf(pf,"%d.%d", &iiu,&iiv);
    printf("%d.%d",iiu,iiv);


    printf("\n");


    fscanf(pf,"%[^,]", hdeoli);
	printf("%s,", hdeoli);

	fscanf(pf,"%c",coma8);

    fscanf(pf,"%d.%d,", &ja,&jb);
    printf("%d.%d,",ja,jb);

    fscanf(pf,"%d.%d,", &jc,&jd);
    printf("%d.%d,",jc,jd);

    fscanf(pf,"%d.%d,", &je,&jf);
    printf("%d.%d,",je,jf);

    fscanf(pf,"%d.%d,", &jg,&jh);
    printf("%d.%d,",jg,jh);

    fscanf(pf,"%d.%d,", &ji,&jj);
    printf("%d.%d,",ji,jj);

    fscanf(pf,"%d.%d,", &jk,&jl);
    printf("%d.00%d,",jk,jl);

    fscanf(pf,"%d.%d,", &jm,&jn);
    printf("%d.%d,",jm,jn);

    fscanf(pf,"%d.%d,", &jo,&jp);
    printf("%d.%d,",jo,jp);

    fscanf(pf,"%d.%d,", &jq,&jr);
    printf("%d.%d,",jq,jr);

    fscanf(pf,"%d.%d,", &js,&jt);
    printf("%d.%d,",js,jt);

    fscanf(pf,"%d.%d,", &ju,&jv);
    printf("%d.%d,",ju,jv);

    fscanf(pf,"%d.%d,", &jw,&jx);
    printf("%d.%d,",jw,jx);

    fscanf(pf,"%d.%d,", &jy,&jz);
    printf("%d.%d,", jy,jz);

    fscanf(pf,"%d.%d,", &jja,&jjb);
    printf("%d.%d,", jja,jjb);

    fscanf(pf,"%d.%d,", &jjc,&jjd);
    printf("%d.%d,",jjc,jjd);

    fscanf(pf,"%d.%d,", &jje,&jjf);
    printf("%d.%d,",jje,jjf);

    fscanf(pf,"%d.%d,", &jjg,&jjh);
    printf("%d.%d,",jjg,jjh);

    fscanf(pf,"%d.%d,", &jji,&jjj);
    printf("%d.%d,",jji,jjj);

    fscanf(pf,"%d.%d,", &jjk,&jjl);
    printf("%d.%d,",jjk,jjl);

    fscanf(pf,"%d.%d,", &jjm,&jjn);
    printf("%d.%d,",jjm,jjn);

    fscanf(pf,"%d.%d,", &jjo,&jjp);
    printf("%d.%d,",jjo,jjp);

    fscanf(pf,"%d.%d,", &jjq,&jjr);
    printf("%d.%d,", jjq,jjr);

    fscanf(pf,"%d.%d,", &jjs,&jjt);
    printf("%d.%d,",jjs,jjt);

    fscanf(pf,"%d.%d", &jju,&jjv);
    printf("%d.%d",jju,jjv);


    printf("\n");


    fscanf(pf,"%[^,]", eoli);
	printf("%s,", eoli);

	fscanf(pf,"%c",coma9);

    fscanf(pf,"%d.%d,", &ka,&kb);
    printf("%d.%d,",ka,kb);

    fscanf(pf,"%d.%d,", &kc,&kd);
    printf("%d.%d,",kc,kd);

    fscanf(pf,"%d.%d,", &ke,&kf);
    printf("%d.%d,",ke,kf);

    fscanf(pf,"%d.%d,", &kg,&kh);
    printf("%d.%d,",kg,kh);

    fscanf(pf,"%d.%d,", &ki,&kj);
    printf("%d.%d,",ki,kj);

    fscanf(pf,"%d.%d,", &kk,&kl);
    printf("%d.%d,",kk,kl);

    fscanf(pf,"%d.%d,", &km,&kn);
    printf("%d.0%d,",km,kn);

    fscanf(pf,"%d.%d,", &ko,&kp);
    printf("%d.%d,",ko,kp);

    fscanf(pf,"%d.%d,", &kq,&kr);
    printf("%d.%d,",kq,kr);

    fscanf(pf,"%d.%d,", &ks,&kt);
    printf("%d.%d,",ks,kt);

    fscanf(pf,"%d.%d,", &ku,&kv);
    printf("%d.%d,",ku,kv);

    fscanf(pf,"%d.%d,", &kw,&kx);
    printf("%d.0%d,",kw,kx);

    fscanf(pf,"%d.%d,", &ky,&kz);
    printf("%d.%d,", ky,kz);

    fscanf(pf,"%d.%d,", &kka,&kkb);
    printf("%d.%d,", kka,kkb);

    fscanf(pf,"%d.%d,", &kkc,&kkd);
    printf("%d.%d,",kkc,kkd);

    fscanf(pf,"%d.%d,", &kke,&kkf);
    printf("%d.%d,",kke,kkf);

    fscanf(pf,"%d.%d,", &kkg,&kkh);
    printf("%d.%d,",kkg,kkh);

    fscanf(pf,"%d.%d,", &kki,&kkj);
    printf("%d.%d,",kki,kkj);

    fscanf(pf,"%d.%d,", &kkk,&kkl);
    printf("%d.00%d,",kkk,kkl);

    fscanf(pf,"%d.%d,", &kkm,&kkn);
    printf("%d.%d,",kkm,kkn);

    fscanf(pf,"%d.%d,", &kko,&kkp);
    printf("%d.%d,",kko,kkp);

    fscanf(pf,"%d.%d,", &kkq,&kkr);
    printf("%d.%d,", kkq,kkr);

    fscanf(pf,"%d.%d,", &kks,&kkt);
    printf("%d.%d,",kks,kkt);

    fscanf(pf,"%d.%d", &kku,&kkv);
    printf("%d.%d",kku,kkv);


    printf("\n");


    fscanf(pf,"%[^,]", solarft);
	printf("%s,", solarft);

	fscanf(pf,"%c",coma10);

    fscanf(pf,"%d.%d,", &la,&lb);
    printf("%d.%d,",la,lb);

    fscanf(pf,"%d.%d,", &lc,&ld);
    printf("%d.%d,",lc,ld);

    fscanf(pf,"%d.%d,", &le,&lf);
    printf("%d.%d,",le,lf);

    fscanf(pf,"%d.%d,", &lg,&lh);
    printf("%d.%d,",lg,lh);

    fscanf(pf,"%d.%d,", &li,&lj);
    printf("%d.%d,",li,lj);

    fscanf(pf,"%d.%d,", &lk,&ll);
    printf("%d.%d,",lk,ll);

    fscanf(pf,"%d.%d,", &lm,&ln);
    printf("%d.%d,",lm,ln);

    fscanf(pf,"%d.%d,", &lo,&lp);
    printf("%d.%d,",lo,lp);

    fscanf(pf,"%d.%d,", &lq,&lr);
    printf("%d.%d,",lq,lr);

    fscanf(pf,"%d.%d,", &ls,&lt);
    printf("%d.%d,",ls,lt);

    fscanf(pf,"%d.%d,", &lu,&lv);
    printf("%d.%d,",lu,lv);

    fscanf(pf,"%d.%d,", &lw,&lx);
    printf("%d.%d,",lw,lx);

    fscanf(pf,"%d.%d,", &ly,&lz);
    printf("%d.%d,", ly,lz);

    fscanf(pf,"%d.%d,", &lla,&llb);
    printf("%d.0%d,", lla,llb);

    fscanf(pf,"%d.%d,", &llc,&lld);
    printf("%d.%d,",llc,lld);

    fscanf(pf,"%d.%d,", &lle,&llf);
    printf("%d.%d,",lle,llf);

    fscanf(pf,"%d.%d,", &llg,&llh);
    printf("%d.%d,",llg,llh);

    fscanf(pf,"%d.%d,", &lli,&llj);
    printf("%d.%d,",lli,llj);

    fscanf(pf,"%d.%d,", &llk,&lll);
    printf("%d.%d,",llk,lll);

    fscanf(pf,"%d.%d,", &llm,&lln);
    printf("%d.%d,",llm,lln);

    fscanf(pf,"%d.%d,", &llo,&llp);
    printf("%d.%d,",llo,llp);

    fscanf(pf,"%d.%d,", &llq,&llr);
    printf("%d.%d,", llq,llr);

    fscanf(pf,"%d.%d,", &lls,&llt);
    printf("%d.0%d,",lls,llt);

    fscanf(pf,"%d.%d", &llu,&llv);
    printf("%d.%d",llu,llv);


    printf("\n");


    fscanf(pf,"%[^,]", solarter);
	printf("%s,", solarter);

	fscanf(pf,"%c",coma20);

    fscanf(pf,"%d.%d,", &lxa,&lxb);
    printf("%d.%d,",lxa,lxb);

    fscanf(pf,"%d.%d,", &lxc,&lxd);
    printf("%d.%d,",lxc,lxd);

    fscanf(pf,"%d.%d,", &lxe,&lxf);
    printf("%d.0%d,",lxe,lxf);

    fscanf(pf,"%d.%d,", &lxg,&lxh);
    printf("%d.%d,",lxg,lxh);

    fscanf(pf,"%d.%d,", &lxi,&lxj);
    printf("%d.%d,",lxi,lxj);

    fscanf(pf,"%d.%d,", &lxk,&lxl);
    printf("%d.%d,",lxk,lxl);

    fscanf(pf,"%d.%d,", &lxm,&lxn);
    printf("%d.%d,",lxm,lxn);

    fscanf(pf,"%d.%d,", &lxo,&lxp);
    printf("%d.%d,",lxo,lxp);

    fscanf(pf,"%d.%d,", &lxq,&lxr);
    printf("%d.%d,",lxq,lxr);

    fscanf(pf,"%d.%d,", &lxs,&lxt);
    printf("%d.%d,",lxs,lxt);

    fscanf(pf,"%d.%d,", &lxu,&lxv);
    printf("%d.%d,",lxu,lxv);

    fscanf(pf,"%d.%d,", &lxw,&lxx);
    printf("%d.%d,",lxw,lxx);

    fscanf(pf,"%d.%d,", &lxy,&lxz);
    printf("%d.%d,", lxy,lxz);

    fscanf(pf,"%d.%d,", &llxa,&llxb);
    printf("%d.%d,", llxa,llxb);

    fscanf(pf,"%d.%d,", &llxc,&llxd);
    printf("%d.%d,",llxc,llxd);

    fscanf(pf,"%d.%d,", &llxe,&llxf);
    printf("%d.%d,",llxe,llxf);

    fscanf(pf,"%d.%d,", &llxg,&llxh);
    printf("%d.%d,",llxg,llxh);

    fscanf(pf,"%d.%d,", &llxi,&llxj);
    printf("%d.%d,",llxi,llxj);

    fscanf(pf,"%d.%d,", &llxk,&llxl);
    printf("%d.%d,",llxk,llxl);

    fscanf(pf,"%d.%d,", &llxm,&llxn);
    printf("%d.%d,",llxm,llxn);

    fscanf(pf,"%d.%d,", &llxo,&llxp);
    printf("%d.%d,",llxo,llxp);

    fscanf(pf,"%d.%d,", &llxq,&llxr);
    printf("%d.%d,", llxq,llxr);

    fscanf(pf,"%d.%d,", &llxs,&llxt);
    printf("%d.%d,",llxs,llxt);

    fscanf(pf,"%d.%d", &llxu,&llxv);
    printf("%d.%d",llxu,llxv);


    printf("\n");


    fscanf(pf,"%[^,]", otras);
	printf("%s,", otras);

	fscanf(pf,"%c",coma11);

    fscanf(pf,"%d.%d,", &ma,&mb);
    printf("%d.%d,",ma,mb);

    fscanf(pf,"%d.%d,", &mc,&md);
    printf("%d.%d,",mc,md);

    fscanf(pf,"%d.%d,", &me,&mf);
    printf("%d.%d,",me,mf);

    fscanf(pf,"%d.%d,", &mg,&mh);
    printf("%d.%d,",mg,mh);

    fscanf(pf,"%d.%d,", &mi,&mj);
    printf("%d.%d,",mi,mj);

    fscanf(pf,"%d.%d,", &mk,&ml);
    printf("%d.0%d,",mk,ml);

    fscanf(pf,"%d.%d,", &mm,&mn);
    printf("%d.%d,",mm,mn);

    fscanf(pf,"%d.%d,", &mo,&mp);
    printf("%d.%d,",mo,mp);

    fscanf(pf,"%d.%d,", &mq,&mr);
    printf("%d.%d,",mq,mr);

    fscanf(pf,"%d.%d,", &ms,&mt);
    printf("%d.0%d,",ms,mt);

    fscanf(pf,"%d.%d,", &mu,&mv);
    printf("%d.%d,",mu,mv);

    fscanf(pf,"%d.%d,", &mw,&mx);
    printf("%d.%d,",mw,mx);

    fscanf(pf,"%d.%d,", &my,&mz);
    printf("%d.%d,", my,mz);

    fscanf(pf,"%d.%d,", &mma,&mmb);
    printf("%d.%d,", mma,mmb);

    fscanf(pf,"%d.%d,", &mmc,&mmd);
    printf("%d.%d,",mmc,mmd);

    fscanf(pf,"%d.%d,", &mme,&mmf);
    printf("%d.%d,",mme,mmf);

    fscanf(pf,"%d.%d,", &mmg,&mmh);
    printf("%d.%d,",mmg,mmh);

    fscanf(pf,"%d.%d,", &mmi,&mmj);
    printf("%d.%d,",mmi,mmj);

    fscanf(pf,"%d.%d,", &mmk,&mml);
    printf("%d.%d,",mmk,mml);

    fscanf(pf,"%d.%d,", &mmm,&mmn);
    printf("%d.%d,",mmm,mmn);

    fscanf(pf,"%d.%d,", &mmo,&mmp);
    printf("%d.%d,",mmo,mmp);

    fscanf(pf,"%d.%d,", &mmq,&mmr);
    printf("%d.%d,", mmq,mmr);

    fscanf(pf,"%d.%d,", &mms,&mmt);
    printf("%d.%d,",mms,mmt);

    fscanf(pf,"%d.%d", &mmu,&mmv);
    printf("%d.%d",mmu,mmv);


    printf("\n");


    fscanf(pf,"%[^,]", cogenera);
	printf("%s,", cogenera);

	fscanf(pf,"%c",coma12);

    fscanf(pf,"%d.%d,", &na,&nb);
    printf("%d.%d,",na,nb);

    fscanf(pf,"%d.%d,", &nc,&nd);
    printf("%d.%d,",nc,nd);

    fscanf(pf,"%d.%d,", &ne,&nf);
    printf("%d.%d,",ne,nf);

    fscanf(pf,"%d.%d,", &ng,&nh);
    printf("%d.%d,",ng,nh);

    fscanf(pf,"%d.%d,", &ni,&nj);
    printf("%d.%d,",ni,nj);

    fscanf(pf,"%d.%d,", &nk,&nl);
    printf("%d.%d,",nk,nl);

    fscanf(pf,"%d.%d,", &nm,&nn);
    printf("%d.%d,",nm,nn);

    fscanf(pf,"%d.%d,", &no,&np);
    printf("%d.%d,",no,np);

    fscanf(pf,"%d.%d,", &nq,&nr);
    printf("%d.%d,",nq,nr);

    fscanf(pf,"%d.%d,", &ns,&nt);
    printf("%d.%d,",ns,nt);

    fscanf(pf,"%d.%d,", &nu,&nv);
    printf("%d.%d,",nu,nv);

    fscanf(pf,"%d.%d,", &nw,&nx);
    printf("%d.%d,",nw,nx);

    fscanf(pf,"%d.%d,", &ny,&nz);
    printf("%d.%d,", ny,nz);

    fscanf(pf,"%d.%d,", &nna,&nnb);
    printf("%d.%d,", nna,nnb);

    fscanf(pf,"%d.%d,", &nnc,&nnd);
    printf("%d.%d,",nnc,nnd);

    fscanf(pf,"%d.%d,", &nne,&nnf);
    printf("%d.%d,",nne,nnf);

    fscanf(pf,"%d.%d,", &nng,&nnh);
    printf("%d.%d,",nng,nnh);

    fscanf(pf,"%d.%d,", &nni,&nnj);
    printf("%d.%d,",nni,nnj);

    fscanf(pf,"%d.%d,", &nnk,&nnl);
    printf("%d.%d,",nnk,nnl);

    fscanf(pf,"%d.%d,", &nnm,&nnn);
    printf("%d.%d,",nnm,nnn);

    fscanf(pf,"%d.%d,", &nno,&nnp);
    printf("%d.%d,",nno,nnp);

    fscanf(pf,"%d.%d,", &nnq,&nnr);
    printf("%d.%d,", nnq,nnr);

    fscanf(pf,"%d.%d,", &nns,&nnt);
    printf("%d.%d,",nns,nnt);

    fscanf(pf,"%d.%d", &nnu,&nnv);
    printf("%d.%d",nnu,nnv);


    printf("\n");

    
    fscanf(pf,"%[^ ]", residuosno);
	printf("%s", residuosno);
    fscanf(pf,"%[^ ]", residuosno1);
	printf("%s", residuosno1);
    fscanf(pf,"%[^,]", residuosno2);
	printf("%s,", residuosno2);


	fscanf(pf,"%c",coma13);

    fscanf(pf,"%d.%d,", &oa,&ob);
    printf("%d.%d,",oa,ob);

    fscanf(pf,"%d.%d,", &oc,&od);
    printf("%d.%d,",oc,od);

    fscanf(pf,"%d.%d,", &oe,&of);
    printf("%d.%d,",oe,of);

    fscanf(pf,"%d.%d,", &og,&oh);
    printf("%d.0%d,",og,oh);

    fscanf(pf,"%d.%d,", &oi,&oj);
    printf("%d.%d,",oi,oj);

    fscanf(pf,"%d.%d,", &ok,&ol);
    printf("%d.%d,",ok,ol);

    fscanf(pf,"%d.%d,", &om,&on);
    printf("%d.0%d,",om,on);

    fscanf(pf,"%d.%d,", &oo,&op);
    printf("%d.%d,",oo,op);

    fscanf(pf,"%d.%d,", &oq,&or);
    printf("%d.%d,",oq,or);

    fscanf(pf,"%d.%d,", &os,&ot);
    printf("%d.%d,",os,ot);

    fscanf(pf,"%d.%d,", &ou,&ov);
    printf("%d.%d,",ou,ov);

    fscanf(pf,"%d.%d,", &ow,&ox);
    printf("%d.%d,",ow,ox);

    fscanf(pf,"%d.%d,", &oy,&oz);
    printf("%d.%d,", oy,oz);

    fscanf(pf,"%d.%d,", &ooa,&oob);
    printf("%d.%d,", ooa,oob);

    fscanf(pf,"%d.%d,", &ooc,&ood);
    printf("%d.%d,",ooc,ood);

    fscanf(pf,"%d.%d,", &ooe,&oof);
    printf("%d.%d,",ooe,oof);

    fscanf(pf,"%d.%d,", &oog,&ooh);
    printf("%d.%d,",oog,ooh);

    fscanf(pf,"%d.%d,", &ooi,&ooj);
    printf("%d.%d,",ooi,ooj);

    fscanf(pf,"%d.%d,", &ook,&ool);
    printf("%d.0%d,", ook,ool);

    fscanf(pf,"%d.%d,", &oom,&oon);
    printf("%d.%d,",oom,oon);

    fscanf(pf,"%d.%d,", &ooo,&oop);
    printf("%d.%d,",ooo,oop);

    fscanf(pf,"%d.%d,", &ooq,&oor);
    printf("%d.0%d,", ooq,oor);

    fscanf(pf,"%d.%d,", &oos,&oot);
    printf("%d.%d,",oos,oot);

    fscanf(pf,"%d.%d", &oou,&oov);
    printf("%d.%d",oou,oov);


    printf("\n");


    fscanf(pf,"%[^,]", residuossi);
	printf("%s,", residuossi);

	fscanf(pf,"%c",coma14);

    fscanf(pf,"%d.%d,", &pa,&pb);
    printf("%d.%d,",pa,pb);

    fscanf(pf,"%d.%d,", &pc,&pd);
    printf("%d.0%d,",pc,pd);

    fscanf(pf,"%d.%d,", &pe,&pff);
    printf("%d.%d,",pe,pff);

    fscanf(pf,"%d.%d,", &pg,&ph);
    printf("%d.%d,",pg,ph);

    fscanf(pf,"%d.%d,", &pi,&pj);
    printf("%d.%d,",pi,pj);

    fscanf(pf,"%d.%d,", &pk,&pl);
    printf("%d.%d,",pk,pl);

    fscanf(pf,"%d.%d,", &pm,&pn);
    printf("%d.%d,",pm,pn);

    fscanf(pf,"%d.%d,", &po,&pp);
    printf("%d.%d,",po,pp);

    fscanf(pf,"%d.%d,", &pq,&pr);
    printf("%d.0%d,",pq,pr);

    fscanf(pf,"%d.%d,", &ps,&pt);
    printf("%d.%d,",ps,pt);

    fscanf(pf,"%d.%d,", &pu,&pv);
    printf("%d.%d,",pu,pv);

    fscanf(pf,"%d.%d,", &pw,&px);
    printf("%d.%d,",pw,px);

    fscanf(pf,"%d.%d,", &py,&pz);
    printf("%d.%d,", py,pz);

    fscanf(pf,"%d.%d,", &ppa,&ppb);
    printf("%d.%d,", ppa,ppb);

    fscanf(pf,"%d.%d,", &ppc,&ppd);
    printf("%d.0%d,",ppc,ppd);

    fscanf(pf,"%d.%d,", &ppe,&ppf);
    printf("%d.%d,",ppe,ppf);

    fscanf(pf,"%d.%d,", &ppg,&pph);
    printf("%d.%d,",ppg,pph);

    fscanf(pf,"%d.%d,", &ppi,&ppj);
    printf("%d.%d,",ppi,ppj);

    fscanf(pf,"%d.%d,", &ppk,&ppl);
    printf("%d.%d,",ppk,ppl);

    fscanf(pf,"%d.%d,", &ppm,&ppn);
    printf("%d.%d,",ppm,ppn);

    fscanf(pf,"%d.%d,", &ppo,&ppp);
    printf("%d.%d,",ppo,ppp);

    fscanf(pf,"%d.%d,", &ppq,&ppr);
    printf("%d.%d,", ppq,ppr);

    fscanf(pf,"%d.%d,", &pps,&ppt);
    printf("%d.%d,",pps,ppt);

    fscanf(pf,"%d.%d", &ppu,&ppv);
    printf("%d.%d",ppu,ppv);


    printf("\n");


    fscanf(pf,"%[^,]", genera);
	printf("%s,", genera);

	fscanf(pf,"%c",coma15);

    fscanf(pf,"%d.%d,", &qa,&qb);
    printf("%d.%d,",qa,qb);

    fscanf(pf,"%d.%d,", &qc,&qd);
    printf("%d.%d,",qc,qd);

    fscanf(pf,"%d.%d,", &qe,&qf);
    printf("%d.%d,",qe,qf);

    fscanf(pf,"%d.%d,", &qg,&qh);
    printf("%d.%d,",qg,qh);

    fscanf(pf,"%d.%d,", &qi,&qj);
    printf("%d.%d,",qi,qj);

    fscanf(pf,"%d.%d,", &qk,&ql);
    printf("%d.%d,",qk,ql);

    fscanf(pf,"%d.%d,", &qm,&qn);
    printf("%d.%d,",qm,qn);

    fscanf(pf,"%d.%d,", &qo,&qp);
    printf("%d.%d,",qo,qp);

    fscanf(pf,"%d.%d,", &qq,&qr);
    printf("%d.%d,",qq,qr);

    fscanf(pf,"%d.%d,", &qs,&qt);
    printf("%d.%d,",qs,qt);

    fscanf(pf,"%d.%d,", &qu,&qv);
    printf("%d.%d,",qu,qv);

    fscanf(pf,"%d.%d,", &qw,&qx);
    printf("%d.%d,",qw,qx);

    fscanf(pf,"%d.%d,", &qy,&qz);
    printf("%d.%d,", qy,qz);

    fscanf(pf,"%d.%d,", &qqa,&qqb);
    printf("%d.%d,", qqa,qqb);

    fscanf(pf,"%d.%d,", &qqc,&qqd);
    printf("%d.0%d,",qqc,qqd);

    fscanf(pf,"%d.%d,", &qqe,&qqf);
    printf("%d.0%d,",qqe,qqf);

    fscanf(pf,"%d.%d,", &qqg,&qqh);
    printf("%d.%d,",qqg,qqh);

    fscanf(pf,"%d.%d,", &qqi,&qqj);
    printf("%d.%d,",qqi,qqj);

    fscanf(pf,"%d.%d,", &qqk,&qql);
    printf("%d.%d,",qqk,qql);

    fscanf(pf,"%d.%d,", &qqm,&qqn);
    printf("%d.%d,",qqm,qqn);

    fscanf(pf,"%d.%d,", &qqo,&qqp);
    printf("%d.%d,",qqo,qqp);

    fscanf(pf,"%d.%d,", &qqq,&qqr);
    printf("%d.%d,", qqq,qqr);

    fscanf(pf,"%d.%d,", &qqs,&qqt);
    printf("%d.%d,",qqs,qqt);

    fscanf(pf,"%d.%d", &qqu,&qqv);
    printf("%d.%d",qqu,qqv);


    printf("\n");


	//Almacenamos los datos del fichero en vector, cada vector es un tipo de energía

    float hidraulica[24]={4517.602492,3715.416012,2745.019022,2159.483245,2182.252545,2209.464623,1883.260803,1396.698883,1023.215446,1199.445532,2536.803672,2085.857451,1174.970169,1764.806206,1782.053848,1922.302375,1190.985484,1043.519078,972.977692,1153.775681,717.70239,1309.281418,2744.808065};
    float turbbomb[24]={320.531389,401.293218,330.794555,153.67968,238.708927,105.706304,115.895307,159.688964,118.198104,232.112394,202.806598,269.908819,215.637741,285.079947,273.848152,336.712619,299.880038,270.92393,216.617594,339.372152,304.810326,385.661431,361.663867,485.359059};
    float nuclear[24]={5199.740516,4358.515107,4833.065002,4197.33293,4373.250552,3684.377943,5119.328941,5151.337803,4890.618221,4748.364457,3562.2548073,3922.833452,5048.424951,4771.058269,4766.690052,4414.715447,4066.355361,4459.459166,5073.152497,5122.046929,4847.367123,4021.440771,4231.577244,5161.212451};
    float carbon[24]={557.975979,176.266719,242.138946,270.100026,331.931113,473.579232,311.10233,319.182668,477.087202,527.419848,576.437576,719.926373,709.963219,568.629528,705.226125,691.004601,527.154558,833.22046,882.232497,819.592534,632.066719,380.972026,321.469754,693.672984};
    float motordiesel[24]={203.759973,160.418085,173.283976,187.547789,178.362299,206.220592,239.576815,258.860338,256.964192,233.570565,203.062243,215.797238,210.125165,185.575526,207.451789,205.100257,215.84438,224.847296,242.769547,245.673515,216.066723,202.310552,192.196854,200.241967};
    float turbgas[24]={28.766271,18.02613,27.904377,24.553476,24.916217,34.119217,40.565981,47.885346,71.402214,46.314807,30.058985,29.066882,34.446764,34.328002,38.861714,34.57236,42.307777,47.734021,79.729885,85.527648,84.422615,79.275334,47.409887,48.856536};
    float turbvapor[24]={116.282053,104.960847,100.7582590,70.652976,62.41677,33.486942,66.134210,99.644190,113.210213,112.484255,115.109023,112.916219,117.429802,102.630663,114.410944,103.636366,86.849653,60.625902,73.213599,102.417012,110.953990,118.59882,93.771169,122.696654};
    float ciclocomb[24]={2729.183017,1544.065785,2151.091661,3384.471579,2444.871606,3658.878948,3718.134418,4047.368387,4943.197265,4407.05637,6317.636788,5154.143508,5898.394445,4671.261013,3873.203200,3146.865903,3713.639484,6478.937315,8460.459144,8082.027681,7704.900731,7066.859015,4672.406377,4368.592847};
    float hidroeolica[24]={0.99317,1.226483,1.921443,0.835908,3.227077,3.002042,3.578217,2.663478,1.429314,1.853454,1.139789,1.227861,1.110916,1.482045,2.126322,1.752528,1.917174,2.44956,3.562943,3.517675,2.075094,1.350072,1.169409,0.367104};
    float eolica[24]={7101.249123,6294.982856,5606.818805,4095.800569,4785.695033,3684.170619,4284.090513,3747.238495,3234.274816,4359.563921,6421.739529,6910.032613,5414.777160,4712.962772,6528.440466,5655.806361,4687.64999,3807.180833,4566.002106,4258.846638,4191.189274,5099.919318,6682.534764,5570.282592};
    float solarfoto[24]={848.403074,973.686902,1688.757265,1665.571492,2388.831852,2325.571729,2617.534056,2395.8309,1927.916611,1777.274811,1347.957356,1023.70725,1569.291683,1693.011465,1455.368818,2581.307811,3380.729182,3215.923445,3381.156658,3239.672293,2693.50188,2005.321354,1533.099321,1115.958};
    float solartermica[24]={102.634029,138.181326,355.015427,266.787519,645.597457,655.361716,828.492494,661.445101,447.444657,328.182894,172.426246,103.956001,170.978835,208.192368,120.568373,412.77761,621.247495,534.185927,667.235783,619.95899,437.343279,166.240105,104.768426,59.778183};
    float otrasrenovables[24]={390.590396,365.191889,359.459071,392.274795,390.931927,358.010046,352.713786,410.590237,396.278098,433.047494,434.361576,436.423907,428.663218,374.913003,423.887477,430.376969,397.335983,415.748786,409.345594,383.442347,341.437356,366.964524,364.536652,319.642072};
    float cogeneracion[24]={2405.236806,1838.16573,2253.823616,2193.285205,2206.328862,2181.276794,2243.226356,2106.285519,2166.255198,2147.907197,2173.751719,2175.103528,2147.921609,2119.152721,2217.055737,1709.641446,1870.643862,1467.383492,1053.738199,779.410997,739.19081,1102.000335,1453.363695,1098.167328};
    float residuosnore[24]={182.932089,172.740345,184.342436,178.093968,177.333071,198.273452,205.014809,212.202012,179.817184,187.508,179.26082,181.223116,169.946929,144.546715,183.995605,171.926116,170.585177,155.903954,181.020454,164.769537,139.776655,155.069311,127.558061,134.668015};
    float residuosre[24]={59.850282,69.065868,72.598535,74.357494,59.595065,79.50385,81.91575,81.751572,68.076048,68.765996,80.249832,82.210439,79.365292,72.930818,82.069251,72.848577,79.964147,76.946932,75.732520,65.48815,59.668639,71.884421,67.535659,73.273156};
    float gentot[24]={24305.47495,21134.389784,22097.189386,19900.364428,20471.481075,19863.791971,22436.768607,21585.235814,20688.868220,20634.64191,23017.698420,23875.280879,24302.335181,21120.725026,22758.010234,21751.098819,22084.406638,23242.456503,26409.488103,25284.741791,23658.546898,21941.569779,21564.342557,22197.577015};

  
	
	//El usuario elige los datos a utilizar

	printf("Bienvenido al sistema.\n");
	printf("Disponemos de los datos de generacion de:\n");
	printf("1. Energia Hidraulica.\n");
	printf("2. Turbinacion Bombeo.\n");
	printf("3. Energia Nuclear.\n");
	printf("4. Carbon.\n");
	printf("5. Motores Diesel.\n");
	printf("6. Turbinas de Gas.\n");
	printf("7. Turbinas de Vapor.\n");
    printf("8. Ciclo combinado\n");
	printf("9. Energia Hidroeolica.\n");
	printf("10. Energia Eolica.\n");
	printf("11. Solar Fotovoltaica.\n");
	printf("12. Solar Termica.\n");
	printf("13. Otras Renovables.\n");
	printf("14. Cogeneracion.\n");
	printf("15. Residuos no Renovables.\n");
	printf("16. Residuos Renovables.\n");
	printf("17. Generacion Total.\n");
   
	printf("Introduce el numero asociado al tipo de energia para acceder a los datos\n");

    printf("\n");

	int tipo;
	scanf("%d", &tipo);

	switch(tipo)
	{
		case 1:
			printf("Has accedido a los datos de Energia Hidraulica.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);

			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);

				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						
                    while (1) 
                    {
                        printf("Has elegido calcular estadisticas.\n");
                        float hidraulica[24] = {4517.602492, 3715.416012, 2745.019022, 2159.483245, 2182.252545, 2209.464623, 1883.260803, 1396.698883, 1023.215446, 1199.445532, 2536.803672, 2085.857451, 1174.970169, 1764.806206, 1782.053848, 1922.302375, 1190.985484, 1043.519078, 972.977692, 1153.775681, 717.70239, 1309.281418, 2744.808065};
                        int n = sizeof(hidraulica) / sizeof(hidraulica[0]);
                        float media = calcularMedia(hidraulica, n);
                        float moda = calcularModa(hidraulica, n);
                        float varianza = calcularVarianza(hidraulica, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
                        break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				
			       }
                }
            }
                
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datohidraulica;
               while (fscanf(pf, "%c", &datohidraulica) != EOF)
               {
                fscanf(pf,"%[^,]", hd);
	            printf("%s,", hd);

                fscanf(pf,"%c",punto);

                fscanf(pf,"%d.%d,", &ba,&bb);
                printf("%d.%d,",ba,bb);

                fscanf(pf,"%d.%d,", &bc,&bd);
                printf("%d.%d,",bc,bd);

                fscanf(pf,"%d.%d,", &be,&bf);
                printf("%d.%d,",be,bf);

                fscanf(pf,"%d.%d,", &bg,&bh);
                printf("%d.0%d,",bg,bh);

                fscanf(pf,"%d.%d,", &bi,&bj);
                printf("%d.%d,",bi,bj);

                fscanf(pf,"%d.%d,", &bk,&bl);
                printf("%d.%d,",bk,bl);

                fscanf(pf,"%d.%d,", &bm, &bn);
                printf("%d.%d,",bm,bn);

                fscanf(pf,"%d.%d,", &bo,&bp);
                printf("%d.%d,",bo,bp);

                fscanf(pf,"%d.%d,", &bq,&br);
                printf("%d.%d,",bq,br);

                fscanf(pf,"%d.%d,", &bs,&bt);
                printf("%d.%d,",bs,bt);

                fscanf(pf,"%d.%d,", &bu,&bv);
                printf("%d.%d,",bu,bv);

                fscanf(pf,"%d.%d,", &bw,&bx);
                printf("%d.%d,",bw,bx);

                fscanf(pf,"%d.%d,", &by,&bz);
                printf("%d.%d,",by,bz);

                fscanf(pf,"%d.%d,", &bba,&bbb);
                printf("%d.%d,",bba,bbb);

                fscanf(pf,"%d.%d,", &bbc,&bbd);
                printf("%d.0%d,",bbc,bbd);

                fscanf(pf,"%d.%d,", &bbe,&bbf);
                printf("%d.%d,",bbe,bbf);

                fscanf(pf,"%d.%d,", &bbg,&bbh);
                printf("%d.%d,",bbg,bbh);

                fscanf(pf,"%d.%d,", &bbi,&bbj);
                printf("%d.%d,",bbi,bbj);

                fscanf(pf,"%d.%d,", &bbk,&bbl);
                printf("%d.%d,",bbk,bbl);

                fscanf(pf,"%d.%d,", &bbm,&bbn);
                printf("%d.%d,",bbm,bbn);

                fscanf(pf,"%d.%d,", &bbo,&bbp);
                printf("%d.%d,",bbo,bbp);

                fscanf(pf,"%d.%d,", &bbq,&bbr);
                printf("%d.%d,",bbq,bbr);

                fscanf(pf,"%d.%d,", &bbs,&bbt);
                printf("%d.%d,",bbs,bbt);

                fscanf(pf,"%d.%d", &bbu,&bbv);
                printf("%d.%d",bbu,bbv);
               }
               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;
        

		case 2:
			printf("Has accedido a los datos de Turbinacion Bombeo.\n");            
            printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);

			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);

				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float turbbomb[24]={320.531389,401.293218,330.794555,153.67968,238.708927,105.706304,115.895307,159.688964,118.198104,232.112394,202.806598,269.908819,215.637741,285.079947,273.848152,336.712619,299.880038,270.92393,216.617594,339.372152,304.810326,385.661431,361.663867,485.359059};
                        int n = sizeof(turbbomb) / sizeof(turbbomb[0]);
                        float media = calcularMedia(turbbomb, n);
                        float moda = calcularModa(turbbomb, n);
                        float varianza = calcularVarianza(turbbomb, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datoturbinabombeo;
               while (fscanf(pf, "%c", &datoturbinabombeo) != EOF)
               {
                
                fscanf(pf,"%[^,]", bmeo);
	            printf("%s,", bmeo);

	            fscanf(pf,"%c",coma1);

                fscanf(pf,"%d.%d,", &ca,&cb);
                printf("%d.%d,",ca,cb);

                fscanf(pf,"%d.%d,", &cc,&cd);
                printf("%d.%d,",cc,cd);

                fscanf(pf,"%d.%d,", &ce,&cf);
                printf("%d.%d,",ce,cf);

                fscanf(pf,"%d.%d,", &cg,&ch);
                printf("%d.%d,",cg,ch);

                fscanf(pf,"%d.%d,", &ci,&cj);
                printf("%d.%d,",ci,cj);

                fscanf(pf,"%d.%d,", &ck,&cl);
                printf("%d.%d,",ck,cl);

                fscanf(pf,"%d.%d,", &cm,&cn);
                printf("%d.%d,",cm,cn);

                fscanf(pf,"%d.%d,", &co,&cp);
                printf("%d.%d,",co,cp);

                fscanf(pf,"%d.%d,", &cq,&cr);
                printf("%d.%d,",cq,cr);

                fscanf(pf,"%d.%d,", &cs,&ct);
                printf("%d.%d,",cs,ct);

                fscanf(pf,"%d.%d,", &cu,&cv);
                printf("%d.%d,",cu,cv);

                fscanf(pf,"%d.%d,", &cw,&cx);
                printf("%d.%d,",cw,cx);

                fscanf(pf,"%d.%d,", &cy,&cz);
                printf("%d.%d,",cy,cz);

                fscanf(pf,"%d.%d,", &cca,&ccb);
                printf("%d.0%d,",cca,ccb);

                fscanf(pf,"%d.%d,", &ccc,&ccd);
                printf("%d.%d,",ccc,ccd);

                fscanf(pf,"%d.%d,", &cce,&ccf);
                printf("%d.%d,",cce,ccf);

                fscanf(pf,"%d.%d,", &ccg,&cch);
                printf("%d.%d,",ccg,cch);

                fscanf(pf,"%d.%d,", &cci,&ccj);
                printf("%d.%d,",cci,ccj);

                fscanf(pf,"%d.%d,", &cck,&ccl);
                printf("%d.%d,",cck,ccl);

                fscanf(pf,"%d.%d,", &ccm,&ccn);
                printf("%d.%d,",ccm,ccn);

                fscanf(pf,"%d.%d,", &cco,&ccp);
                printf("%d.%d,",cco,ccp);

                fscanf(pf,"%d.%d,", &ccq,&ccr);
                printf("%d.%d,",ccq,ccr);

                fscanf(pf,"%d.%d,", &ccs,&cct);
                printf("%d.%d,",ccs,cct);

                fscanf(pf,"%d.%d", &ccu,&ccv);
                printf("%d.%d",ccu,ccv);

               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 3:
			printf("Has accedido a los datos de Energia Nuclear.\n");
            printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float nuclear[24]={5199.740516,4358.515107,4833.065002,4197.33293,4373.250552,3684.377943,5119.328941,5151.337803,4890.618221,4748.364457,3562.2548073,3922.833452,5048.424951,4771.058269,4766.690052,4414.715447,4066.355361,4459.459166,5073.152497,5122.046929,4847.367123,4021.440771,4231.577244,5161.212451};
    
                        int n = sizeof(nuclear) / sizeof(nuclear[0]);
                        float media = calcularMedia(nuclear, n);
                        float moda = calcularModa(nuclear, n);
                        float varianza = calcularVarianza(nuclear, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datonuclear;
               while (fscanf(pf, "%c", &datonuclear) != EOF)
               {
                fscanf(pf,"%[^,]", nclear);
	            printf("%s,", nclear);

                fscanf(pf,"%c",coma2);

                fscanf(pf,"%d.%d,", &da,&db);
                printf("%d.%d,",da,db);

                fscanf(pf,"%d.%d,", &dc,&dd);
                printf("%d.%d,",dc,dd);

                fscanf(pf,"%d.%d,", &de,&df);
                printf("%d.0%d,",de,df);

                fscanf(pf,"%d.%d,", &dg,&dh);
                printf("%d.%d,",dg,dh);

                fscanf(pf,"%d.%d,", &di,&dj);
                printf("%d.%d,",di,dj);

                fscanf(pf,"%d.%d,", &dk,&dl);
                printf("%d.%d,",dk,dl);

                fscanf(pf,"%d.%d,", &dm,&dn);
                printf("%d.%d,",dm,dn);

                fscanf(pf,"%d.%d,", &doo,&dp);
                printf("%d.%d,",doo,dp);

                fscanf(pf,"%d.%d,", &dq,&dr);
                printf("%d.%d,",dq,dr);

                fscanf(pf,"%d.%d,", &ds,&dt);
                printf("%d.%d,",ds,dt);

                fscanf(pf,"%d.%d,", &du,&dv);
                printf("%d.%d,",du,dv);

                fscanf(pf,"%d.%d,", &dw,&dx);
                printf("%d.%d,",dw,dx);

                fscanf(pf,"%d.%d,", &dy,&dz);
                printf("%d.%d,",dy,dz);

                fscanf(pf,"%d.%d,", &dda,&ddb);
                printf("%d.0%d,",dda,ddb);

                fscanf(pf,"%d.%d,", &ddc,&ddd);
                printf("%d.%d,",ddc,ddd);

                fscanf(pf,"%d.%d,", &dde,&ddf);
                printf("%d.%d,",dde,ddf);

                fscanf(pf,"%d.%d,", &ddg,&ddh);
                printf("%d.%d,",ddg,ddh);

                fscanf(pf,"%d.%d,", &ddi,&ddj);
                printf("%d.%d,",ddi,ddj);

                fscanf(pf,"%d.%d,", &ddk,&ddl);
                printf("%d.%d,",ddk,ddl);

                fscanf(pf,"%d.%d,", &ddm,&ddn);
                printf("%d.%d,",ddm,ddn);

                fscanf(pf,"%d.%d,", &ddo,&ddp);
                printf("%d.%d,",ddo,ddp);

                fscanf(pf,"%d.%d,", &ddq,&ddr);
                printf("%d.%d,",ddq,ddr);

                fscanf(pf,"%d.%d,", &dds,&ddt);
                printf("%d.%d,",dds,ddt);

                fscanf(pf,"%d.%d", &ddu,&ddv);
                printf("%d.%d",ddu,ddv);
               }

               printf("\n");

			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 4:
			printf("Has accedido a los datos de Carbon.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);

			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float carbon[24]={557.975979,176.266719,242.138946,270.100026,331.931113,473.579232,311.10233,319.182668,477.087202,527.419848,576.437576,719.926373,709.963219,568.629528,705.226125,691.004601,527.154558,833.22046,882.232497,819.592534,632.066719,380.972026,321.469754,693.672984};
    
                        int n = sizeof(carbon) / sizeof(carbon[0]);
                        float media = calcularMedia(carbon, n);
                        float moda = calcularModa(carbon, n);
                        float varianza = calcularVarianza(carbon, n);
                        
                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");

            char datocarbon;
               while (fscanf(pf, "%c", &datocarbon) != EOF)
               {
                fscanf(pf,"%[^,]", crbon);
	            printf("%s,", crbon);

                fscanf(pf,"%c",coma3);

                fscanf(pf,"%d.%d,", &ea,&eb);
                printf("%d.%d,",ea,eb);

                fscanf(pf,"%d.%d,", &ec,&ed);
                printf("%d.%d,",ec,ed);

                fscanf(pf,"%d.%d,", &ee,&ef);
                printf("%d.%d,",ee,ef);

                fscanf(pf,"%d.%d,", &eg,&eh);
                printf("%d.%d,",eg,eh);

                fscanf(pf,"%d.%d,", &ei,&ej);
                printf("%d.%d,",ei,ej);

                fscanf(pf,"%d.%d,", &ek,&el);
                printf("%d.%d,",ek,el);

                fscanf(pf,"%d.%d,", &em,&en);
                printf("%d.%d,",em,en);

                fscanf(pf,"%d.%d,", &eo,&ep);
                printf("%d.%d,",eo,ep);

                fscanf(pf,"%d.%d,", &eq,&er);
                printf("%d.0%d,",eq,er);

                fscanf(pf,"%d.%d,", &es,&et);
                printf("%d.%d,",es,et);

                fscanf(pf,"%d.%d,", &eu,&ev);
                printf("%d.%d,",eu,ev);

                fscanf(pf,"%d.%d,", &ew,&ex);
                printf("%d.%d,",ew,ex);

                fscanf(pf,"%d.%d,", &ey,&ez);
                printf("%d.%d,",ey,ez);

                fscanf(pf,"%d.%d,", &eea,&eeb);
                printf("%d.%d,",eea,eeb);

                fscanf(pf,"%d.%d,", &eec,&eed);
                printf("%d.%d,",eec,eed);

                fscanf(pf,"%d.%d,", &eee,&eef);
                printf("%d.00%d,",eee,eef);

                fscanf(pf,"%d.%d,", &eeg,&eeh);
                printf("%d.%d,",eeg,eeh);

                fscanf(pf,"%d.%d,", &eei,&eej);
                printf("%d.%d,",eei,eej);

                fscanf(pf,"%d.%d,", &eek,&eel);
                printf("%d.%d,",eek,eel);

                fscanf(pf,"%d.%d,", &eem,&een);
                printf("%d.%d,",eem,een);

                fscanf(pf,"%d.%d,", &eeo,&eep);
                printf("%d.0%d,",eeo,eep);

                fscanf(pf,"%d.%d,", &eeq,&eer);
                printf("%d.%d,",eeq,eer);

                fscanf(pf,"%d.%d,", &ees,&eet);
                printf("%d.%d,",ees,eet);

                fscanf(pf,"%d.%d", &eeu,&eev);
                printf("%d.%d",eeu,eev);

               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 5:
			printf("Has accedido a los datos de Motores Diesel.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float motordiesel[24]={203.759973,160.418085,173.283976,187.547789,178.362299,206.220592,239.576815,258.860338,256.964192,233.570565,203.062243,215.797238,210.125165,185.575526,207.451789,205.100257,215.84438,224.847296,242.769547,245.673515,216.066723,202.310552,192.196854,200.241967};
   
                        int n = sizeof(motordiesel) / sizeof(motordiesel[0]);
                        float media = calcularMedia(motordiesel, n);
                        float moda = calcularModa(motordiesel, n);
                        float varianza = calcularVarianza(motordiesel, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datodiesel;
               while (fscanf(pf, "%c", &datodiesel) != EOF)
               {
                fscanf(pf,"%[^,]", mtres);
	            printf("%s,", mtres);

                fscanf(pf,"%c",coma4);

                fscanf(pf,"%d.%d,", &fa,&fb);
                printf("%d.%d,",fa,fb);

                fscanf(pf,"%d.%d,", &fc,&fd);
                printf("%d.%d,",fc,fd);

                fscanf(pf,"%d.%d,", &fe,&ff);
                printf("%d.%d,",fe,ff);

                fscanf(pf,"%d.%d,", &fg,&fh);
                printf("%d.%d,",fg,fh);

                fscanf(pf,"%d.%d,", &fi,&fj);
                printf("%d.%d,",fi,fj);

                fscanf(pf,"%d.%d,", &fk,&fl);
                printf("%d.%d,",fk,fl);

                fscanf(pf,"%d.%d,", &fm,&fn);
                printf("%d.%d,",fm,fn);

                fscanf(pf,"%d.%d,", &fo,&fp);
                printf("%d.%d,",fo,fp);

                fscanf(pf,"%d.%d,", &fq,&fr);
                printf("%d.%d,",fq,fr);

                fscanf(pf,"%d.%d,", &fs,&ft);
                printf("%d.%d,",fs,ft);

                fscanf(pf,"%d.%d,", &fu,&fv);
                printf("%d.0%d,",fu,fv);

                fscanf(pf,"%d.%d,", &fw,&fx);
                printf("%d.%d,",fw,fx);

                fscanf(pf,"%d.%d,", &fy,&fz);
                printf("%d.%d,",fy,fz);

                fscanf(pf,"%d.%d,", &ffa,&ffb);
                printf("%d.%d,",ffa,ffb);

                fscanf(pf,"%d.%d,", &ffc,&ffd);
                printf("%d.%d,",ffc,ffd);

                fscanf(pf,"%d.%d,", &ffe,&fff);
                printf("%d.%d,",ffe,fff);

                fscanf(pf,"%d.%d,", &ffg,&ffh);
                printf("%d.%d,",ffg,ffh);

                fscanf(pf,"%d.%d,", &ffi,&ffj);
                printf("%d.%d,",ffi,ffj);

                fscanf(pf,"%d.%d,", &ffk,&ffl);
                printf("%d.%d,",ffk,ffl);

                fscanf(pf,"%d.%d,", &ffm,&ffn);
                printf("%d.%d,",ffm,ffn);

                fscanf(pf,"%d.%d,", &ffo,&ffp);
                printf("%d.0%d,",ffo,ffp);

                fscanf(pf,"%d.%d,", &ffq,&ffr);
                printf("%d.%d,",ffq,ffr);

                fscanf(pf,"%d.%d,", &ffs,&fft);
                printf("%d.%d,",ffs,fft);

                fscanf(pf,"%d.%d", &ffu,&ffv);
                printf("%d.%d",ffu,ffv);

               }
               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 6:
			printf("Has accedido a los datos de Turbina de gas.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");

                        float turbgas[24]={28.766271,18.02613,27.904377,24.553476,24.916217,34.119217,40.565981,47.885346,71.402214,46.314807,30.058985,29.066882,34.446764,34.328002,38.861714,34.57236,42.307777,47.734021,79.729885,85.527648,84.422615,79.275334,47.409887,48.856536};
    
                        int n = sizeof(turbgas) / sizeof(turbgas[0]);
                        float media = calcularMedia(turbgas, n);
                        float moda = calcularModa(turbgas, n);
                        float varianza = calcularVarianza(turbgas, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datoturbinagas;
               while (fscanf(pf, "%c", &datoturbinagas) != EOF)
               { 
                fscanf(pf,"%[^,]", tgas);
	            printf("%s,", tgas);

	            fscanf(pf,"%c",coma5);

                fscanf(pf,"%d.%d,", &ga,&gb);
                printf("%d.%d,",ga,gb);

                fscanf(pf,"%d.%d,", &gc,&gd);
                printf("%d.0%d,",gc,gd);

                fscanf(pf,"%d.%d,", &ge,&gf);
                printf("%d.%d,",ge,gf);

                fscanf(pf,"%d.%d,", &gg,&gh);
                printf("%d.%d,",gg,gh);

                fscanf(pf,"%d.%d,", &gi,&gj);
                printf("%d.%d,",gi,gj);

                fscanf(pf,"%d.%d,", &gk,&gl);
                printf("%d.%d,",gk,gl);

                fscanf(pf,"%d.%d,", &gm,&gn);
                printf("%d.%d,",gm,gn);

                fscanf(pf,"%d.%d,", &go,&gp);
                printf("%d.%d,",go,gp);

                fscanf(pf,"%d.%d,", &gq,&gr);
                printf("%d.%d,",gq,gr);

                fscanf(pf,"%d.%d,", &gs,&gt);
                printf("%d.%d,",gs,gt);

                fscanf(pf,"%d.%d,", &gu,&gv);
                printf("%d.0%d,",gu, gv);

                fscanf(pf,"%d.%d,", &gw,&gx);
                printf("%d.0%d,",gw,gx);

                fscanf(pf,"%d.%d,", &gy,&gz);
                printf("%d.%d,", gy,gz);

                fscanf(pf,"%d.%d,", &gga,&ggb);
                printf("%d.%d,", gga,ggb);

                fscanf(pf,"%d.%d,", &ggc,&ggd);
                printf("%d.%d,",ggc,ggd);

                fscanf(pf,"%d.%d,", &gge,&ggf);
                printf("%d.%d,",gge,ggf);

                fscanf(pf,"%d.%d,", &ggg,&ggh);
                printf("%d.%d,",ggg,ggh);

                fscanf(pf,"%d.%d,", &ggi,&ggj);
                printf("%d.%d,",ggi,ggj);

                fscanf(pf,"%d.%d,", &ggk,&ggl);
                printf("%d.%d,",ggk,ggl);

                fscanf(pf,"%d.%d,", &ggm,&ggn);
                printf("%d.%d,",ggm,ggn);

                fscanf(pf,"%d.%d,", &ggo,&ggp);
                printf("%d.%d,", ggo,ggp);

                fscanf(pf,"%d.%d,", &ggq,&ggr);
                printf("%d.%d,", ggq,ggr);

                fscanf(pf,"%d.%d,", &ggs,&ggt);
                printf("%d.%d,", ggs,ggt);

                fscanf(pf,"%d.%d", &ggu,&ggv);
                printf("%d.%d",ggu,ggv);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 7:
			printf("Has accedido a los datos de Turbina de Vapor.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float turbvapor[24]={116.282053,104.960847,100.7582590,70.652976,62.41677,33.486942,66.134210,99.644190,113.210213,112.484255,115.109023,112.916219,117.429802,102.630663,114.410944,103.636366,86.849653,60.625902,73.213599,102.417012,110.953990,118.59882,93.771169,122.696654};
                    
                        int n = sizeof(turbvapor) / sizeof(turbvapor[0]);
                        float media = calcularMedia(turbvapor, n);
                        float moda = calcularModa(turbvapor, n);
                        float varianza = calcularVarianza(turbvapor, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datoturbinavapor;
               while (fscanf(pf, "%c", &datoturbinavapor) != EOF)
               {
                fscanf(pf,"%[^,]", vapor);
	            printf("%s,", vapor);

	            fscanf(pf,"%c",coma6);

                fscanf(pf,"%d.%d,", &ha,&hb);
                printf("%d.%d,",ha,hb);

                fscanf(pf,"%d.%d,", &hc,&hdd);
                printf("%d.%d,",hc,hdd);

                fscanf(pf,"%d.%d,", &he,&hf);
                printf("%d.%d,",he,hf);

                fscanf(pf,"%d.%d,", &hg,&hh);
                printf("%d.%d,",hg,hh);

                fscanf(pf,"%d.%d,", &hi,&hj);
                printf("%d.%d,",hi,hj);

                fscanf(pf,"%d.%d,", &hk,&hl);
                printf("%d.%d,",hk,hl);

                fscanf(pf,"%d.%d,", &hm,&hn);
                printf("%d.%d,",hm,hn);

                fscanf(pf,"%d.%d,", &ho,&hp);
                printf("%d.%d,",ho,hp);

                fscanf(pf,"%d.%d,", &hq,&hr);
                printf("%d.%d,",hq,hr);

                fscanf(pf,"%d.%d,", &hs,&ht);
                printf("%d.%d,",hs,ht);

                fscanf(pf,"%d.%d,", &hu,&hv);
                printf("%d.%d,",hu,hv);

                fscanf(pf,"%d.%d,", &hw,&hx);
                printf("%d.%d,",hw,hx);

                fscanf(pf,"%d.%d,", &hy,&hz);
                printf("%d.%d,", hy,hz);

                fscanf(pf,"%d.%d,", &hha,&hhb);
                printf("%d.%d,", hha,hhb);

                fscanf(pf,"%d.%d,", &hhc,&hhd);
                printf("%d.%d,",hhc,hhd);

                fscanf(pf,"%d.%d,", &hhe,&hhf);
                printf("%d.%d,",hhe,hhf);

                fscanf(pf,"%d.%d,", &hhg,&hhh);
                printf("%d.%d,",hhg,hhh);

                fscanf(pf,"%d.%d,", &hhi,&hhj);
                printf("%d.%d,",hhi,hhj);

                fscanf(pf,"%d.%d,", &hhk,&hhl);
                printf("%d.%d,",hhk,hhl);

                fscanf(pf,"%d.%d,", &hhm,&hhn);
                printf("%d.%d,",hhm,hhn);

                fscanf(pf,"%d.%d,", &hho,&hhp);
                printf("%d.%d,",hho,hhp);

                fscanf(pf,"%d.%d,", &hhq,&hhr);
                printf("%d.%d,", hhq,hhr);

                fscanf(pf,"%d.%d,", &hhs,&hht);
                printf("%d.%d,",hhs,hht);

                fscanf(pf,"%d.%d", &hhu,&hhv);
                printf("%d.%d",hhu,hhv);
               }
               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

            case 8:
			printf("Has accedido a los datos de Ciclo Combinado.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float ciclocomb[24]={2729.183017,1544.065785,2151.091661,3384.471579,2444.871606,3658.878948,3718.134418,4047.368387,4943.197265,4407.05637,6317.636788,5154.143508,5898.394445,4671.261013,3873.203200,3146.865903,3713.639484,6478.937315,8460.459144,8082.027681,7704.900731,7066.859015,4672.406377,4368.592847};
                     
                        int n = sizeof(ciclocomb) / sizeof(ciclocomb[0]);
                        float media = calcularMedia(ciclocomb, n);
                        float moda = calcularModa(ciclocomb, n);
                        float varianza = calcularVarianza(ciclocomb, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datociclocombinado;
               while (fscanf(pf, "%c", &datociclocombinado) != EOF)
               {
                fscanf(pf,"%[^,]", comb);
	            printf("%s,", comb);

	            fscanf(pf,"%c",coma7);

                fscanf(pf,"%d.%d,", &ia,&ib);
                printf("%d.%d,",ia,ib);

                fscanf(pf,"%d.%d,", &ic,&id);
                printf("%d.0%d,",ic,id);

                fscanf(pf,"%d.%d,", &ie,&iff);
                printf("%d.0%d,",ie,iff);

                fscanf(pf,"%d.%d,", &ig,&ih);
                printf("%d.%d,",ig,ih);

                fscanf(pf,"%d.%d,", &ii,&ij);
                printf("%d.%d,",ii,ij);

                fscanf(pf,"%d.%d,", &ik,&il);
                printf("%d.%d,",ik,il);

                fscanf(pf,"%d.%d,", &im,&in);
                printf("%d.%d,",im,in);

                fscanf(pf,"%d.%d,", &io,&ip);
                printf("%d.%d,",io,ip);

                fscanf(pf,"%d.%d,", &iq,&ir);
                printf("%d.%d,",iq,ir);

                fscanf(pf,"%d.%d,", &is,&it);
                printf("%d.0%d,",is,it);

                fscanf(pf,"%d.%d,", &iu,&iv);
                printf("%d.%d,",iu,iv);

                fscanf(pf,"%d.%d,", &iw,&ix);
                printf("%d.%d,",iw,ix);

                fscanf(pf,"%d.%d,", &iy,&iz);
                printf("%d.%d,", iy,iz);

                fscanf(pf,"%d.%d,", &iia,&iib);
                printf("%d.%d,", iia,iib);

                fscanf(pf,"%d.%d,", &iic,&iid);
                printf("%d.%d,",iic,iid);

                fscanf(pf,"%d.%d,", &iie,&iif);
                printf("%d.%d,",iie,iif);

                fscanf(pf,"%d.%d,", &iig,&iih);
                printf("%d.%d,",iig,iih);

                fscanf(pf,"%d.%d,", &iii,&iij);
                printf("%d.%d,",iii,iij);

                fscanf(pf,"%d.%d,", &iik,&iil);
                printf("%d.%d,",iik,iil);

                fscanf(pf,"%d.%d,", &iim,&iin);
                printf("%d.0%d,",iim,iin);

                fscanf(pf,"%d.%d,", &iio,&iip);
                printf("%d.%d,",iio,iip);

                fscanf(pf,"%d.%d,", &iiq,&iir);
                printf("%d.%d,", iiq,iir);

                fscanf(pf,"%d.%d,", &iis,&iit);
                printf("%d.%d,",iis,iit);

                fscanf(pf,"%d.%d", &iiu,&iiv);
                printf("%d.%d",iiu,iiv);
               }
               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 9:
			printf("Has accedido a los datos de Energia Hidroeolica.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float hidroeolica[24]={0.99317,1.226483,1.921443,0.835908,3.227077,3.002042,3.578217,2.663478,1.429314,1.853454,1.139789,1.227861,1.110916,1.482045,2.126322,1.752528,1.917174,2.44956,3.562943,3.517675,2.075094,1.350072,1.169409,0.367104};
    
                        int n = sizeof(hidroeolica) / sizeof(hidroeolica[0]);
                        float media = calcularMedia(hidroeolica, n);
                        float moda = calcularModa(hidroeolica, n);
                        float varianza = calcularVarianza(hidroeolica, n);
                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                 char datohidroeolica;
               while (fscanf(pf, "%c", &datohidroeolica) != EOF)
               {
                fscanf(pf,"%[^,]", hdeoli);
	            printf("%s,", hdeoli);

	            fscanf(pf,"%c",coma8);

                fscanf(pf,"%d.%d,", &ja,&jb);
                printf("%d.%d,",ja,jb);

                fscanf(pf,"%d.%d,", &jc,&jd);
                printf("%d.%d,",jc,jd);

                fscanf(pf,"%d.%d,", &je,&jf);
                printf("%d.%d,",je,jf);

                fscanf(pf,"%d.%d,", &jg,&jh);
                printf("%d.%d,",jg,jh);

                fscanf(pf,"%d.%d,", &ji,&jj);
                printf("%d.%d,",ji,jj);

                fscanf(pf,"%d.%d,", &jk,&jl);
                printf("%d.00%d,",jk,jl);

                fscanf(pf,"%d.%d,", &jm,&jn);
                printf("%d.%d,",jm,jn);

                fscanf(pf,"%d.%d,", &jo,&jp);
                printf("%d.%d,",jo,jp);

                fscanf(pf,"%d.%d,", &jq,&jr);
                printf("%d.%d,",jq,jr);

                fscanf(pf,"%d.%d,", &js,&jt);
                printf("%d.%d,",js,jt);

                fscanf(pf,"%d.%d,", &ju,&jv);
                printf("%d.%d,",ju,jv);

                fscanf(pf,"%d.%d,", &jw,&jx);
                printf("%d.%d,",jw,jx);

                fscanf(pf,"%d.%d,", &jy,&jz);
                printf("%d.%d,", jy,jz);

                fscanf(pf,"%d.%d,", &jja,&jjb);
                printf("%d.%d,", jja,jjb);

                fscanf(pf,"%d.%d,", &jjc,&jjd);
                printf("%d.%d,",jjc,jjd);

                fscanf(pf,"%d.%d,", &jje,&jjf);
                printf("%d.%d,",jje,jjf);

                fscanf(pf,"%d.%d,", &jjg,&jjh);
                printf("%d.%d,",jjg,jjh);

                fscanf(pf,"%d.%d,", &jji,&jjj);
                printf("%d.%d,",jji,jjj);

                fscanf(pf,"%d.%d,", &jjk,&jjl);
                printf("%d.%d,",jjk,jjl);

                fscanf(pf,"%d.%d,", &jjm,&jjn);
                printf("%d.%d,",jjm,jjn);

                fscanf(pf,"%d.%d,", &jjo,&jjp);
                printf("%d.%d,",jjo,jjp);

                fscanf(pf,"%d.%d,", &jjq,&jjr);
                printf("%d.%d,", jjq,jjr);

                fscanf(pf,"%d.%d,", &jjs,&jjt);
                printf("%d.%d,",jjs,jjt);

                fscanf(pf,"%d.%d", &jju,&jjv);
                printf("%d.%d",jju,jjv);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 10:
			printf("Has accedido a los datos de Energia Eolica.\n");   
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float eolica[24]={7101.249123,6294.982856,5606.818805,4095.800569,4785.695033,3684.170619,4284.090513,3747.238495,3234.274816,4359.563921,6421.739529,6910.032613,5414.777160,4712.962772,6528.440466,5655.806361,4687.64999,3807.180833,4566.002106,4258.846638,4191.189274,5099.919318,6682.534764,5570.282592};
                        
                        int n = sizeof(eolica) / sizeof(eolica[0]);
                        float media = calcularMedia(eolica, n);
                        float moda = calcularModa(eolica, n);
                        float varianza = calcularVarianza(eolica, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");

            char datoeolica;
               while (fscanf(pf, "%c", &datoeolica) != EOF)
               {
                fscanf(pf,"%[^,]", eoli);
	            printf("%s,", eoli);

	            fscanf(pf,"%c",coma9);

                fscanf(pf,"%d.%d,", &ka,&kb);
                printf("%d.%d,",ka,kb);

                fscanf(pf,"%d.%d,", &kc,&kd);
                printf("%d.%d,",kc,kd);

                fscanf(pf,"%d.%d,", &ke,&kf);
                printf("%d.%d,",ke,kf);

                fscanf(pf,"%d.%d,", &kg,&kh);
                printf("%d.%d,",kg,kh);

                fscanf(pf,"%d.%d,", &ki,&kj);
                printf("%d.%d,",ki,kj);

                fscanf(pf,"%d.%d,", &kk,&kl);
                printf("%d.%d,",kk,kl);

                fscanf(pf,"%d.%d,", &km,&kn);
                printf("%d.0%d,",km,kn);

                fscanf(pf,"%d.%d,", &ko,&kp);
                printf("%d.%d,",ko,kp);

                fscanf(pf,"%d.%d,", &kq,&kr);
                printf("%d.%d,",kq,kr);

                fscanf(pf,"%d.%d,", &ks,&kt);
                printf("%d.%d,",ks,kt);

                fscanf(pf,"%d.%d,", &ku,&kv);
                printf("%d.%d,",ku,kv);

                fscanf(pf,"%d.%d,", &kw,&kx);
                printf("%d.0%d,",kw,kx);

                fscanf(pf,"%d.%d,", &ky,&kz);
                printf("%d.%d,", ky,kz);

                fscanf(pf,"%d.%d,", &kka,&kkb);
                printf("%d.%d,", kka,kkb);

                fscanf(pf,"%d.%d,", &kkc,&kkd);
                printf("%d.%d,",kkc,kkd);

                fscanf(pf,"%d.%d,", &kke,&kkf);
                printf("%d.%d,",kke,kkf);

                fscanf(pf,"%d.%d,", &kkg,&kkh);
                printf("%d.%d,",kkg,kkh);

                fscanf(pf,"%d.%d,", &kki,&kkj);
                printf("%d.%d,",kki,kkj);

                fscanf(pf,"%d.%d,", &kkk,&kkl);
                printf("%d.00%d,",kkk,kkl);

                fscanf(pf,"%d.%d,", &kkm,&kkn);
                printf("%d.%d,",kkm,kkn);

                fscanf(pf,"%d.%d,", &kko,&kkp);
                printf("%d.%d,",kko,kkp);

                fscanf(pf,"%d.%d,", &kkq,&kkr);
                printf("%d.%d,", kkq,kkr);

                fscanf(pf,"%d.%d,", &kks,&kkt);
                printf("%d.%d,",kks,kkt);

                fscanf(pf,"%d.%d", &kku,&kkv);
                printf("%d.%d",kku,kkv);
               }

               printf("\n");

			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 11:
			printf("Has accedido a los datos de Solar Fotovoltaica.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float solarfoto[24]={848.403074,973.686902,1688.757265,1665.571492,2388.831852,2325.571729,2617.534056,2395.8309,1927.916611,1777.274811,1347.957356,1023.70725,1569.291683,1693.011465,1455.368818,2581.307811,3380.729182,3215.923445,3381.156658,3239.672293,2693.50188,2005.321354,1533.099321,1115.958};           
                        int n = sizeof(solarfoto) / sizeof(solarfoto[0]);
                        float media = calcularMedia(solarfoto, n);
                        float moda = calcularModa(solarfoto, n);
                        float varianza = calcularVarianza(solarfoto, n);


                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                 char datofotovoltaica;
               while (fscanf(pf, "%c", &datofotovoltaica) != EOF)
               {
                fscanf(pf,"%[^,]", solarft);
	            printf("%s,", solarft);

	            fscanf(pf,"%c",coma10);

                fscanf(pf,"%d.%d,", &la,&lb);
                printf("%d.%d,",la,lb);

                fscanf(pf,"%d.%d,", &lc,&ld);
                printf("%d.%d,",lc,ld);

                fscanf(pf,"%d.%d,", &le,&lf);
                printf("%d.%d,",le,lf);

                fscanf(pf,"%d.%d,", &lg,&lh);
                printf("%d.%d,",lg,lh);

                fscanf(pf,"%d.%d,", &li,&lj);
                printf("%d.%d,",li,lj);

                fscanf(pf,"%d.%d,", &lk,&ll);
                printf("%d.%d,",lk,ll);

                fscanf(pf,"%d.%d,", &lm,&ln);
                printf("%d.%d,",lm,ln);

                fscanf(pf,"%d.%d,", &lo,&lp);
                printf("%d.%d,",lo,lp);

                fscanf(pf,"%d.%d,", &lq,&lr);
                printf("%d.%d,",lq,lr);

                fscanf(pf,"%d.%d,", &ls,&lt);
                printf("%d.%d,",ls,lt);

                fscanf(pf,"%d.%d,", &lu,&lv);
                printf("%d.%d,",lu,lv);

                fscanf(pf,"%d.%d,", &lw,&lx);
                printf("%d.%d,",lw,lx);

                fscanf(pf,"%d.%d,", &ly,&lz);
                printf("%d.%d,", ly,lz);

                fscanf(pf,"%d.%d,", &lla,&llb);
                printf("%d.0%d,", lla,llb);

                fscanf(pf,"%d.%d,", &llc,&lld);
                printf("%d.%d,",llc,lld);

                fscanf(pf,"%d.%d,", &lle,&llf);
                printf("%d.%d,",lle,llf);

                fscanf(pf,"%d.%d,", &llg,&llh);
                printf("%d.%d,",llg,llh);

                fscanf(pf,"%d.%d,", &lli,&llj);
                printf("%d.%d,",lli,llj);

                fscanf(pf,"%d.%d,", &llk,&lll);
                printf("%d.%d,",llk,lll);

                fscanf(pf,"%d.%d,", &llm,&lln);
                printf("%d.%d,",llm,lln);

                fscanf(pf,"%d.%d,", &llo,&llp);
                printf("%d.%d,",llo,llp);

                fscanf(pf,"%d.%d,", &llq,&llr);
                printf("%d.%d,", llq,llr);

                fscanf(pf,"%d.%d,", &lls,&llt);
                printf("%d.0%d,",lls,llt);

                fscanf(pf,"%d.%d", &llu,&llv);
                printf("%d.%d",llu,llv);
               }

               printf("\n");

			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 12:
			printf("Has accedido a los datos de Solar Termica.\n");
            printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");

                        
                        float solartermica[24]={102.634029,138.181326,355.015427,266.787519,645.597457,655.361716,828.492494,661.445101,447.444657,328.182894,172.426246,103.956001,170.978835,208.192368,120.568373,412.77761,621.247495,534.185927,667.235783,619.95899,437.343279,166.240105,104.768426,59.778183};
   
                        int n = sizeof(solartermica) / sizeof(solartermica[0]);
                        float media = calcularMedia(solartermica, n);
                        float moda = calcularModa(solartermica, n);
                        float varianza = calcularVarianza(solartermica, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");

            char datotermica;
               while (fscanf(pf, "%c", &datotermica) != EOF)
               {
                fscanf(pf,"%[^,]", solarter);
	            printf("%s,", solarter);

	            fscanf(pf,"%c",coma20);

                fscanf(pf,"%d.%d,", &lxa,&lxb);
                printf("%d.%d,",lxa,lxb);

                fscanf(pf,"%d.%d,", &lxc,&lxd);
                printf("%d.%d,",lxc,lxd);

                fscanf(pf,"%d.%d,", &lxe,&lxf);
                printf("%d.0%d,",lxe,lxf);

                fscanf(pf,"%d.%d,", &lxg,&lxh);
                printf("%d.%d,",lxg,lxh);

                fscanf(pf,"%d.%d,", &lxi,&lxj);
                printf("%d.%d,",lxi,lxj);

                fscanf(pf,"%d.%d,", &lxk,&lxl);
                printf("%d.%d,",lxk,lxl);

                fscanf(pf,"%d.%d,", &lxm,&lxn);
                printf("%d.%d,",lxm,lxn);

                fscanf(pf,"%d.%d,", &lxo,&lxp);
                printf("%d.%d,",lxo,lxp);

                fscanf(pf,"%d.%d,", &lxq,&lxr);
                printf("%d.%d,",lxq,lxr);

                fscanf(pf,"%d.%d,", &lxs,&lxt);
                printf("%d.%d,",lxs,lxt);

                fscanf(pf,"%d.%d,", &lxu,&lxv);
                printf("%d.%d,",lxu,lxv);

                fscanf(pf,"%d.%d,", &lxw,&lxx);
                printf("%d.%d,",lxw,lxx);

                fscanf(pf,"%d.%d,", &lxy,&lxz);
                printf("%d.%d,", lxy,lxz);

                fscanf(pf,"%d.%d,", &llxa,&llxb);
                printf("%d.%d,", llxa,llxb);

                fscanf(pf,"%d.%d,", &llxc,&llxd);
                printf("%d.%d,",llxc,llxd);

                fscanf(pf,"%d.%d,", &llxe,&llxf);
                printf("%d.%d,",llxe,llxf);

                fscanf(pf,"%d.%d,", &llxg,&llxh);
                printf("%d.%d,",llxg,llxh);

                fscanf(pf,"%d.%d,", &llxi,&llxj);
                printf("%d.%d,",llxi,llxj);

                fscanf(pf,"%d.%d,", &llxk,&llxl);
                printf("%d.%d,",llxk,llxl);

                fscanf(pf,"%d.%d,", &llxm,&llxn);
                printf("%d.%d,",llxm,llxn);

                fscanf(pf,"%d.%d,", &llxo,&llxp);
                printf("%d.%d,",llxo,llxp);

                fscanf(pf,"%d.%d,", &llxq,&llxr);
                printf("%d.%d,", llxq,llxr);

                fscanf(pf,"%d.%d,", &llxs,&llxt);
                printf("%d.%d,",llxs,llxt);

                fscanf(pf,"%d.%d", &llxu,&llxv);
                printf("%d.%d",llxu,llxv);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 13:
			printf("Has accedido a los datos de Otras Renovables.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float otrasrenovables[24]={390.590396,365.191889,359.459071,392.274795,390.931927,358.010046,352.713786,410.590237,396.278098,433.047494,434.361576,436.423907,428.663218,374.913003,423.887477,430.376969,397.335983,415.748786,409.345594,383.442347,341.437356,366.964524,364.536652,319.642072};
                        int n = sizeof(otrasrenovables) / sizeof(otrasrenovables[0]);
                        float media = calcularMedia(otrasrenovables, n);
                        float moda = calcularModa(otrasrenovables, n);
                        float varianza = calcularVarianza(otrasrenovables, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datootrasrenovables;
               while (fscanf(pf, "%c", &datootrasrenovables) != EOF)
               {
                fscanf(pf,"%[^,]", otras);
	            printf("%s,", otras);

	            fscanf(pf,"%c",coma11);

                fscanf(pf,"%d.%d,", &ma,&mb);
                printf("%d.%d,",ma,mb);

                fscanf(pf,"%d.%d,", &mc,&md);
                printf("%d.%d,",mc,md);

                fscanf(pf,"%d.%d,", &me,&mf);
                printf("%d.%d,",me,mf);

                fscanf(pf,"%d.%d,", &mg,&mh);
                printf("%d.%d,",mg,mh);

                fscanf(pf,"%d.%d,", &mi,&mj);
                printf("%d.%d,",mi,mj);

                fscanf(pf,"%d.%d,", &mk,&ml);
                printf("%d.0%d,",mk,ml);

                fscanf(pf,"%d.%d,", &mm,&mn);
                printf("%d.%d,",mm,mn);

                fscanf(pf,"%d.%d,", &mo,&mp);
                printf("%d.%d,",mo,mp);

                fscanf(pf,"%d.%d,", &mq,&mr);
                printf("%d.%d,",mq,mr);

                fscanf(pf,"%d.%d,", &ms,&mt);
                printf("%d.0%d,",ms,mt);

                fscanf(pf,"%d.%d,", &mu,&mv);
                printf("%d.%d,",mu,mv);

                fscanf(pf,"%d.%d,", &mw,&mx);
                printf("%d.%d,",mw,mx);

                fscanf(pf,"%d.%d,", &my,&mz);
                printf("%d.%d,", my,mz);

                fscanf(pf,"%d.%d,", &mma,&mmb);
                printf("%d.%d,", mma,mmb);

                fscanf(pf,"%d.%d,", &mmc,&mmd);
                printf("%d.%d,",mmc,mmd);

                fscanf(pf,"%d.%d,", &mme,&mmf);
                printf("%d.%d,",mme,mmf);

                fscanf(pf,"%d.%d,", &mmg,&mmh);
                printf("%d.%d,",mmg,mmh);

                fscanf(pf,"%d.%d,", &mmi,&mmj);
                printf("%d.%d,",mmi,mmj);

                fscanf(pf,"%d.%d,", &mmk,&mml);
                printf("%d.%d,",mmk,mml);

                fscanf(pf,"%d.%d,", &mmm,&mmn);
                printf("%d.%d,",mmm,mmn);

                fscanf(pf,"%d.%d,", &mmo,&mmp);
                printf("%d.%d,",mmo,mmp);

                fscanf(pf,"%d.%d,", &mmq,&mmr);
                printf("%d.%d,", mmq,mmr);

                fscanf(pf,"%d.%d,", &mms,&mmt);
                printf("%d.%d,",mms,mmt);

                fscanf(pf,"%d.%d", &mmu,&mmv);
                printf("%d.%d",mmu,mmv);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 14:
			printf("Has accedido a los datos de Cogeneracion.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float cogeneracion[24]={2405.236806,1838.16573,2253.823616,2193.285205,2206.328862,2181.276794,2243.226356,2106.285519,2166.255198,2147.907197,2173.751719,2175.103528,2147.921609,2119.152721,2217.055737,1709.641446,1870.643862,1467.383492,1053.738199,779.410997,739.19081,1102.000335,1453.363695,1098.167328};

                        int n = sizeof(cogeneracion) / sizeof(cogeneracion[0]);
                        float media = calcularMedia(cogeneracion, n);
                        float moda = calcularModa(cogeneracion, n);
                        float varianza = calcularVarianza(cogeneracion, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datocogeneracion;
               while (fscanf(pf, "%c", &datocogeneracion) != EOF)
               {
                fscanf(pf,"%[^,]", cogenera);
	            printf("%s,", cogenera);

	            fscanf(pf,"%c",coma12);

                fscanf(pf,"%d.%d,", &na,&nb);
                printf("%d.%d,",na,nb);

                fscanf(pf,"%d.%d,", &nc,&nd);
                printf("%d.%d,",nc,nd);

                fscanf(pf,"%d.%d,", &ne,&nf);
                printf("%d.%d,",ne,nf);

                fscanf(pf,"%d.%d,", &ng,&nh);
                printf("%d.%d,",ng,nh);

                fscanf(pf,"%d.%d,", &ni,&nj);
                printf("%d.%d,",ni,nj);

                fscanf(pf,"%d.%d,", &nk,&nl);
                printf("%d.%d,",nk,nl);

                fscanf(pf,"%d.%d,", &nm,&nn);
                printf("%d.%d,",nm,nn);

                fscanf(pf,"%d.%d,", &no,&np);
                printf("%d.%d,",no,np);

                fscanf(pf,"%d.%d,", &nq,&nr);
                printf("%d.%d,",nq,nr);

                fscanf(pf,"%d.%d,", &ns,&nt);
                printf("%d.%d,",ns,nt);

                fscanf(pf,"%d.%d,", &nu,&nv);
                printf("%d.%d,",nu,nv);

                fscanf(pf,"%d.%d,", &nw,&nx);
                printf("%d.%d,",nw,nx);

                fscanf(pf,"%d.%d,", &ny,&nz);
                printf("%d.%d,", ny,nz);

                fscanf(pf,"%d.%d,", &nna,&nnb);
                printf("%d.%d,", nna,nnb);

                fscanf(pf,"%d.%d,", &nnc,&nnd);
                printf("%d.%d,",nnc,nnd);

                fscanf(pf,"%d.%d,", &nne,&nnf);
                printf("%d.%d,",nne,nnf);

                fscanf(pf,"%d.%d,", &nng,&nnh);
                printf("%d.%d,",nng,nnh);

                fscanf(pf,"%d.%d,", &nni,&nnj);
                printf("%d.%d,",nni,nnj);

                fscanf(pf,"%d.%d,", &nnk,&nnl);
                printf("%d.%d,",nnk,nnl);

                fscanf(pf,"%d.%d,", &nnm,&nnn);
                printf("%d.%d,",nnm,nnn);

                fscanf(pf,"%d.%d,", &nno,&nnp);
                printf("%d.%d,",nno,nnp);

                fscanf(pf,"%d.%d,", &nnq,&nnr);
                printf("%d.%d,", nnq,nnr);

                fscanf(pf,"%d.%d,", &nns,&nnt);
                printf("%d.%d,",nns,nnt);

                fscanf(pf,"%d.%d", &nnu,&nnv);
                printf("%d.%d",nnu,nnv);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 15:
			printf("Has accedido a los datos de Residuos no Renovables.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float residuosnore[24]={182.932089,172.740345,184.342436,178.093968,177.333071,198.273452,205.014809,212.202012,179.817184,187.508,179.26082,181.223116,169.946929,144.546715,183.995605,171.926116,170.585177,155.903954,181.020454,164.769537,139.776655,155.069311,127.558061,134.668015};
                        int n = sizeof(residuosnore) / sizeof(residuosnore[0]);
                        float media = calcularMedia(residuosnore, n);
                        float moda = calcularModa(residuosnore, n);
                        float varianza = calcularVarianza(residuosnore, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");
                char datonorenovables;
               while (fscanf(pf, "%c", &datonorenovables) != EOF)
               {
                fscanf(pf,"%[^ ]", residuosno);
	            printf("%s", residuosno);
                fscanf(pf,"%[^ ]", residuosno1);
	            printf("%s", residuosno1);
                fscanf(pf,"%[^,]", residuosno2);
	            printf("%s,", residuosno2);


	            fscanf(pf,"%c",coma13);

                fscanf(pf,"%d.%d,", &oa,&ob);
                printf("%d.%d,",oa,ob);

                fscanf(pf,"%d.%d,", &oc,&od);
                printf("%d.%d,",oc,od);

                fscanf(pf,"%d.%d,", &oe,&of);
                printf("%d.%d,",oe,of);

                fscanf(pf,"%d.%d,", &og,&oh);
                printf("%d.0%d,",og,oh);

                fscanf(pf,"%d.%d,", &oi,&oj);
                printf("%d.%d,",oi,oj);

                fscanf(pf,"%d.%d,", &ok,&ol);
                printf("%d.%d,",ok,ol);

                fscanf(pf,"%d.%d,", &om,&on);
                printf("%d.0%d,",om,on);

                fscanf(pf,"%d.%d,", &oo,&op);
                printf("%d.%d,",oo,op);

                fscanf(pf,"%d.%d,", &oq,&or);
                printf("%d.%d,",oq,or);

                fscanf(pf,"%d.%d,", &os,&ot);
                printf("%d.%d,",os,ot);

                fscanf(pf,"%d.%d,", &ou,&ov);
                printf("%d.%d,",ou,ov);

                fscanf(pf,"%d.%d,", &ow,&ox);
                printf("%d.%d,",ow,ox);

                fscanf(pf,"%d.%d,", &oy,&oz);
                printf("%d.%d,", oy,oz);

                fscanf(pf,"%d.%d,", &ooa,&oob);
                printf("%d.%d,", ooa,oob);

                fscanf(pf,"%d.%d,", &ooc,&ood);
                printf("%d.%d,",ooc,ood);

                fscanf(pf,"%d.%d,", &ooe,&oof);
                printf("%d.%d,",ooe,oof);

                fscanf(pf,"%d.%d,", &oog,&ooh);
                printf("%d.%d,",oog,ooh);

                fscanf(pf,"%d.%d,", &ooi,&ooj);
                printf("%d.%d,",ooi,ooj);

                fscanf(pf,"%d.%d,", &ook,&ool);
                printf("%d.0%d,", ook,ool);

                fscanf(pf,"%d.%d,", &oom,&oon);
                printf("%d.%d,",oom,oon);

                fscanf(pf,"%d.%d,", &ooo,&oop);
                printf("%d.%d,",ooo,oop);

                fscanf(pf,"%d.%d,", &ooq,&oor);
                printf("%d.0%d,", ooq,oor);

                fscanf(pf,"%d.%d,", &oos,&oot);
                printf("%d.%d,",oos,oot);

                fscanf(pf,"%d.%d", &oou,&oov);
                printf("%d.%d",oou,oov);
               }

               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		case 16:
			printf("Has accedido a los datos de Residuos Renovables.\n");
			printf("Ahora elige si Modificar (1) o Leer (2) los datos:\n");
			scanf("%d", &tipo);
			if (tipo==1)
			{
				printf("Has elegido modificarlos. Ahora puedes: \n");
				printf("1. Ordenar los datos. \n");
				printf("2. Calcular estadisticas. \n");
				printf("3. Alterar (escribir o eliminar) datos. \n");
				printf("4. Mezclar los datos. \n");
				scanf("%d", &tipo);
				switch(tipo)
				{
					case 1:
						printf("Has elegido ordenar los datos.\n");
						break;
					case 2:
						printf("Has elegido calcular estadisticas.\n");
                        float residuosre[24]={59.850282,69.065868,72.598535,74.357494,59.595065,79.50385,81.91575,81.751572,68.076048,68.765996,80.249832,82.210439,79.365292,72.930818,82.069251,72.848577,79.964147,76.946932,75.732520,65.48815,59.668639,71.884421,67.535659,73.273156};
         
                        int n = sizeof(residuosre) / sizeof(residuosre[0]);
                        float media = calcularMedia(residuosre, n);
                        float moda = calcularModa(residuosre, n);
                        float varianza = calcularVarianza(residuosre, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
						break;
					case 3:
						printf("Has elegido alterar datos.\n");
						break;
					case 4:
						printf("Has elegido mezclar los datos.\n");
						break;
					default:
						printf("Esa no es una opcion.\n");
						break;
				}
			}
			else if (tipo==2)
			{
				printf("Has elegido leerlos.\n");

               char datosirenovables;
               while (fscanf(pf, "%c", &datosirenovables) != EOF)
               {
                fscanf(pf,"%[^,]", residuossi);
	            printf("%s,", residuossi);

	            fscanf(pf,"%c",coma14);

                fscanf(pf,"%d.%d,", &pa,&pb);
                printf("%d.%d,",pa,pb);

                fscanf(pf,"%d.%d,", &pc,&pd);
                printf("%d.0%d,",pc,pd);

                fscanf(pf,"%d.%d,", &pe,&pff);
                printf("%d.%d,",pe,pff);

                fscanf(pf,"%d.%d,", &pg,&ph);
                printf("%d.%d,",pg,ph);

                fscanf(pf,"%d.%d,", &pi,&pj);
                printf("%d.%d,",pi,pj);

                fscanf(pf,"%d.%d,", &pk,&pl);
                printf("%d.%d,",pk,pl);

                fscanf(pf,"%d.%d,", &pm,&pn);
                printf("%d.%d,",pm,pn);

                fscanf(pf,"%d.%d,", &po,&pp);
                printf("%d.%d,",po,pp);

                fscanf(pf,"%d.%d,", &pq,&pr);
                printf("%d.0%d,",pq,pr);

                fscanf(pf,"%d.%d,", &ps,&pt);
                printf("%d.%d,",ps,pt);

                fscanf(pf,"%d.%d,", &pu,&pv);
                printf("%d.%d,",pu,pv);

                fscanf(pf,"%d.%d,", &pw,&px);
                printf("%d.%d,",pw,px);

                fscanf(pf,"%d.%d,", &py,&pz);
                printf("%d.%d,", py,pz);

                fscanf(pf,"%d.%d,", &ppa,&ppb);
                printf("%d.%d,", ppa,ppb);

                fscanf(pf,"%d.%d,", &ppc,&ppd);
                printf("%d.0%d,",ppc,ppd);

                fscanf(pf,"%d.%d,", &ppe,&ppf);
                printf("%d.%d,",ppe,ppf);

                fscanf(pf,"%d.%d,", &ppg,&pph);
                printf("%d.%d,",ppg,pph);

                fscanf(pf,"%d.%d,", &ppi,&ppj);
                printf("%d.%d,",ppi,ppj);

                fscanf(pf,"%d.%d,", &ppk,&ppl);
                printf("%d.%d,",ppk,ppl);

                fscanf(pf,"%d.%d,", &ppm,&ppn);
                printf("%d.%d,",ppm,ppn);

                fscanf(pf,"%d.%d,", &ppo,&ppp);
                printf("%d.%d,",ppo,ppp);

                fscanf(pf,"%d.%d,", &ppq,&ppr);
                printf("%d.%d,", ppq,ppr);

                fscanf(pf,"%d.%d,", &pps,&ppt);
                printf("%d.%d,",pps,ppt);

                fscanf(pf,"%d.%d", &ppu,&ppv);
                printf("%d.%d",ppu,ppv);
               }
               printf("\n");
			}
			else 
			{
				printf("Error!\n");
			}
			break;

		 case 17:
        		printf("Has accedido a los datos de Generacion Total.\n");
        		printf("Ahora elige si Modificar (1) o Editar (2) los datos: \n");
        		scanf("%i", &tipo);
       			if (tipo==1)
       			{
           			printf("Has elegido modificarlos.\n");
            			printf("Ahora puedes:\n");
            			printf("1. Ordenar los datos.\n");
            			printf("2. Calcular estadísticas.\n");
            			printf("3. Alterar (escribir o eliminar) datos.\n");
            			printf("4. Mezclar los datos.\n");
            			scanf("%i", &tipo);
            			switch (tipo)
            			{
                			case 1:
                			printf("Has elegido ordenar los datos.\n");
                			break;
            				case 2:
                			printf("Has elegido calcular estadisticas.\n");
                            float gentot[24]={24305.47495,21134.389784,22097.189386,19900.364428,20471.481075,19863.791971,22436.768607,21585.235814,20688.868220,20634.64191,23017.698420,23875.280879,24302.335181,21120.725026,22758.010234,21751.098819,22084.406638,23242.456503,26409.488103,25284.741791,23658.546898,21941.569779,21564.342557,22197.577015};

                            int n = sizeof(gentot) / sizeof(gentot[0]);
                            float media = calcularMedia(gentot, n);
                            float moda = calcularModa(gentot, n);
                            float varianza = calcularVarianza(gentot, n);

                        printf("La media es: %.2f\n", media);
                        printf("La moda es: %.2f\n", moda);
                        printf("La varianza es: %.2f\n", varianza);
                			break;
            				case 3:
                			printf("Has elegido alterar datos.\n");
                			break;
            				case 4:
                			printf("Has elegido mezclar los datos.\n");
                			break;
            				default:
                			printf("Esa no es una opcion.\n");
                			break;
            			}
       			 }
        		 else if (tipo==2)
        		 {
                printf("Has elegido leerlos.\n");
                char datogeneraciontotal;
                while (fscanf(pf, "%c", &datogeneraciontotal) != EOF)
                {
                fscanf(pf,"%[^,]", genera);
	            printf("%s,", genera);

	            fscanf(pf,"%c",coma15);

                fscanf(pf,"%d.%d,", &qa,&qb);
                printf("%d.%d,",qa,qb);

                fscanf(pf,"%d.%d,", &qc,&qd);
                printf("%d.%d,",qc,qd);

                fscanf(pf,"%d.%d,", &qe,&qf);
                printf("%d.%d,",qe,qf);

                fscanf(pf,"%d.%d,", &qg,&qh);
                printf("%d.%d,",qg,qh);

                fscanf(pf,"%d.%d,", &qi,&qj);
                printf("%d.%d,",qi,qj);

                fscanf(pf,"%d.%d,", &qk,&ql);
                printf("%d.%d,",qk,ql);

                fscanf(pf,"%d.%d,", &qm,&qn);
                printf("%d.%d,",qm,qn);

                fscanf(pf,"%d.%d,", &qo,&qp);
                printf("%d.%d,",qo,qp);

                fscanf(pf,"%d.%d,", &qq,&qr);
                printf("%d.%d,",qq,qr);

                fscanf(pf,"%d.%d,", &qs,&qt);
                printf("%d.%d,",qs,qt);

                fscanf(pf,"%d.%d,", &qu,&qv);
                printf("%d.%d,",qu,qv);

                fscanf(pf,"%d.%d,", &qw,&qx);
                printf("%d.%d,",qw,qx);

                fscanf(pf,"%d.%d,", &qy,&qz);
                printf("%d.%d,", qy,qz);

                fscanf(pf,"%d.%d,", &qqa,&qqb);
                printf("%d.%d,", qqa,qqb);

                fscanf(pf,"%d.%d,", &qqc,&qqd);
                printf("%d.0%d,",qqc,qqd);

                fscanf(pf,"%d.%d,", &qqe,&qqf);
                printf("%d.0%d,",qqe,qqf);

                fscanf(pf,"%d.%d,", &qqg,&qqh);
                printf("%d.%d,",qqg,qqh);

                fscanf(pf,"%d.%d,", &qqi,&qqj);
                printf("%d.%d,",qqi,qqj);

                fscanf(pf,"%d.%d,", &qqk,&qql);
                printf("%d.%d,",qqk,qql);

                fscanf(pf,"%d.%d,", &qqm,&qqn);
                printf("%d.%d,",qqm,qqn);

                fscanf(pf,"%d.%d,", &qqo,&qqp);
                printf("%d.%d,",qqo,qqp);

                fscanf(pf,"%d.%d,", &qqq,&qqr);
                printf("%d.%d,", qqq,qqr);

                fscanf(pf,"%d.%d,", &qqs,&qqt);
                printf("%d.%d,",qqs,qqt);

                fscanf(pf,"%d.%d", &qqu,&qqv);
                printf("%d.%d",qqu,qqv);
                }
               printf("\n");
        		 }
        		 else 
        		 {
            			printf("Error!\n");
        		 }
        		 break;
    			 default:
        			printf("Esa no es una opción");
       			 break;
    			 }
    



            
	fclose(pf);	
      


	return 0;
}


//Funciones:

void identificarse()
{
    char nombre[50];
    char contrasena[50];
    bool identificado = false;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese su usuario:\n");
        scanf("%s", nombre);

        printf("Ingrese su contraseña:\n");
        scanf("%s", contrasena);

        if (strcmp(nombre, "Hipofosfito") == 0 && strcmp(contrasena, "12345") == 0)
        {
            printf("Identificación exitosa. ¡Bienvenido, %s!\n", nombre);
            identificado = true;
            break;
        }
        else
        {
            printf("Identificación fallida. Usuario o contraseña incorrectos. Dispones de %d intentos más para registrarte.\n", 9 - i);
        }
    }

    if (!identificado)
    {
        printf("Agotaste todos tus intentos. Identificación fallida.\n");
    }
}


float calcularMedia(float arr[], float n)
 {
    int sum = 0;
    int i;

    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    return (float)sum / n;
}


float calcularModa(float arr[], float n) 
{
    int maxcuenta = 0;
    int moda = 0;
    int i, j;

    for (i = 0; i < n; i++) 
    {
        int cuenta = 0;

        for (j = 0; j < n; j++) 
        {
            if (arr[j] == arr[i]) 
            {
                cuenta++;
            }
        }

        if (cuenta > maxcuenta) 
        {
            maxcuenta = cuenta;
            moda = arr[i];
        }
    }

    return moda;
}


float calcularVarianza(float arr[], float n) 
{
    float mean = calcularMedia(arr, n);
    float sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum += pow(arr[i] - mean, 2);
    }

    return sum / n;
}
