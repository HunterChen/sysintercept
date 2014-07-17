/*
 * Copyright 2012 Tim Diels
 *
 * This file is part of sysintercept.
 *
 * sysintercept is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sysintercept is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sysintercept.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef REPLACEMENT_H_
#define REPLACEMENT_H_

#include <boost/regex/icu.hpp>

class Replacement {
	public:
		Replacement(sysintercept::config::xml::Replacement&);

		std::wstring apply_to(const std::wstring& str);

	private:
		boost::u32regex match_expression;
		std::wstring replacement;
		boost::match_flag_type match_flags;
};

#endif
