#pragma once
#include <string>
#include <string_view>

class InspectorISBN {
public:
explicit InspectorISBN(std::string_view string)
: isbn_(string),
  simbols_("123456789"),
  error_("") {}

void Set(std::string_view string);

std::string_view Get() const;

const std::string& GetError() const;

bool check();

private:
std::string_view isbn_;
std::string simbols_{"123456789"};
std::string error_{""};
};