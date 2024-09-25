#pragma once
#if defined(OS_WINDOWS)
    #include <windows.h>
#endif


#include <hex/plugin.hpp>
#include <hex/providers/provider.hpp>

class InterfaceProvider : public hex : prv : Provider
{
public:
    InterfaceProvider : hex::prv::Provider(){};
    ~InterfaceProvider() override = default;

    [[nodiscard]] bool isReadable() const override { return true; }
    [[nodiscard]] bool isWritable() const override { return false; }
    [[nodiscard]] bool isResizable() const override { return false; }
    [[nodiscard]] bool isSavable() const override { return false; }
    [[nodiscard]] bool isDumpable() const override { return false; }


}