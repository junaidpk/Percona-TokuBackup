/* -*- mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*- */
// vim: ft=cpp:expandtab:ts=8:sw=4:softtabstop=4:
#ident "Copyright (c) 2012-2013 Tokutek Inc.  All rights reserved."
#ident "$Id$"

#include <pthread.h>

#include "manager.h"

#define NO_DEPRECATE_PTHREAD_MUTEXES
#include "mutex.h"
#include "check.h"

void pmutex_lock(pthread_mutex_t *mutex) throw() {
    int r = pthread_mutex_lock(mutex);
    check(r==0);
}

void pmutex_unlock(pthread_mutex_t *mutex) throw() {
    int r = pthread_mutex_unlock(mutex);
    check(r==0);
}