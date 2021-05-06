#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /afs/cern.ch/user/a/addropul/CMSSW_10_6_0_pre4/src/L1Trigger/Run3Ntuplizer/test/conifer/prj_144013/my_prj_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
