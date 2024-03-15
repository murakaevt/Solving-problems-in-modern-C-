#include "serialization.h"

namespace serialization{

pi_proto::Pi SerializePi(const Pi& pi){
pi_proto::Pi proto_pi;
proto_pi.set_value(pi.value_);
pi_proto::Nilakantha nil;
nil.set_series_length(pi.series_length_);
*proto_pi.mutable_nilakantha() = std::move(nil);
proto_pi.set_input_number(pi.input_number_);

return proto_pi;
}

pi_proto::ContainerPi SerializeContainerPi (const PiSearcher& pi_searcher){
pi_proto::ContainerPi container_pi;
for(const auto& pi : *pi_searcher.Get()){
pi_proto::Pi proto_pi = SerializePi(pi);
auto& all_pi = *container_pi.mutable_all_pi(); //*object.mutable_X() = value
*container_pi.add_all_pi() = proto_pi; //*proto.add_palette() = SerializeColor(color);
}

return container_pi;
}

void Serialize(const std::filesystem::path& path, 
               const PiSearcher& pi_searcher) {    
    std::ofstream out_file(path, std::ios::binary); //| std::ios::app
    pi_proto::ContainerPi container_pi = SerializeContainerPi(pi_searcher);
    container_pi.SerializeToOstream(&out_file);
}

std::optional< pi_proto::ContainerPi> Deserialize(const std::filesystem::path& path) {
    std::ifstream in_file(path, std::ios::binary);
     pi_proto::ContainerPi object;
    if (!object.ParseFromIstream(&in_file)) {
        return std::nullopt;
    }

    // тут нужен move, поскольку возвращается другой тип
    return {std::move(object)};
}

} //namespace serialization 