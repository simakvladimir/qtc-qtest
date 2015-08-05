#ifndef QTCQTESTPLUGIN_H
#define QTCQTESTPLUGIN_H

#include "qtcqtest_global.h"

#include <extensionsystem/iplugin.h>

namespace QtcQtest {
namespace Internal {

class QtcQtestPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "QtcQtest.json")

public:
    QtcQtestPlugin();
    ~QtcQtestPlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private slots:
    void triggerAction();
};

} // namespace Internal
} // namespace ExamplePlugin

#endif // QTCQTESTPLUGIN_H

