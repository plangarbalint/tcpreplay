/* $Id$ */

/*
 *   Copyright (c) 2001-2010 Aaron Turner <aturner at synfin dot net>
 *   Copyright (c) 2013-2022 Fred Klassen <tcpreplay at appneta dot com> - AppNeta
 *
 *   The Tcpreplay Suite of tools is free software: you can redistribute it 
 *   and/or modify it under the terms of the GNU General Public License as 
 *   published by the Free Software Foundation, either version 3 of the 
 *   License, or with the authors permission any later version.
 *
 *   The Tcpreplay Suite is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with the Tcpreplay Suite.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/*
 * Functions for processing args/data generated by -x and -X
 */

int parse_xX_str(tcpr_xX_t *xX, char *str, tcpr_bpf_t *bpf);
int process_xX_by_cidr_ipv4(int, tcpr_cidr_t *, ipv4_hdr_t *);
int process_xX_by_cidr_ipv6(int, tcpr_cidr_t *, ipv6_hdr_t *);

/*
 * Include/Exclude (xXmode) values
 */
#define xXError 0
#define xXSource 1
#define xXDest 2
#define xXBoth 4
#define xXEither 8
#define xXPacket 16
#define xXBPF 32
#define xXExclude 128           /* if exclude mode, add 128 to above value */
