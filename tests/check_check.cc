/* -*- mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*- */
// vim: ft=cpp:expandtab:ts=8:sw=4:softtabstop=4:
#ident "Copyright (c) 2012-2013 Tokutek Inc.  All rights reserved."
#ident "$Id$"

#include "check.h"
#include <signal.h>
#include <stdlib.h>

// To see if check(0) aborts, install a signal handler that does exit(0).

void handler(int i __attribute__((unused))) {
    exit(0);
}

int test_main (int argc __attribute__((unused)), const char *argv[] __attribute__((unused))) {
    signal(SIGABRT, handler);
    check(0);
    return 1;
}

