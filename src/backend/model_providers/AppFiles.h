// Pegasus Frontend
// Copyright (C) 2017  Mátyás Mustoha
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <QVector>

namespace Model { class Locale; }
namespace Model { class Theme; }


namespace model_providers {

struct AppFiles {
    static const QLatin1String DEFAULT_LOCALE_TAG;

    static QVector<Model::Locale*> findAvailableLocales();
    static QVector<Model::Theme*> findAvailableThemes();
};

} // namespace model_providers