#pragma once
#include "pi_searcher.h"
#include <pi_number.pb.h>
#include <filesystem>
#include <optional>
#include <utility>
#include <string_view>
#include <fstream>

struct Pi;
class PiSearcher;
namespace serialization{

pi_proto::Pi SerializePi(const Pi& pi);

pi_proto::ContainerPi SerializeContainerPi (const PiSearcher& pi_searcher);

void Serialize(const std::filesystem::path& path, const PiSearcher& pi_searcher);

std::optional<pi_proto::ContainerPi> Deserialize(const std::filesystem::path& path);

} //namespace serialization 