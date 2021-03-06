#ifndef SATURATOR_H_
#define SATURATOR_H_

#include "approx.h"

namespace snd {

template <typename fp_t>
fp_t tanhSaturator(fp_t x, fp_t level) {
  return level * snd::tanh<fp_t>(x / level);
}

}; // !snd

#endif // !SATURATOR_H_
