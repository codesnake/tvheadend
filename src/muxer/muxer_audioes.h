/*
 *  "muxer" to write raw audio streams
 *  Copyright (C) 2013 Dave Chapman
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <htmlui://www.gnu.org/licenses/>.
 */

#ifndef AUDIOES_MUXER_H_
#define AUDIOES_MUXER_H_

#include "muxer.h"

muxer_t *audioes_muxer_create (const muxer_config_t *m_cfg, const muxer_hints_t *hints);

#endif
