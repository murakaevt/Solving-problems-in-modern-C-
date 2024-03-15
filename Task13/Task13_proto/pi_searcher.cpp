#include "pi_searcher.h"

void PiSearcher::Add(uint64_t input_number){
pi_vector_.emplace_back(std::move(PiCreator(input_number)));
}

void PiSearcher::Print() const{
    if(pi_vector_.empty()){
        std::cout << "Nothing to print!" << std::endl;
    } 
    else {
    for(const auto pi : pi_vector_){
    std::cout << "The value of pi: " << std::setprecision(15) << pi.value_ 
              << ", the Nilakantha series length: " << pi.series_length_ 
              << ", the entered number: " << pi.input_number_ << "." << std::endl; 
}
}
}

const std::vector<Pi>* PiSearcher::Get() const{
    return &pi_vector_;
}

std::tuple<double, uint64_t> PiSearcher::PiSearcherNilakanthaSeries(uint64_t input_number){
    
double pi = 3.0;
double max_buf = 2.0;
bool cycle = 0;
int series_length = 0;
while(max_buf <= input_number){
    if(!cycle){
pi += double(4.0 / (max_buf*(max_buf+1)*(max_buf+2)));
cycle = 1;
}
else{
pi -= double(4.0 / (max_buf*(max_buf+1)*(max_buf+2)));
cycle = 0;
}
max_buf += 2;
series_length++;
}
return std::tuple{pi, series_length};
}

Pi PiSearcher::PiCreator(uint64_t input_number){
auto [pi, length] = PiSearcherNilakanthaSeries(input_number);
return {pi, length, input_number};
}