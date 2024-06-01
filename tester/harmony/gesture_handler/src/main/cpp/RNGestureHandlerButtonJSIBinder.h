#pragma once

// This file was generated.

#include "RNOHCorePackage/ComponentBinders/ViewComponentJSIBinder.h"

namespace rnoh {
class RNGestureHandlerButtonJSIBinder : public ViewComponentJSIBinder {
  protected:
    facebook::jsi::Object createNativeProps(facebook::jsi::Runtime &rt) override {
        auto object = ViewComponentJSIBinder::createNativeProps(rt);
        object.setProperty(rt, "exclusive", true);
        object.setProperty(rt, "foreground", true);
        object.setProperty(rt, "borderless", true);
        object.setProperty(rt, "enabled", true);
        object.setProperty(rt, "rippleColor", true);
        object.setProperty(rt, "rippleRadius", true);
        object.setProperty(rt, "touchSoundDisabled", true);
        return object;
    }

    facebook::jsi::Object createBubblingEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        return events;
    }

    facebook::jsi::Object createDirectEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        return events;
    }
};
} // namespace rnoh
