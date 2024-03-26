#pragma once
#include "ipv4.h"
#include <ipv4.pb.h>
#include <filesystem>
#include <utility>
#include <fstream>
#include <optional>

Proto::IPv4 SerializeIPv4(const IPv4& ipv4, const IPv4& ipv4_buf);

IPv4 DeserializeIPv4(Proto::IPv4& proto);

std::optional<Proto::IPv4> Deserialize(const std::filesystem::path& path);

 void Serialize(const std::filesystem::path& path, const IPv4& ipv4);
