/*
Copyright (C) 2013 simplex

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KRANE_SCML_HPP
#define KRANE_SCML_HPP

#include "kanim.hpp"
#include "kbuild.hpp"
#include "krane_common.hpp"

namespace Krane {
void exportToSCML(std::ostream &out, const KBuild &bild,
                  const KAnimBankCollection &banks);
}

#endif
