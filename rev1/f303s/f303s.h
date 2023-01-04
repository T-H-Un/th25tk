/* 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "quantum.h"

#define LAYOUT_all( \
    K000, K001, K002, K003, K004, R000, R001, R002, R003, R004,\
    K100, K101, K102, K103, K104, R100, R101, R102, R103, R104,\
    K200, K201, K202, K203, K204, R200, R201, R202, R203, R204,\
    K300, K301, K302, K303, K304, R300, R301, R302, R303, R304,\
    K400, K401, K402, K403, K404, R400, R401, R402, R403, R404 \
) \
{ \
    { K000, K001, K002, K003, K004}, \
    { K100, K101, K102, K103, K104}, \
    { K200, K201, K202, K203, K204}, \
    { K300, K301, K302, K303, K304}, \
    { K400, K401, K402, K403, K404}, \
    { R000, R001, R002, R003, R004}, \
    { R100, R101, R102, R103, R104}, \
    { R200, R201, R202, R203, R204}, \
    { R300, R301, R302, R303, R304}, \
    { R400, R401, R402, R403, R404}, \
}



