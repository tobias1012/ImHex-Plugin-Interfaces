#pragma once
#if defined(OS_WINDOWS)
    #include <windows.h>
#endif


#include <hex/plugin.hpp>
#include <hex/providers/provider.hpp>
#include <hex/helpers/intrinsics.hpp> // Unused function

class InterfaceProvider : public hex::prv::Provider
{
public:
    InterfaceProvider : hex::prv::Provider() {};
    ~InterfaceProvider() override = default;

    [[nodiscard]] bool isAvailable() const override {return true;}
    [[nodiscard]] bool isReadable() const override { return true; }
    [[nodiscard]] bool isWritable() const override { return false; }
    [[nodiscard]] bool isResizable() const override { return false; }
    [[nodiscard]] bool isSavable() const override { return false; }
    [[nodiscard]] bool isDumpable() const override { return false; }

    void readRaw(u64 offset, void *buffer, size_t size) override {}; //This will need a function later
    void writeRaw(u64 offset, const void *buffer, size_t size) override { hex::unused(offset, buffer, size);}
    [[nodiscard]] u64 getActualSize() const override {return 0xFFFF;} // This should be updated

    [[nodiscard]] std::string getName() const override;
    [[nodiscard]] std::vector<Description> getDataDescription() const override { return { }; };

}