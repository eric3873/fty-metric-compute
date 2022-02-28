/*  =========================================================================
    fty_metric_compute - 

    Copyright (C) 2016 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#pragma once

#include "cmstats.h"
#include "cmsteps.h"
#include <malamute.h>

// It is a "CM" entity
typedef struct _cm_t
{
    char*         name;     // server name
    cmstats_t*    stats;    // computed statictics for all types and steps
    cmsteps_t*    steps;    // info about supported steps
    zlist_t*      types;    // info about supported statistic types (min, max, avg)
    mlm_client_t* client;   // malamute client
    char*         filename; // state file name
} cm_t;
