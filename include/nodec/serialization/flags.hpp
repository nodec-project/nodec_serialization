#ifndef NODEC__SERIALIZATION__FLAGS_HPP_
#define NODEC__SERIALIZATION__FLAGS_HPP_

#include <cereal/cereal.hpp>

#include <nodec/flags.hpp>

namespace nodec {

template<class Archive, typename E>
void load_minimal(Archive &, Flags<E> &flags, const typename Flags<E>::underlying_type &value) {
    flags.set_underlying_value(value);
}

template<class Archive, typename E>
typename Flags<E>::underlying_type save_minimal(Archive &, const Flags<E> &flags) {
    return flags.underlying_value();
}

}

#endif
