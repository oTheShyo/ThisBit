#pragma once
#include <QString>

namespace h2d {
// Register only Thisbit's own handler. Existing default applications are preserved.
bool registerProjectFileAssociation(QString *error = nullptr);
} // namespace h2d
