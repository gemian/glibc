/*
 * IBM Accurate Mathematical Library
 * Written by International Business Machines Corp.
 * Copyright (C) 2001-2020 Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 */

/******************************************************************/
/*                                                                */
/* MODULE_NAME:sincos32.h                                         */
/*                                                                */
/* common data and variables prototype and definition             */
/******************************************************************/

#ifndef SINCOS32_H
#define SINCOS32_H

#ifdef BIG_ENDI
static const number
/**/          hpinv = {{0x3FE45F30, 0x6DC9C883}}, /*  0.63661977236758138    */
/**/          toint = {{0x43380000, 0x00000000}}; /*  6755399441055744       */

#else
#ifdef LITTLE_ENDI
static const number
/**/          hpinv = {{0x6DC9C883, 0x3FE45F30}}, /*  0.63661977236758138    */
/**/          toint = {{0x00000000, 0x43380000}}; /*  6755399441055744       */

#endif
#endif

static const mp_no
  oofac27 = {-3,{1.0,7.0,4631664.0,12006312.0,13118056.0,6538613.0,646354.0,
   8508025.0,9131256.0,7548776.0,2529842.0,8864927.0,660489.0,15595125.0,12777885.0,
   11618489.0,13348664.0,5486686.0,514518.0,11275535.0,4727621.0,3575562.0,
   13579710.0,5829745.0,7531862.0,9507898.0,6915060.0,4079264.0,1907586.0,
   6078398.0,13789314.0,5504104.0,14136.0}},
  pi = {1,{1.0,3.0,
    2375530.0,8947107.0,578323.0,1673774.0,225395.0,4498441.0,3678761.0,
    10432976.0,536314.0,10021966.0,7113029.0,2630118.0,3723283.0,7847508.0,
    6737716.0,15273068.0,12626985.0,12044668.0,5299519.0,8705461.0,11880201.0,
    1544726.0,14014857.0,7994139.0,13709579.0,10918111.0,11906095.0,16610011.0,
    13638367.0,12040417.0,11529578.0,2522774.0}},
   hp = {1,{1.0, 1.0,
    9576373.0,4473553.0,8677769.0,9225495.0,112697.0,10637828.0,
    10227988.0,13605096.0,268157.0,5010983.0,3556514.0,9703667.0,
    1861641.0,12312362.0,3368858.0,7636534.0,6313492.0,14410942.0,
    2649759.0,12741338.0,14328708.0,9160971.0,7007428.0,12385677.0,
    15243397.0,13847663.0,14341655.0,16693613.0,15207791.0,14408816.0,
    14153397.0,1261387.0,6110792.0,2291862.0,4181138.0,5295267.0}};

static const double toverp[75] = {
  10680707.0,  7228996.0,  1387004.0,  2578385.0, 16069853.0,
  12639074.0,  9804092.0,  4427841.0, 16666979.0, 11263675.0,
  12935607.0,  2387514.0,  4345298.0, 14681673.0,  3074569.0,
  13734428.0, 16653803.0,  1880361.0, 10960616.0,  8533493.0,
   3062596.0,  8710556.0,  7349940.0,  6258241.0,  3772886.0,
   3769171.0,  3798172.0,  8675211.0, 12450088.0,  3874808.0,
   9961438.0,   366607.0, 15675153.0,  9132554.0,  7151469.0,
   3571407.0,  2607881.0, 12013382.0,  4155038.0,  6285869.0,
   7677882.0, 13102053.0, 15825725.0,   473591.0,  9065106.0,
  15363067.0,  6271263.0,  9264392.0,  5636912.0,  4652155.0,
   7056368.0, 13614112.0, 10155062.0,  1944035.0,  9527646.0,
  15080200.0,  6658437.0,  6231200.0,  6832269.0, 16767104.0,
   5075751.0,  3212806.0,  1398474.0,  7579849.0,  6349435.0,
  12618859.0,  4703257.0, 12806093.0, 14477321.0,  2786137.0,
  12875403.0,  9837734.0, 14528324.0, 13719321.0,   343717.0 };

#endif
