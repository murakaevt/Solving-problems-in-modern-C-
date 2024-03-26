#include "serialization.h"

Proto::IPv4 SerializeIPv4(const IPv4& ipv4, const IPv4& ipv4_buf){
   Proto::IPv4 object;
   for(const auto& ip : ipv4.GetValue()){
    if(ipv4_buf.GetValue().find(ip) == ipv4_buf.GetValue().end()){
    object.add_list(ip);
    }
   }
return object;
}

IPv4 DeserializeIPv4(Proto::IPv4& proto){
  IPv4 ipv4;
  for(auto& ip_proto : proto.list()){
    ipv4.SetIP(ip_proto);
  }
  return ipv4;
}

std::optional<Proto::IPv4> Deserialize(const std::filesystem::path& path) {
    std::ifstream in_file(path, std::ios::binary);
     Proto::IPv4 object;
    if (!object.ParseFromIstream(&in_file)) {
        return std::nullopt;
    }    
    return {std::move(object)};
}

 void Serialize(const std::filesystem::path& path, const IPv4& ipv4) {  
    std::optional<Proto::IPv4> object_buf = Deserialize(path);
IPv4 ipv4_buf = DeserializeIPv4(*object_buf);
    std::ofstream out_file(path, std::ios::binary | std::ios::app); 
    Proto::IPv4 object = SerializeIPv4(ipv4, ipv4_buf);
    object.SerializeToOstream(&out_file);
}