// Copyright (c) 2022 Manuel Schneider

#pragma once
#include "export.h"
#include "extension.h"
#include <QWidget>

namespace albert {

/// Base class for all configurable plugins
class ALBERT_EXPORT SettingsWidgetProvider : virtual public Extension
{
public:
    /// Returns the settings widget for this plugin
    /// @note The widgets objectName() is used as list item title
    /// @note Implementations must give away ownership (do not delete!)
    virtual QWidget* createSettingsWidget() const = 0;
};

}