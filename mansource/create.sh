#!/bin/sh
INDIR=$(dirname $0)
OUTDIR=$(realpath $INDIR/../man)
BINDIR=$(realpath $INDIR/../bin)
mkdir -p $OUTDIR
txt2man -d "15 Apr 2017" -t dosdecode -r dosdecode-1.0 -s 1 -v "Ryan's Tools" $INDIR/dosdecode > $OUTDIR/dosdecode.1
txt2man -d "31 Dec 2017" -t gbainfo -r gbainfo-1.0 -s 1 -v "Ryan's Tools" $INDIR/gbainfo > $OUTDIR/gbainfo.1
txt2man -d "10 Sep 2016" -t gbinfo -r gbinfo-1.0 -s 1 -v "Ryan's Tools" $INDIR/gbinfo > $OUTDIR/gbinfo.1
txt2man -d "05 Dec 2016" -t n64info -r n64info-1.0 -s 1 -v "Ryan's Tools" $INDIR/n64info > $OUTDIR/n64info.1
txt2man -d "06 Nov 2017" -t snesinfo -r snesinfo-1.0 -s 1 -v "Ryan's Tools" $INDIR/snesinfo > $OUTDIR/snesinfo.1
txt2man -d "04 May 2013" -t geninfo -r geninfo-1.0 -s 1 -v "Ryan's Tools" $INDIR/geninfo > $OUTDIR/geninfo.1
txt2man -d "14 Nov 2017" -t manpdf -r manpdf-1.0 -s 1 -v "Ryan's Tools" $INDIR/manpdf > $OUTDIR/manpdf.1
txt2man -d "14 Nov 2017" -t manlocalpdf -r manlocalpdf-1.0 -s 1 -v "Ryan's Tools" $INDIR/manlocalpdf > $OUTDIR/manlocalpdf.1
