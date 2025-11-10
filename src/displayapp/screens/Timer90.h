#pragma once

#include "displayapp/screens/Timer.h"
#include "displayapp/screens/Screen.h"

#include "components/timer/Timer.h"

namespace Pinetime::Applications {
  namespace Screens {
    class Timer90 : public Screen {
    };
  }

  template <>
  struct AppTraits<Apps::Timer90> {
    static constexpr Apps app = Apps::Timer90;
    static constexpr const char* icon = Screens::Symbols::hourGlass;

    static Screens::Screen* Create(AppControllers& controllers) {
      return new Screens::Timer(controllers.timer, 90);
    };

    static bool IsAvailable(Pinetime::Controllers::FS& /*filesystem*/) {
      return true;
    };
  };
}
