#ifndef NODEC__SERIALIZATION__VECTOR4_HPP_
#define NODEC__SERIALIZATION__VECTOR4_HPP_

#include <cereal/cereal.hpp>

#include <nodec/vector4.hpp>

namespace nodec {

template<class Archive, typename T>
void serialize(Archive &archive, Vector4<T> &vec) {
    archive(
        cereal::make_nvp("x", vec.x),
        cereal::make_nvp("y", vec.y),
        cereal::make_nvp("z", vec.z),
        cereal::make_nvp("w", vec.w));
}

} // namespace nodec

#endif